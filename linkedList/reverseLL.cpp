#include<iostream>
using namespace std;
class Node{
    public: 
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void insertAtHead(Node* &head,int data){
    Node* newNode = new Node(data);
    if(head==NULL){
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}
void insertAtEnd(Node* &head, int data){
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(data);
    temp->next = newNode;
}
void insertAtPosition(Node* &head, int data, int position){
    if(position==1){
        insertAtHead(head,data);
        return;
    }
    Node *temp = head;
    Node *prev = NULL;
    int count = 1;
    while(count<position){
        prev = temp;
        if(temp->next==NULL){
            insertAtEnd(head,data);
            return;
        }
        temp = temp->next;
        count++;
    }
    Node* newNode = new Node(data);
    newNode->next = temp;
    prev->next = newNode;
}
void print(Node* &head){
    if(head==NULL){
        cout<<"list is empty";
        return;
    }
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void reverseUsingIteration(Node* &head){
    if(head==NULL || head->next==NULL){
        return;
    }

    Node* current = head;
    Node* prev = NULL;

    while(current!=NULL){
        Node* forward = current->next; 
        current->next = prev;
        prev = current;
        current = forward;
    }
    head = prev;
}
void reverseUsingRecursionOne(Node* &head, Node* &current, Node* &prev){
    if(current==NULL){
        head = prev;
        return;
    } 

    Node* forward = current->next;
    reverseUsingRecursionOne(head,forward,current);
    current->next = prev;
}

int main(){
    Node* head = NULL;
    insertAtHead(head,10);
    insertAtEnd(head,50);
    insertAtPosition(head,20,2);
    insertAtPosition(head,40,3);
    insertAtPosition(head,30,3);
    print(head);
    // 10 20 30 40 50
    
    //Approach 1:
    reverseUsingIteration(head);
    print(head);

    //Approach 2: 
    Node* current = head;
    Node* prev = NULL;
    reverseUsingRecursionOne(head,current,prev);
    print(head);

    return 0;
}
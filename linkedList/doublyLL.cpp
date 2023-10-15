#include<iostream>
using namespace std;

class Node{
    public: 
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }

    ~Node(){
        if(next!=NULL){
            delete next;
            next = NULL;
        }
    }
};
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void insertAtHead(Node* &head, int data){
    Node* newNode = new Node(data);

    newNode -> next = head;
    head ->prev = newNode;
    head = newNode;
}
void insertAtEnd(Node* &head, int data){
    Node* newNode = new Node(data);
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp -> next = newNode;
    newNode -> prev = temp;  
}
void insertAtPosition(Node* &head, int data, int position){
    if(position==1){
        insertAtHead(head,data);
        return;
    }
    else{
        Node* newNode = new Node(data);
        Node* before = NULL;
        Node* after = head;
        int count = 1;
        while(count<position){
            before = after;
            if(after->next==NULL){
                insertAtEnd(head,data);
                return;
            }
            after = after -> next;
            count++;
        }
        newNode -> next = after;
        after -> prev = newNode;
        before -> next = newNode;
        newNode -> prev = before;
    }
}
int length(Node* &head){
    Node* temp = head;
    int len = 0;
    while(temp!=NULL){
        temp = temp->next;
        len++;
    }
    return len;
}
void deleteAtPosition(Node* &head, int position){
    if(position==1){
        Node* temp = head;
        head = head -> next;
        head -> prev = NULL;
        temp -> next = NULL;
        delete temp;
        return;
    }

    Node* toDelete = head;
    Node* before = NULL;
    int count = 1;
    while(count<position){
        before = toDelete;
        toDelete = toDelete -> next;
        count++;
    }
    before->next = toDelete->next;
    toDelete->prev = NULL;
    toDelete->next = NULL;

    delete toDelete;
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    print(head);
    cout<<length(head)<<endl;

    insertAtHead(head,20);
    insertAtHead(head,30);
    print(head);
    cout<<length(head)<<endl;;

    insertAtEnd(head,0);
    insertAtEnd(head,-10);
    print(head);
    cout<<length(head)<<endl;

    insertAtPosition(head,40,1);
    insertAtPosition(head,35,3);
    insertAtPosition(head,-20,8);
    print(head);
    cout<<length(head)<<endl;

    deleteAtPosition(head,1);
    deleteAtPosition(head,2);
    deleteAtPosition(head,5);
    deleteAtPosition(head,5);
    print(head);
    cout<<length(head)<<endl;

    return 0;
}
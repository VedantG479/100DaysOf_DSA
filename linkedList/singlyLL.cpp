#include<iostream>
using namespace std;

class Node{
    public: 
    int data;
    Node* next;
    //Constructor..
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    //Destructor..
    ~Node(){
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
    }
};
void insertAtHead(Node* &head, int data){
    Node* newNode = new Node(data);
    newNode ->  next = head;
    head = newNode;
}
void insertAtEnd(Node* &head, int data){
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp -> next;
    }
    Node* newNode = new Node(data);
    temp->next = newNode;
}
void insertAtPosition(Node* &head, int position, int data){
    if(position==1){
        insertAtHead(head,data);
        return;
    }
    Node* temp = head;
    int count = 1;
    while(count<position-1){
        temp = temp -> next;
        count++;
    }

    Node* newNode = new Node(data);
    newNode -> next = temp -> next;
    temp -> next = newNode;
}
void print(Node* &head){
    if(head==NULL){
        cout<<"List is empty";
        return;
    }

    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void deleteAtPosition(Node* &head, int position){
    if(position==1){
        Node* toDelete = head;
        head = head -> next;
        toDelete -> next = NULL;
        delete toDelete;
    }
    else{
        Node* toDelete = head;
        Node* prev = NULL;
        int count = 1;
        while(count<position){
            prev = toDelete;
            toDelete = toDelete -> next;
            count++;
        }
        prev -> next = toDelete -> next;
        toDelete ->next = NULL;
        delete toDelete;
    }
}

int main(){
    Node* node1 = new Node(80);
    Node* head = node1;
    insertAtHead(head,70);
    insertAtHead(head,50);
    insertAtHead(head,40);

    insertAtEnd(head,90);
    insertAtEnd(head,100);

    insertAtPosition(head,3,60);
    insertAtPosition(head,1,30);

    print(head);

    deleteAtPosition(head,2);
    deleteAtPosition(head,1);
    deleteAtPosition(head,6);

    print(head);
    return 0;
}
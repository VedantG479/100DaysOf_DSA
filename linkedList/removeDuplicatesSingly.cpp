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

    ~Node(){
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
    }
};
void insertHead(Node* &head, int data){
    if(head==NULL){
        Node* newNode = new Node(data);
        head = newNode;
        return;
    }
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}
void print(Node* head){
    if(head==NULL){
        cout<<"Empty";
        return;
    }
    Node* temp = head;
    while(temp!=NULL){
        cout<<"Node: "<<temp->data<<" ";
        temp = temp->next;
    }
}
void removeDuplicates(Node* &head){
    if(head==NULL || head->next==NULL){
        return;
    }
    Node* current = head;
    while(current->next!=NULL){
        if(current->data == current->next->data){
            Node* toRemove = current->next;
            current->next = toRemove->next;
            toRemove->next = NULL;
            delete toRemove;
        }
        else{
            current = current->next;
        }
    }
    return;
}

int main(){
    Node* head = NULL;
    insertHead(head,50);
    insertHead(head,50);
    insertHead(head,40);
    insertHead(head,40);
    insertHead(head,40);
    insertHead(head,30);
    insertHead(head,20);
    insertHead(head,20);
    insertHead(head,10);
    insertHead(head,10);
    print(head);
    cout<<endl;

    removeDuplicates(head);
    print(head);
    cout<<endl;

    return 0;
}
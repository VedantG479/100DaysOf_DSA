#include<iostream>
using namespace std;
class Node{
    public: 
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
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
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}
void print(Node* head){
    if(head==NULL){
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
            Node* toDelete = current->next;
            if(toDelete->next == NULL){
                current->next = NULL;
            }
            else{
                current->next = toDelete->next;
                toDelete->next->prev = current;
            }
            toDelete->next = NULL;
            toDelete->prev = NULL;
            delete toDelete;
        }
        else{
            current = current->next;
        }
    }
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
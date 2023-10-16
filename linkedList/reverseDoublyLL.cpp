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
};
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
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
void insertEnd(Node* &head, int data){
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(data);
    temp->next = newNode;
    newNode->prev = temp;
}
void insertPosition(Node* &head, int pos, int data){
    if(pos==1){
        insertHead(head,data);
        return;
    }
    Node* before = NULL;
    Node* after = head;
    int count = 1;
    while(count<pos){
        before = after;
        if(after->next == NULL){
            insertEnd(head,data);
            return;
        }
        after = after->next;
        count++;
    }
    Node* newNode = new Node(data);
    newNode -> next = after; newNode -> prev = before;
    after -> prev = newNode; before -> next = newNode;
}

void reverseIteration(Node* &head){
    Node* current = head;
    Node* backward = NULL;
    while(current!=NULL){
        Node* forward = current -> next;
        current->next = backward;
        current->prev = forward;

        backward = current;
        current = forward;
    }

    head = backward;
    return;
}

int main(){
    Node* head = NULL;
    insertHead(head,20);
    insertHead(head,10);
    insertEnd(head,30);
    insertEnd(head,40);
    insertPosition(head,5,50);
    print(head);
    // 10 20 30 40 50

    reverseIteration(head);
    print(head);

    return 0;
}
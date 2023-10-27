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
    newNode -> next = head;
    head = newNode;
}

void reverse(Node* start, Node* end){
    Node* prev = NULL;
    Node* current = start;
    Node* forward = current->next;
    while(prev!=end){
        current -> next = prev;
        prev = current;
        current = forward;
        if(forward!=NULL){
            forward = forward->next;
        }
    }
    
}
Node* reverseGroup(Node* head, int k){
    if(head==NULL || head->next==NULL || k==1){
        return head;
    }

    Node *start = head, *end = head;
    int inc = k - 1;
    while(inc--){
        end = end->next;
        if(end==NULL){
            return head;
        }
    }
   
   Node* nextHead = reverseGroup(end->next,k);
    reverse(start,end);
    
    start->next = nextHead;
    return end;
}

int main(){
    Node* head = NULL;
    //insertHead(head,60);
    insertHead(head,50);
    insertHead(head,40);
    insertHead(head,30);
    insertHead(head,20);
    insertHead(head,10);
    print(head);

    Node* toPrint = reverseGroup(head,2);
    print(toPrint);

    return 0;
}
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
Node* merge(Node* head1, Node* head2){
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    
    Node* newHead = new Node(-1);
    Node *temp1 = head1, *temp2 = head2, *temp3 = newHead;
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->data<=temp2->data){
            temp3->next = temp1;
            temp1 = temp1->next;
        }
        else{
            temp3->next = temp2;
            temp2 = temp2->next;
        }
        temp3 = temp3->next;
    }
    while(temp1!=NULL){
        temp3->next = temp1;
        temp1 = temp1->next;
        temp3 = temp3->next;
    }
    while(temp2!=NULL){
        temp3->next = temp2;
        temp2 = temp2->next;
        temp3 = temp3->next;
    }

    return newHead->next;
}

int main(){
    Node* head1 = NULL;
    insertHead(head1,5);
    insertHead(head1,4);
    insertHead(head1,1);
    print(head1);
    cout<<endl;

    Node* head2 = NULL;
    insertHead(head2,5);
    insertHead(head2,3);
    insertHead(head2,2);
    print(head2);
    cout<<endl;

    Node* merged = merge(head1,head2);
    print(merged);
    cout<<endl;

    return 0;
}
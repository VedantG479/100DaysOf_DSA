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
        return;
    }
    Node* temp = head;
    while(temp!=NULL){
        cout<<"Node: "<<temp->data<<" ";
        temp = temp->next;
    }
}

Node* add(Node* head1, Node* head2){
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }

    int num1 = 0, num2 = 0;
    Node *temp1 = head1, *temp2 = head2;
    while(temp1!=NULL){
        num1 *= 10;
        num1 += temp1->data;
        temp1 = temp1->next;
    }
    while(temp2!=NULL){
        num2 *= 10;
        num2 += temp2->data;
        temp2 = temp2->next;
    }

    int sum = num1 + num2;

    Node* head = NULL;
    while(sum>0){
        int digit = sum%10;
        insertHead(head,digit);
        sum /= 10;
    }

    return head;
}

int main(){
    Node* head1 = NULL;
    insertHead(head1,4);
    insertHead(head1,3);
    print(head1);
    cout<<endl;

    Node* head2 = NULL;
    insertHead(head2,0);
    insertHead(head2,3);
    insertHead(head2,2);
    print(head2);
    cout<<endl;

    Node* sum = add(head1,head2);
    print(sum);
    cout<<endl;

    return 0;
}
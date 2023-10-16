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

void middle(Node* &head){
    int len = 1;
    Node* temp = head;
    while(temp->next!=NULL){
        len++;
        temp = temp->next;
    }
    int position = 0;
    temp = head;
    while(position<(len/2)){
        temp = temp->next;
        position++;
    }
    print(temp);
}
void middle2(Node* &head){
    if(head==NULL || head->next==NULL){
        print(head);
        return;
    }
    Node* slow = head;
    Node* fast = head->next;

    while(fast!=NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
        }
        slow = slow->next;
    }

    print(slow);
}

int main(){
    Node* head = NULL;
    insertHead(head,50);
    insertHead(head,40);
    insertHead(head,30);
    insertHead(head,20);
    insertHead(head,10);
    print(head);

    middle(head);
    middle2(head);
    return 0;
}
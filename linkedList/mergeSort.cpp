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

Node* mid(Node* head){
    if(head==NULL || head->next==NULL)
        return head;
    Node* slow = head; 
    Node* fast = head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node* merge(Node* left, Node* right){
    if(left == NULL)
        return right;
    
    if(right == NULL)
        return left;

    Node* ans = new Node(-1);
    Node* temp = ans;

    while(left!=NULL && right!=NULL){
        if(left->data <= right->data){
            temp->next = left;
            left = left->next;
        }
        else{
            temp->next = right;
            right = right->next;
        }
        temp = temp->next;
    }
    while(left!=NULL){
        temp->next = left;
        left = left->next;
        temp = temp->next;
    }
    while(right!=NULL){
        temp->next = right;
        right = right->next;
        temp = temp->next;
    }

    ans = ans->next;
    return ans;
}

Node* divide(Node* head){
    //base case: 
    if(head==NULL || head->next==NULL)
        return head;
    
    //break: 
    Node* middle = mid(head); 

    Node* left = head;
    Node* right = middle->next;
    middle->next = NULL;

    left = divide(left);
    right = divide(right);

    //merge
    Node* result = merge(left,right);

    return result;
}

int main(){
    Node* head = NULL;
    insertHead(head,50);
    insertHead(head,20);
    insertHead(head,10);
    insertHead(head,30);
    insertHead(head,40);
    insertHead(head,0);
    print(head);
    cout<<endl;

    Node* mergedList = divide(head);
    print(mergedList);
    cout<<endl; 
    
    return 0;
}
#include<iostream>
#include<vector>
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
bool checkPalindrome(Node* head){
    if(head==NULL || head->next==NULL){
        return false;
    }
    vector<int> nodes;
    Node* temp = head;
    while(temp!=NULL){
        nodes.push_back(temp->data);
        temp = temp->next;
    }
    int start = 0, end = nodes.size()-1;
    while(start<end){
        if(nodes[start++]!=nodes[end--])
            return false;
    }

    return true;
}

int main(){
    Node* head = NULL;
    insertHead(head,1);
    insertHead(head,2);
    insertHead(head,1);
    print(head);
    cout<<endl;

    if(checkPalindrome(head))
        cout<<"PALINDROME";
    else    
        cout<<"NOT PALINDROME";

    return 0;
}
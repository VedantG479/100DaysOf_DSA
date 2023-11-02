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
class stack{
    public: 
    Node* top;
    Node* head;

    stack(Node* head){
        this->head = head;
    }
};
int main(){

}
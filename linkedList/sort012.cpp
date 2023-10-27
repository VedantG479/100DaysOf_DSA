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
// void sort(Node* &head){
//     if(head==NULL)
//         return;
//     Node* temp = head;
//     int countZero = 0, countOne = 0, countTwo = 0;
//     while(temp!=NULL){
//         if(temp->data==0)
//             countZero++;
//         else if(temp->data==1)
//             countOne++;
//         else    
//             countTwo++;
//         temp = temp->next;
//     }
//     temp = head;
//     while(temp!=NULL){
//         if(countZero>0){
//             temp->data = 0;
//             countZero--;
//         }
//         else if(countOne>0){
//             temp->data = 1;
//             countOne--;
//         }
//         else if(countTwo>0){
//             temp->data = 2;
//             countTwo--;
//         }
//         temp = temp->next;
//     }
// }

void insertTail(Node* &tail, Node* temp){
    tail->next = temp;
    tail = temp;
}
Node* sort(Node* head){
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node* temp = head;
    while(temp!=NULL){
        if(temp->data == 0){
            insertTail(zeroTail,temp);
        }
        else if(temp->data == 1){
            insertTail(oneTail,temp);
        }
        else if(temp->data == 2){
            insertTail(twoTail,temp);
        }
        temp = temp->next;
    }

    if(oneHead->next!=NULL){
        zeroTail->next = oneHead->next;
    }
    else{
        zeroTail->next = twoHead->next;
    }
    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    head = zeroHead->next;

    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
}

int main(){
    Node* head = NULL;
    insertHead(head,0);
    insertHead(head,1);
    insertHead(head,0);
    insertHead(head,0);
    insertHead(head,1);
    insertHead(head,2);
    insertHead(head,1);
    insertHead(head,2);
    insertHead(head,0);
    insertHead(head,1);
    print(head);
    cout<<endl;

    Node* newHead = sort(head);
    print(newHead);
    cout<<endl;

    return 0;
}
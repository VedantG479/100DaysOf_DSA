#include<iostream>
#include<map>
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
            next = NULL;
        }
    }
};
void print(Node* tail){
    if(tail == NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    Node* temp = tail->next;
    while(temp!=tail){
        cout<<temp->data<<" ";
        temp = temp->next;
    } 
    cout<<temp->data<<" ";
    cout<<endl;
}
void insertAtHead(Node* &tail, int data){
    if(tail==NULL){
        Node* newNode = new Node(data);
        tail = newNode;
        tail->next = newNode;
        return;
    }
    Node* newNode = new Node(data);
    newNode -> next = tail->next;
    tail -> next = newNode;
}
void insertAtEnd(Node* &tail, int data){
    Node* newNode = new Node(data);
    newNode -> next = tail->next;
    tail -> next = newNode;
    tail = newNode;
}
void insertAtPosition(Node* &tail, int data, int position){
    if(position==1){
        insertAtHead(tail,data);
        return;
    }
    Node* before = NULL;
    Node* after = tail->next;
    int count = 1;
    while(count<position){
        before = after;
        if(after->next == tail->next){
            insertAtEnd(tail,data);
            return;
        }
        after = after->next;
        count++;
    }
    Node* newNode = new Node(data);
    before -> next = newNode;
    newNode -> next = after;
}
void deleteAtPosition(Node* &tail, int position){
    if(position==1){
        Node* toDelete = tail->next;
        tail->next = toDelete->next;
        toDelete->next = NULL;
        delete toDelete;
    }
    else
    {
        Node* prev = NULL;
        Node* toDelete = tail->next;
        int count = 1;
        while(count<position){
            prev = toDelete;
            if(toDelete->next==tail){
                tail = prev;
            }
            toDelete = toDelete->next;
            count++;
        }
        prev->next = toDelete->next;
        toDelete->next=NULL;
        delete toDelete;
    }
}
bool isCircular(Node* head){
    if(head==NULL){
        return true;
    }
    Node* temp = head->next;
    while(temp!=NULL && temp!=head){
        temp = temp->next;
    }
    if(temp==NULL){
        return false;
    }
    return true;
}
bool detectLoop(Node* head){
    if(head==NULL){
        return false;
    }
    Node* temp = head->next;
    map<Node*, bool> visited;
    while(temp!=NULL){
        if(visited[temp]==true){
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}
bool floydDetection(Node* head){
    if(head==NULL){
        return head;
    }
    Node *slow = head, *fast = head;
    while(slow!=NULL && fast!=NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
        }
        slow = slow->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}
Node* startingNode(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* temp = head;
    map<Node*, bool> visited;
    while(temp!=NULL){
        if(visited[temp]==true){
            return temp;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return NULL;
}

int main(){
    Node* tail = NULL;
    insertAtHead(tail,10);
    insertAtHead(tail,0);
    insertAtEnd(tail,20);
    insertAtEnd(tail,30);
    insertAtPosition(tail,-10,1);
    insertAtPosition(tail,40,6);
    insertAtPosition(tail,-1,2);
    insertAtPosition(tail,69,4);
    deleteAtPosition(tail,1);
    deleteAtPosition(tail,3);
    deleteAtPosition(tail,1);
    deleteAtPosition(tail,5);
    print(tail);

    if(isCircular(tail))
        cout<<"Circular"<<endl;
    else    
        cout<<"Not Circular"<<endl;

    cout<<detectLoop(tail)<<endl;
    cout<<floydDetection(tail->next)<<endl;

    Node* loopStart = startingNode(tail->next);
    if(loopStart!=NULL)
        cout<<"starting node: "<<loopStart->data<<endl;
    else    
        cout<<"no starting node, loop not present"<<endl;
        
    return 0;
}
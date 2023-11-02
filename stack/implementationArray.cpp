#include<iostream>
using namespace std;
class Stack{
    public:
    int size;
    int *arr;
    int top;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack OverFlow"<<endl;
        }
    }

    void pop(){
        if(top>=0)
            top--;
        else    
            cout<<"Stack UnderFlow"<<endl;
    }

    int peek(){
        if(top>=0)
            return arr[top];
        else 
            return -1;
    }

    bool isEmpty(){
        if(top>=0)
            return false;
        else    
            return true;
    }
};

int main(){
    Stack st(5);
    cout<<st.isEmpty()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<st.peek()<<endl;
    st.push(10);
    cout<<st.peek()<<endl;
    st.pop();
    st.pop();
    cout<<st.peek()<<endl;
    cout<<st.isEmpty()<<endl;

    return 0;
}
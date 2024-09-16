/*  Stack is a Last-In-First-Out data structure. Write a Stack class. It implements stack using 
Dynamically allocated array. Stack size should be passed in parameterized constructor. If size is not 
given, allocate stack of size 5. 
Provide member functions like push(), pop(), peek(), isEmpty(), isFull(), and print().*/

#include <iostream>
using namespace std;
class Stack{
    int top;
    int size;
    int *ptr;
    int element;
    public: 
    Stack(int size=5){
        this->size=size;
        top=-1;
        ptr=new int[size];
        
    }
    void push(int element){
        this->element=element;
        if(isFull()){
           cout<<"Stack is full";
        }
        else 
        top=top+1;

    }
    void pop(int element){
        this->element=element;
        if(isEmpty()){
            cout<<"Stack is empty";
        }
        else
        top=top-1;

    }
    void peek(int element){
        this->element=element;
        if(isEmpty()){
             cout<<"Stack is empty";
        }

    }
    
    int isEmpty(){
            if(top==-1){
                return 1;
            }
    }

    int isFull(){
        if(size==size-1){
            return 1;

        }

    }

};
int main(){
    Stack *ptr=new Stack[5];
    ptr[0].push(10);
   


    

}
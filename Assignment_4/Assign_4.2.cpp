/*  Stack is a Last-In-First-Out data structure. Write a Stack class. It implements stack using 
Dynamically allocated array. Stack size should be passed in parameterized constructor. If size is not 
given, allocate stack of size 5. 
Provide member functions like push(), pop(), peek(), isEmpty(), isFull(), and print().*/

#include <iostream>
using namespace std;
class Stack{
    int top;
    int size;
    public: 
    Stack(int size){
        this->size=size;
        
    }
    void push(){
        if(isFull()){
           cout<<"Stack is full";
        }
        else 
        top=top+1;

    }
    void pop(){
        if(isEmpty()){
            cout<<"Stack is empty";
        }
        else
        top=top-1;

    }
    void peek(){
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
    Stack *ptr=new Stack(5);
    

}
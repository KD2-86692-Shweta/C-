/* Q1. Write a menu driven program to calculate volume of the box(length * width * height). 
Provide parameterless, parameterized(with 3 parameters) and single paramaterized constructor. 
Create the local objects in respective case and call the function to caluclate area. 
Menu options ->  
1. Calculate Volume with default values 
2. Calculate Volume with length,breadth and height with same value 
3. Calculate Volume with different length,breadth and height values. */

#include <iostream>
using namespace std;

class Box{

     int length;
     int width;
     int height;
     public:

     Box(){
        length=34;
        width=45;
        height=23;
     }
    Box(int value){
        length = value;
        width=value;
        height=value;

        
    }

    Box(int length,int height, int width){
        this->length=length;
         this->width=width;
        this->height=height;
       

    }

    
    void display(){
        cout<<"volume of Box is : "<<length*width*height<<endl;
    }
};
int main(){
  
 Box b1;
 b1.display();

 Box b2(5);
 b2.display();

 Box b3(2,5,6);
 b3.display();



}
/*Q1. Write a class for Time and provide the functionality 
Time() 
Time(int h,int m,int s) 
getHour() 
getMinute() 
getSeconds() 
printTime() 
setHour() 
setMinute() 
setSeconds() 
In main create an array dynamically of Time * of size 5. 
Accept the values and display.*/

#include <iostream>
using namespace std;


class Time{
    int h;
    int m;
    int s;
    public:

    Time():h(0),m(0),s(0){
        
    }
    Time(int h,int m,int s){
             this ->h=h;
             this ->m=m;
             this ->s=s;

    }
    void acceptdata(){
            cout<<"Enter Hr: ";
            cin>>h;
            cout<<"Enter min : ";
            cin>>m;
            cout<<"Enter sec : ";
            cin>>s;
            cout<<"_______________________________________"<<endl;
    }

    void setHour(int h) {
          this->h=h;
    }
    void setMinute(int m) {
            this->m=m;
    }
    void setSeconds(int s){
        this->s=s;
    }
    int getHour(){
         return h;
    } 
    int getMinute() {
        return m;
    }
    int getSeconds() {
        return s;
    }
    void printTime() {
          cout<<"Time is :"<<h<<":"<<m<<":"<<s<<endl;
    }
    

};

int main(){
   

    Time **ptr=new Time *[5];
    for(int i=0;i<5;i++){
        ptr[i]=new Time;
       ptr[i]->acceptdata();
       ptr[i]->printTime();
    }

    for(int i=0;i<5;i++){
        delete ptr[i];
        ptr[i]=NULL;
    }
     delete[] ptr;
     ptr=NULL;
   

   
}



   

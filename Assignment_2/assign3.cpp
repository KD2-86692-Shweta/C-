/*  Create a namespace NStudent. Create the Student class(created as per Q2) inside namespace. 
Create the object of student and perform accept and display student. */

#include<iostream>
using namespace std;

namespace NStudent
{
    class Students{
        public:
    int Roll_no;
    int Marks;
    string Name;
    

    
    void printStudentOnConsole(){
         cout<<"Student Details are : "<<"Roll No :"<<Roll_no<<"Name : "<<Name<<"Marks : "<<Marks<<endl;
        cout<<"____________________________________________________"<<endl;


    } 
    void acceptStudentFromConsole(){
           cout<<"Enter Roll No : "<<endl;
           cin>>Roll_no;
           cout<<"Enter Name : "<<endl;
           getline(cin,Name)>>Name;
           cout<<"Enter Marks : "<<endl;
           cin>>Marks;
            cout<<"____________________________________________________"<<endl;

    }

};    

}

int main(){
    
    NStudent:: Students s1;
    s1.acceptStudentFromConsole();
    s1.printStudentOnConsole();

}
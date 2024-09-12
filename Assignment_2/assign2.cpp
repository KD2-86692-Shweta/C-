/*Q2. Write a menu driven program for Student in CPP language. Create a class student with data 
members roll no, name and marks. Implement the following functions 
void initStudent(); // to initialize the student object with default values for data members (0,” ”,0); 
void printStudentOnConsole(); 
void acceptStudentFromConsole();*/


#include<iostream>

using namespace std;
 

class Students{
    int Roll_no;
    int Marks;
    string Name;
   
public:
    void initStudent(int Roll_no=0,string Name=" ",int Marks = 0)
    {
         cout<<"Student Details are : "<<"Roll No :"<<Roll_no<<"Name : "<<Name<<"Marks : "<<Marks<<endl;    
         cout<<"____________________________________________________"<<endl;

    }
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

int main(){
    Students s1;
    int choice;

do{
    cout<<"Enter 1 to display default value :"<<endl;
    cout<<"Enter 2 to enter data"<<endl;
    cout<<"Enter 3 to display entered data :"<<endl;
    cout<<"Enter 0 to Exit"<<endl;
    cout<<"Enter choice : "<<endl;
    cin>>choice;

    cout<<"____________________________________________________"<<endl;


    switch(choice){
        case 1:
        s1.initStudent();
        break;
    
        case 2:
        s1.acceptStudentFromConsole();
        break;

         case 3:
        s1.printStudentOnConsole();
        break;

        case 0:
        exit;
        break;

        default:
        cout<<"Enter valic value";
        break;
        

            
    }

}while(choice !=0);

}
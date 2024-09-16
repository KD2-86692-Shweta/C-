/*  Write a menu driven program for Student management. 
Create a class student with data members name, gender, rollNumber(Auto generated) and array to 
keep marks of three subjects.  
Accept every thing from user and Print name, rollNumber, gender and percentage. 
In main(), create Student* arr[5] and provide facility for accept, print, search. 
Search function returns index of found Student, otherwise returns -1.*/

#include<iostream>
using namespace std;

class Student{
    string name;
    string gender;
     int rollno;
    int marks[3];

    public:

    Student(){
        this->name="";
        this->gender="";
        this->rollno=0;
        this->marks[3]=0;
    }
    Student(string name,string gender,int rollno,int marks[3])
    {
        this->name=name;
        this->gender=gender;
        this->rollno=rollno;
        this->marks[3]=marks[3];
    }
    void acceptdata(){
        cout<<"Enter Name of Student : "<<endl;
        cin>>name;
        cout<<"Enter gender of student : "<<endl;
        cin>>gender;
        cout<<"Enter roll number of student : "<<endl;
        cin>>rollno;

        cout<<"Enter Marks of physics, Chemistry ,maths resp : "<<endl;
        for(int i=0;i<3;i++)
        {
            cin>>marks[i];
        }
    }
    void displaydata(){
        cout<<"Student Name is : "<<name<<endl;
        cout<<"Student Gender is : "<<gender<<endl;
        cout<<"Student Roll No is : "<<rollno<<endl;
        for(int i=0;i<3;i++)
        {
        cout<<"Student Marks are : "<<marks[i];
        }
    }

};
int main(){
    Student s1;
    s1.acceptdata();
    s1.displaydata();
}
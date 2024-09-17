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
    static int generaterollno;
    int marks[3];

    public:

    Student():rollno(++generaterollno){
        this->name="";
        this->gender="";
        this->rollno=0;
        this->marks[3]=0;
    }
    Student(string name,string gender,int marks[3]):rollno(++generaterollno)
    {
        this->name=name;
        this->gender=gender;
       // this->rollno=rollno;
        this->marks[3]=marks[3];
    }
    void acceptdata(){
        cout<<"_______________________________________________________________"<<endl;

        cout<<"Enter Name of Student : "<<endl;
        cin>>name;
        cout<<"Enter gender of student : "<<endl;
        cin>>gender;
        // cout<<"Enter roll number of student : "<<endl;
        // cin>>rollno;

        cout<<"Enter Marks of physics, Chemistry ,maths resp : "<<endl;
        for(int i=0;i<3;i++)
        {
            cin>>marks[i];
        }
        cout<<"_______________________________________________________________"<<endl;

    }
    void displaydata(){
        cout<<"_______________________________________________________________"<<endl;

        cout<<"Student Roll No is :"<<++rollno<<endl;
        cout<<"Student Name is : "<<name<<endl;
        cout<<"Student Gender is : "<<gender<<endl;
      
        for(int i=0;i<3;i++)
        {
        cout<<"Student Marks are : "<<marks[i];
        }

        cout<<"_______________________________________________________________"<<endl;
    }

};
int Student::generaterollno=0;
int main(){
    Student s1;
    s1.acceptdata();
    s1.displaydata();

    
    Student *ptr[5];
    for(int i=0;i<5;i++){
        ptr[i]=new Student;
        ptr[i]->acceptdata();
         ptr[i]->displaydata();
      
        
    }
    for(int j=0;j<5;j++){
        ptr[j]->displaydata();
        
    }

}
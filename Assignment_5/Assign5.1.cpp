/*  Create a class Date with data memebrs day,month and year. 
Cretae a class Person with data members name,address and birthdate. The birthdate shoud be of 
type Date. 
Implement above classes. Test all functionalities in main(). */

#include<iostream>
using namespace std;

class Date{
    int day;
    int month;
    int year;
public:
    Date(){
        this->day=0;
        this->month=0;
        this->year=0;
    }

    Date(int day,int month,int year){
        this->day=day;
        this->month=month;
        this->year=year;
    }
    void setday(int day){
           this->day=day;
    }
    void setmonth(int month){
           this->month=month;
    }
    void setyear(int year){
           this->year=year;
    }
    void acceptDate(){
        cout<<"Enter Day, Month and Year : "<<endl;
        cin>>day>>month>>year;
    }
    void displayDate(){
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }

};
class Person{
    string name;
    string address;
    Date birthdate;

    public:
    Person(){
        this->name="";
        this->address="";
    }
    Person(string name,string address,int day,int month,int year):birthdate(day,month,year){
        this->name=name;
        this->address=address;
        this->birthdate.setday(day);
        this->birthdate.setmonth(month);
        this->birthdate.setyear(year);

    }

    void acceptPerson(){
        cout<<"Enter name  : "<<endl;
        cin>>name;
        cout<<"Enter Address : "<<endl;
        cin>>address;
        cout<<"Enter Birthdate : "<<endl;
        birthdate.acceptDate();

    }
    void displayPerson(){
        cout<<"Name : "<<name<<endl;
        cout<<"Address : "<<address<<endl;
        cout<<"Birthdate : "<<endl;
        birthdate.displayDate();
    }
};

int main(){
     Person p1;
     p1.acceptPerson();
     p1.displayPerson();

     Person p2;
     p2.acceptPerson();
     p2.displayPerson();
    return 0;
}
#include<iostream>
using namespace std;


struct Date{
    int day;
    int month;
    int year;


    void initDate(){
         day=1;
         month=1;
         year=1990;
         cout<<"Default date is : 01/01/1990"<<endl;
    }

    
    void acceptDateFromConsole(){
           cout<<"Enter day,Month,year : "<<endl;
           cin>>day>>month>>year;

    }
    void printDateOnConsole(){
        cout<<day<<"/"<<month<<"/"<<year<<endl;

    }
    bool isleapYear(){
        if (year%4==0 && year%100!=0 || year%400==0){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    Date d1;
    int choice;



do{
    cout<<"Enter 1 to display default date :"<<endl;
    cout<<"Enter 2 to enter date"<<endl;
    cout<<"Enter 3 to display entered date :"<<endl;
    cout<<"Enter 4 to check enterd year is leap or not"<<endl;
    cout<<"Enter 0 to Exit"<<endl;
    printf("Enter choice : ");
    cin>>choice;


    switch(choice)
    {
        case 1:
            d1.initDate();
            break;

        case 2:
            d1.acceptDateFromConsole();
            break;

        case 3:
            d1.printDateOnConsole();
            break;

        case 4:
            if (d1.isleapYear()){
            cout<<"It is a leap year"<<endl;
             }
        else{
            cout<<"It is not a leap year"<<endl;
            }
            break;

        case 0:
             exit;
             break;
       
        default:
            cout<<"Enter valid choice"<<endl;
            break;
    
    }
}while(choice !=0);
    return 0;
}
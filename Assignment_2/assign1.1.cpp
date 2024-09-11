#include<iostream>

using namespace std;
class Date{
    public  :
    int day;
    int month;
    int year;
public:

    void initDate(){
        cout<<"1/1/1900"<<endl;
    }
    void acceptDateOnConsole(){
        cout<<"Enter Date : "<<endl;
        cin>>day>>month>>year;
    }
    void printDateOnConsole(){
        cout<<"Entered date is :"<<day<<"/"<<month<<"/"<<year<<endl;
    }
    bool isLeapYear(){
        if(year % 4==0 && year %100!=0 || year % 400 ==0)
        {
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
    cout<<"Enter choice : ";
    cin>>choice;

    cout<<"____________________________________________________"<<endl;

    switch(choice){

        case 1:
        d1.initDate();
        break;
 
        case 2:
        d1.acceptDateOnConsole();
        break;

        case 3:
        d1.printDateOnConsole();
        break;
        

        case 4:
        if(d1.isLeapYear()){
            cout<<"Is leap Year"<<endl;
        }
        else{
            cout<<"Is not leap year"<<endl;
        }
        break;

        default:
           cout<<"Enter valid choice "<<endl;
           break;

        case 0:
        exit;

        
    }
}while(choice !=0);
}
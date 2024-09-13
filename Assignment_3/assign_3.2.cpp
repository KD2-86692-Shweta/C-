/*  Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll. 
Mostly they do, but sometimes a count goes by without paying. 
The tollbooth keeps track of the number of cars that have gone by and of the total amount of money 
collected. Model this tollbooth with a class called tollbooth. 
The two data items are a type unsigned int to hold the total number of cars, and a type double to hold the total amount of money collected. 
A constructor initializes all data members to 0. A member function called payingCar() increments 
the count total and adds 0.50 to the cash total. An other function, called nopayCar() 
increments the count total but adds nothing to the cash total. Finally, a member function called 
printOnConsole() displays the two totals and number of paying as well as non paying cars total.  */

#include<iostream>
using namespace std;


class Tollbooth{
      unsigned int count;
      double amount;
      int pcar;
      int npcar;
public:
      Tollbooth(){
        count=0;
        amount=0;
        pcar=0;
        npcar=0;

      }

      void payingCar(){
         //  this->count=count;
           count=count+1;
           amount=amount+0.50;
           pcar=pcar+1;
           
      }

      void nopaycar(){
        //this->count=count;
        count=count+1;
        npcar=npcar+1;
      }
      void PrintonConsole(){
        cout<<"_____________________________________________________"<<endl;
             cout<<"Total Amount is : "<<amount<<endl;
             cout<<"Total Cars are : "<<count<<endl;
             cout<<"Total Number of Paying cars are: "  <<pcar<<endl;
             cout<<"Total Number of non paying cars are : "<<npcar<<endl;
        cout<<"_____________________________________________________"<<endl;

      }

};
int main(){
    Tollbooth t1;
    int choice;

    do{
        cout<<"Enter 1 to paying car : "<<endl;
        cout<<"Enter 2 to non paying car : "<<endl;
        cout<<"Enter 0 to exit "<<endl;
        cout<<"Enter choice : "<<endl;
        cin>>choice;
        switch(choice){
            case 1:
                t1.payingCar();
                t1.PrintonConsole();
                break;
            case 2:
                t1.nopaycar();
                t1.PrintonConsole();
                break;
            case 0:
                 exit;
                 break;
            default:
                cout<<"Enter valid choice : "<<endl;
                break;
        }
    }while(choice!=0);
                
   


}
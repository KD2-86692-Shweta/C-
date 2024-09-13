/*Q3. Write a class Address with data members (string building, string street, string city ,int pin) 
 Implement constructors, getters, setters, accept(), and display() methods. 
Test the class functunalities by creating the object of class and calling all the functions. */

#include<iostream>
using namespace std;

class Address{
      string building;
      string street;
      string city;
      int pin;
public : 
      Address(): building(" "), street(" "), city(" "), pin(0){

      }
      
      void accept(){
           cout<<"Enter building Name : "<<endl;
           cin >>building;
           cout<<"Enter street : "<<endl;
           cin>>street;
           cout<<"Enter city : "<<endl;
           cin>>city;
           cout<<"Enter pin : ";
           cin>>pin;
      }

      
      void setdata(string building){
        this->building=building;
      
      }
      void setstreet(string street){
        this->street=street;
      }
      string getdata(){
        return building;
      }
      string getstreet(){
        return street;
      }

      string setcity(string city){
          this->city=city;
      }

      int setpin(int pin)
      {
        this->pin=pin;
      }



      string getcity(){
        return city;
      }
      int getpin(){
        return pin;
      }

    

      void display(){
          cout<<"Building Name is : "<<building<<". Street : "<<street<<". City : "<<city<<". pin"<<pin<<endl<<endl;
          cout<<"Building : "<<getdata()<<endl;
          cout<<"Street : "<<getstreet()<<endl;
          cout<<"City : "<<getcity()<<endl;
          cout<<"Pin : "<<getpin()<<endl;
      }


};
int main(){
    Address a1;
   a1.accept();
    a1.setdata("Kolhapur");
    a1.setstreet("ruikar street");
    a1.setcity("kolhapur");
    a1.setpin(416234);
    a1.display();



    



}
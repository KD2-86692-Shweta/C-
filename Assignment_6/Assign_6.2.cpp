#include<iostream>
using namespace std;

class Employee{
    protected:
    int id;
    double salary;

    public:
    Employee(){
        
        this->id=0;
        this->salary=0;
    }
    Employee(int id,double salary){
        this->id=id;
        this->salary=salary;
    }
    void setid(int id){
        this->id=id;
    }
    int getid(){
        return id;
    }
    void setSalary(double salary){
        this->salary=salary;
    }
    double getSalary(){
        return salary;
    }
    void accept(){
        cout<<"Enter id";
        cin>>id;
        cout<<"Enter salary : ";
        cin>>salary;
    }
    void display(){
        cout<<"id : "<<id<<endl;
        cout<<" salary : "<<salary<<endl;
    }
};

class Manager:virtual public Employee{
protected:
    double bonus;
public:
    Manager(){
        

        this->bonus;
    }
    Manager(int id,double bonus,double salary){
        this->id=id;
        this->bonus=bonus;
        this->salary=salary;
    }

    void setBonus(){
        this->bonus=bonus;
    }

    double getBonus(){
        return bonus;
    }

    void acceptManager(){
        accept();
        cout<<"Enter Bonus : ";
        cin>>bonus;
    }

    void displayManager(){
        display();
        cout<<"Bonus : "<<bonus<<endl;
    }
};

class Salesman: virtual public Employee{
 
 protected:
    double commission;
public:
    Salesman(){
      

        this->commission=0;
    }
    Salesman(int id,double commission,double salary ){
        this->commission=commission;
        this->id=id;
        this->salary=salary;
    }
    void setCommission(double commission){
           this->commission=commission;
    }
    double getCommission(){
          return commission;
    }
    void acceptCommission(){
        accept();
        cout<<"Enter Commision : ";
        cin>>commission;
    }
    void displaySalesman(){
        display();
        cout<<"Commission is : "<<commission;
    }

};
class SalesManager:Manager,Salesman{
    
public:  
      SalesManager(){
        

        this->id=0;
             this->salary=0;
             this->commission=0;
             this->bonus=0;
      }
      SalesManager(int id, double salary,double commission,double bonus){
             this->id=id;
             this->salary=salary;
             this->commission=commission;
             this->bonus=bonus;
             
      }
      
      void accept(){
          acceptManager();
          acceptCommission();             
      }

      void display(){
        displayManager();
        displaySalesman();
      }
      
};

int main(){

    SalesManager s1(1,90000,10000,45000);
    s1.display();

    SalesManager s2(2,88000,6766,9000);
    s2.display();
    
  

}
/*  A shop sells book or tapes. The Book class holds id, title, author, and price; whereas Tape class 
holds id, title, artist, and price. There is 5% discount on tapes, while 10% discount on books. 
Assuming that each user purchase 3 products (either book or tape), calculate final bill. The program 
should be menu driven and should not cause memory leakage. 
Hint - Create class Product and inherit into Book and Tape. Also create array like Product* arr[3] */
#include<iostream>
#include<typeinfo>
using namespace std;

class Product{
    public:
    int id;
    string title;
    float price;
    public: 
public:
    Product(){
        this->id=0;
        this->title="";
        this->price=0;
    }

    Product(int id,string title,float price){
        this->id=id;
        this->title=title;
        this->price=price;
    }

    virtual void accept(){
        cout<<"Enter id : ";
        cin>>id;
        cout<<"Enter title : ";
        cin>>title;
        cout<<"Enter Price : ";
        cin>>price;
    }
    virtual void display(){
        cout<<"Id : "<<id<<endl;
        cout<<"Title : "<<title<<endl;
        cout<<"Price : "<<price<<endl;
    }
};

class Book:public Product{
    string author;
    public:
     Book(){
            this->author="";
     } 
     Book(string author){
        this->author=author;
     }

    void accept(){
        Product::accept();
        cout<<"Enter Author : ";
        cin>>author ;
    }
    void display(){
        Product::display();
        cout<<"Author :"<<author<<endl;
    }
};
class Tape:public Product{
    string artist;
public:
    Tape(){
        this->artist="";
    }
    Tape(string artist){
        this->artist=artist;

    }
    void accept(){
        Product::accept();
        cout<<"Enter Artist :";
        cin>>artist;
    }
    void display(){
        Product::display();
        cout<<"Artist :"<<artist<<endl;
    }
};

main(){
    int choice;
    int total_bill=0;
    Product* arr[3];
    for(int i=0;i<3;i++){
       
       cout<<"Enter 1 for Book or 2 for Tape : ";
       cin>>choice;
       if(choice==1){
            arr[i]=new Book; 
             arr[i]->accept();  
       }
       else{
              arr[i]=new Tape;
              arr[i]->accept();
       }
    
    }

    for(int i=0;i<3;i++){
        arr[i]->display();
    }
    for(int i=0;i<3;i++){
        if(typeid(arr[i])==typeid(Book)){
            total_bill+=arr[i]->price-(arr[i]->price*0.1);
            
        }
        else
        {
            if(typeid(arr[i])==typeid(Tape)){
            total_bill+=arr[i]->price-(arr[i]->price*0.1);
        }
        }
       
    }
   cout<<"Total Bill : "<<total_bill<<endl;

}
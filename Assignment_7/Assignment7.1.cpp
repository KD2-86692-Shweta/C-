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
int menu(){
    int choice=0;
    cout<<"_____________CHOOSE_____________"<<endl;
    cout<<"0.EXIT"<<endl;
    cout<<"1.Add Book"<<endl;
    cout<<"2.Add Tape"<<endl;
    cout<<"3.Display Books "<<endl;
    cout<<"4.Display Tapes"<<endl;
    cout<<"5.Calculate Discount"<<endl;
    cin>>choice;
    cout<<"____________SELECTED________________"<<endl;

    return choice;
}

double calculateDiscount(Product **p){
    double total=0.0;

    for(int i=0;i<3;i++){
        if(typeid(*p[i])==typeid(Book)){
            total=total+p[i]->price*0.1;

        }

        else{
            total=total+p[i]->price*0.05;

        }
    }
    return total;

}

    int main(){
        int choice;
        Product *arr[3];
        
        double total_bill=0;
        int index=0;
        double price=0;

        while((choice=menu())!=0){
            switch(choice){
                  case 1:
                  if(index<3)
                  {
                    arr[index]=new Book;
                    arr[index]->accept();
                    index++;
                  }
                  else{
                    cout<<"Book is Full"<<endl;
                  }
                  break;

                  case 2:
                  if(index<3){
                    arr[index]=new Tape;
                    arr[index]->accept();
                    index++;
                  }
                  else{
                    cout<<"Tape is Full"<<endl;
                  }
                  break;

                  case 3:
                  for(int i=0;i<3;i++){
                    if(typeid(*arr[i])==typeid(Book))
                    {
                        arr[i]->display();
                    }
                  }
                  case 4:
                  for(int i=0;i<3;i++){
                    if(typeid(*arr[i])==typeid(Tape)){
                        arr[i]->display();
                    }
                  }
                  case 5:
                  price=calculateDiscount(arr);
                  cout<<"The Product Discount is : "<<price<<endl;
                  break;

                  default:
                  cout<<"Wrong Choice "<<endl;
                  break;
            }
        }

    }
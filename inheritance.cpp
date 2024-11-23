#include<iostream>
using namespace std;

// inheritance
//base class
class Laptop{
    protected:
        string laptopName;
        int price;
    public:
    Laptop(string name,int Tprice): laptopName(name),price(Tprice){
        cout<<"chai constructor caleed"<<laptopName<<endl;
    }
    // abstraction feeling
  virtual  void displayLaptopDetails() const{
    cout<<"your laptop is made by: "<<laptopName<<endl;
  }
  virtual  void cost() const{
    cout<<"Your laptop cost is: "<<price<<endl;
  }
  virtual ~Laptop() {
    cout<<"Laptop destructor caleed for "<<laptopName<<endl;
  }
};
 
 class HP :  public Laptop {
public:
    HP(int cost): Laptop("HP",cost){
        cout<<"HP constructor caleed"<<endl;
    }
    void displayLaptopDetails() const override{
        cout<<"your laptop is made by: "<<laptopName<<endl;
    } 
    void cost() const override{
        cout<<"Price of your laptop is :"<<price<<endl;
    }
    ~HP(){
        cout<<"HP destructor caleed"<<endl;
    }
 };

int main(){
    Laptop* laptop1 = new HP(1000);
    laptop1->displayLaptopDetails();
    delete laptop1;    

}
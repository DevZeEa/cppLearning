#include<iostream>
using namespace std;
// abstraction in cpp
class ALaptop{
 public:
 virtual void prepareLaptop() = 0; //pure virtual function
 virtual void makeProcess() = 0; //pure virtual function
 virtual void Quantity() = 0; //pure virtual function
 void Product(){     
    prepareLaptop();
    makeProcess();
   Quantity();
    }
};
class Dell : public ALaptop{
public:
//use over ride keyword twhile using abstract classes
void prepareLaptop()override{
    cout<<"Dell Laptop is preparing"<<endl;
}
void makeProcess()override{
    cout<<"Your order is ready to serve"<<endl;
}
void Quantity()override{
    cout<<"Dell Laptop is available in 1000 units"<<endl;
}
};

int main(){
    Dell dell;
    dell.Product();
}
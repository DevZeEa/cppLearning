#include<iostream>
#include<vector>
#include <string>
using namespace std;

// friend keyword : is used to givee member level access to the functions out side the class.
class Device{
    private:
        string deviceName;
        int quantity;
    public:
    Device(string name,int serve) : deviceName(name), quantity(serve){}
    friend bool compareLptops(const Device &device1, const Device &device2);
     void display() const{
        cout<< "The name of your favourite device is : "<< deviceName  << endl;
     }
};

// getting access outside the class and as function
bool compareLptops(const Device &device1, const Device &device2){
    return device1.quantity > device2.quantity; 
}

int main(){
Device laptop1("Mac Book latest generation", 12);
Device laptop2("Hp with latest generation", 8);
laptop1.display();
cout<<endl;
laptop2.display();
cout<<endl;
if(compareLptops(laptop1,laptop2)){
    cout<<"Laptop_1 is greater"<<endl;
}else{
    cout<<"Laptop_2 is greater"<<endl;
}

}
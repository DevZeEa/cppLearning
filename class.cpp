#include<iostream>
#include<vector>
using namespace std;


class Laptop{
    public:   
        string latopName;
        int model;
        vector<string> parts;
    void printVal(){
        cout<<latopName<<endl;
        cout<<model<<endl;
        for(string part: parts){
            cout<<part<<" "<<endl;
        }
}

};

int main(){
string zia = "Zia";
cout<<zia<<endl;
Laptop laptop1;
laptop1.latopName = "Hp Lover";
laptop1.model = 12;
laptop1.parts = {"SSD Latest","MOUSE Latest","keyboard"};
laptop1.printVal();
// second Laptop; 
Laptop laptop2;
laptop2.latopName = "coding wallla ho";
laptop2.model = 12;
laptop2.parts = {"SSD gaming stainless steel","MOUSE BT","keyboard wirelsess"};
laptop2.printVal();
}
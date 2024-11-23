#include <iostream>
#include <vector>

using namespace std;
class Laptop
{
public:
    string laptopName;
    int quant;
    vector<string> specif;
    // deligation constructor
    Laptop (string name) : Laptop(name,1,{"Mouse","keyBoard","LCD"}){}
    Laptop(string name, int quanity, vector<string> spec)
    {
        laptopName = name;
        quant = quanity;
        specif = spec;
        cout << "main constructor is called"<<endl;
    }
    // method to dispplay values
    void DisplayValues()
    {
        cout << "Name : " << laptopName << endl;
        cout << "Quantity : " << quant << endl;
        cout << "specification :" << endl;
        for (string spec : specif)
        {
            cout << spec << endl;
        }

        cout<<endl;
    }
};

//  delegation constructor learning is here in the following
int main() {
    Laptop laptop("MacBook");
    laptop.DisplayValues();
}
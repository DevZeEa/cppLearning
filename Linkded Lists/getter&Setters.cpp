#include <iostream>
#include <vector>
using namespace std;

class Laptop{
    private:
        string laptopName;
        int quantity;
        vector<string> specifications;
    public:
        Laptop(){
            laptopName = "unknown Name";
            quantity = 1;
            specifications =  {"SSD","G_CARD","etherNet"};
        }
        Laptop(string name, int qty, vector<string> spec){
          name = laptopName;
          qty = quantity;
          spec  = specifications;
        }
        // getter used to access the value of the methods
        string getLaptopName(){
            return laptopName;
        }
        void setLaptopName(string name){
          laptopName  = name ;
        }
        // for quantity
        int getQuantity(){
            return quantity;
        }
        void setQuantity(int quant){
         quantity = quant;
        }
        // for vectors
        vector<string> getSpecifications(){
            return specifications;
        }
        void setSpecifications(vector<string> spec){
          specifications = spec;
        }
        // method to dispplay values
        void DisplayValues(){
            cout<<"Name"<<laptopName<<endl;
            cout<<"Quantity"<<quantity<<endl;
            cout<<"specification"<<endl;
            for(string spec : specifications){
            cout<<spec<<endl; 
            }
        }

};

int main(){

}
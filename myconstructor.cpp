#include<iostream>
#include<vector>
using namespace std;
class LCD {
    public:
    string* latopName;
    int model;
    vector<string> parts;
 LCD (string deviceName, int modal, vector<string>part){
         
            latopName = new string(deviceName);
            model = modal;
            parts = part;
            cout<<"Hello I am LCD called on your desirewith some parameters"<<endl;
        }
// copy comstrucotr
LCD(LCD& other){
    latopName = new string(*other.latopName);
}
// desturctor
~LCD(){
    delete latopName;
    cout<< "Destrucutre called" <<endl;
}
    
        void printVal(){
        cout<< *latopName<<endl;
        cout<<model<<endl;
        for(string part: parts){
            cout<<part<<" "<<endl;
        } 
        }
};
int main(){
    // LCD sm;
    // int mode = sm.modal;
    // string ver = sm.version;
    // cout<< "Modal" << mode <<endl;
    // cout<< "version" << ver << endl;
    LCD laptop("desired MacBook", 18 ,{"keyboad","btMouse","new sara kuxc"});
    laptop.printVal();
    //  copied data of the code
    cout<<"Copied Items :"<<endl;
    LCD copiedLap = laptop;
    copiedLap.printVal();
    // original data change
    cout<<"original data change"<<endl;
    *laptop.latopName = "Surface Pro laptop";
    laptop.printVal();

//  copy constructor


    return 0;
}
//  then start destrucitr topic and master it.



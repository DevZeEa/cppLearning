#include <iostream>
using namespace std;
int* collectionOfTea(int cups){
int* oCups = new int[cups];
for(int i = 0; i < cups; i++){
    oCups[i] = (i + 1) * 10;
    }
    return oCups;
}
int main(){
int cups = 7;
int* order = collectionOfTea(cups);
for(int i = 0; i < cups; i++){
cout<< " your will get " << i + 1 <<" of " << order[i] << " ml tea"<<endl;
}

delete[] order;
}
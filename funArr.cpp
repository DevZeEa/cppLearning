#include<iostream>
using namespace std;

int all(int arr[],int size){
    int total  = 0;
    for (int i = 0; i < size ; i++){
        total += arr[i];
    }
    return total;
}

int main(){
int arr[4] = {1,2,3,4};
int alle = all(arr,4);
cout<<alle<<endl;
}
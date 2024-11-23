#include<iostream>
using namespace std;
int main(){
    int myArr[2][3] = {
        {12,34,56},
        {54,57,78}
    };
    for (int i= 0; i < 2; i++){
        for(int j=0; j < 3; j++){
            cout<<myArr[i][j]<<endl;
        }
    }
}
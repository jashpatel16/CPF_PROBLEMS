#include<iostream>
using namespace std;
int num = 100;//GLOBAL VARIABLE
int main(){
    int num = 50;//LOCAL VARIABLE
    cout<<"PRINT LOCAL VARIABLE:"<<num<<endl;
    cout<<"PRINT GLOBAL VARIABLE:"<<::num<<endl;//:: it's scope resolution and is used to locate global variable
    return 0;
}
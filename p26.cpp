#include<iostream>
using namespace std;
int main(){
    int a,b,add,sub,mul,modulo;
    float div;
    cout<<"Enter number a:";
    cin>>a;
    cout<<"Enter number b:";
    cin>>b;
    add = a+b;
    sub = a-b;
    mul = a*b;
    div = a/b;
    modulo = a%b;
    cout<<"Addition of two numbers:"<<add<<endl;
    cout<<"Subtraction of two numbers:"<<sub<<endl;
    cout<<"Multiplication of two numbers:"<<mul<<endl;
    cout<<"Division of two numbers:"<<div<<endl;
    cout<<"Remainder of two numbers:"<<modulo<<endl;
    return 0;

}
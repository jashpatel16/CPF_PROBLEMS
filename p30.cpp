#include<iostream>
using namespace std;
int main(){
    // 0=false, 1=true
    int a,b;
    cout<<"Enter a boolean type int number(0 or 1):";
    cin>> a;
    cout<<"Enter another boolean type int number(0 or 1):";
    cin>> a;
    cout<<a<<"&&"<<b<<"="<<(a&&b)<<endl;
    cout<<a<<"||"<<b<<"="<<(a||b)<<endl;
    cout<<a<<"!"<<"="<<(!a)<<endl;
    cout<<b<<"!"<<"="<<(!b)<<endl;
    return 0;
}
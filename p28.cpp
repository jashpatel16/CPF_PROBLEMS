#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int b,c,d,e;
    b = ++a;
    cout<<"Pre-increment value:"<<b<<endl;
    a =10;
    c = a++;
    cout<<"Post-increment value:"<<c<<endl;
    a =10;
    d = --a;
    cout<<"Pre-decrement value:"<<d<<endl;
    a =10;
    e = a--;
    cout<<"Post-decrement value:"<<e<<endl;
    return 0;
    
}
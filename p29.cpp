#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter 1st number:";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
    cout<<boolalpha;
    cout<<a<<"=="<<b<<":"<<(a==b)<<endl;
    cout<<a<<"!="<<b<<":"<<(a!=b)<<endl;
    cout<<a<<">"<<b<<":"<<(a>b)<<endl;
    cout<<a<<"<"<<b<<":"<<(a<b)<<endl;
    cout<<a<<">="<<b<<":"<<(a>=b)<<endl;
    cout<<a<<"<="<<b<<":"<<(a<=b)<<endl;
    return 0;

}
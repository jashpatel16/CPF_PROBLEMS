#include<iostream>
using namespace std;
int main(){
    float principal,rate,time,SimpleInterest;
    cout<<"Enter principal amount:";
    cin>>principal;
    cout<<"Enter rate of interest:";
    cin>>rate;
    cout<<"Enter time period:";
    cin>>time;
    SimpleInterest = (principal * rate * time) / 100;
    cout<<"Simple Interest is:"<<SimpleInterest<<endl;
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    float seconds,minutes,hours;
    cout<<"Enter seconds:";
    cin>>seconds;
    seconds=seconds/1;
    minutes=seconds/60;
    hours=seconds/3600;
    cout<<"Seconds: "<<seconds<<endl;
    cout<<"Minutes: "<<minutes<<endl;
    cout<<"Hours: "<<hours<<endl;
    return 0;
}
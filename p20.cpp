#include<iostream>
using namespace std;
int main(){
    float distance,time,speed;
    cout<<"Enter the distance in km:";
    cin>>distance;
    cout<<"Enter the time in hours:";
    cin>>time;
    speed = distance/time;
    cout<<"The speed in (km/hr):"<<speed<<endl;
    return 0;

}
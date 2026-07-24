#include<iostream>
using namespace std;
int main(){
    float Pi = 3.14159;
    float radius, area;
    cout<<"Enter radius of circle:";
    cin>>radius;
    area = Pi * radius * radius;
    cout<<"Area of circle:"<<area<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    float length,breadth,Area,Perimeter;
    cout<<"Enter length of rectangle:";
    cin>>length;
    cout<<"Enter breadth of rectangle:";
    cin>>breadth;
    Area = length*breadth;
    Perimeter = 2*(length+breadth);
    cout<<"Area of rectangle is:"<<Area<<endl;  
    cout<<"Perimeter of rectangle is:"<<Perimeter<<endl;
    return 0;
}
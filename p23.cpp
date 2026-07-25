#include<iostream>
using namespace std;
int main(){
    int length,breadth,height,volume;
    cout<<"ENTER LENGTH OF CUBOID:";
    cin>>length;   
    cout<<"ENTER BREADTH OF CUBOID:";
    cin>>breadth;
    cout<<"ENTER HEIGHT OF CUBOID:";
    cin>>height;
    volume = length*breadth*height;
    cout<<"VOLUME OF CUBOID is:"<<volume<<endl;
    return 0;

}

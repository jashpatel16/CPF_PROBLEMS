#include<iostream>
using namespace std;
int main(){
    int totalamount;
    float notes500, notes200, notes100, notes50, notes10;
    cout<<"Enter The Total Amount of RS:";
    cin>>totalamount;
    cout<<"The Total Amount is: "<<totalamount<<endl;
    notes500 = totalamount / 500;
    notes200 = totalamount / 200;
    notes100 = totalamount / 100;
    notes50 = totalamount / 50;
    notes10 = totalamount / 10;
    cout<<"The Total Amount of ₹500 Notes are:"<<notes500<<endl;
    cout<<"The Total Amount of ₹200 Notes are:"<<notes200<<endl;
    cout<<"The Total Amount of ₹100 Notes are:"<<notes100<<endl;
    cout<<"The Total Amount of ₹50 Notes are:"<<notes50<<endl;
    cout<<"The Total Amount of ₹10 Notes are:"<<notes10<<endl;
    return 0;
}
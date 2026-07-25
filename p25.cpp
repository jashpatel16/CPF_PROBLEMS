#include<iostream>
using namespace std;
int main(){
    const int no_of_days_in_week = 7;
    // no_of_days_in_week = 8; // This line will cause a compilation error because no_of_days_in_week is a constant.
    cout<<no_of_days_in_week<<endl;
    return 0;
    
}
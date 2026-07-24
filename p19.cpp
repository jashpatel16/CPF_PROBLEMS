#include<iostream>
using namespace std;
int main(){
    unsigned int a = -10;
    cout<<"unsigned no:"<<a<<endl;
    return 0;
}
// Here the Output will be 4294967286 because the value of a is -10 which is converted to unsigned int. 
// The maximum value of unsigned int is 4294967295(for 32 bits), so when we subtract 10 from it, we get 4294967286.
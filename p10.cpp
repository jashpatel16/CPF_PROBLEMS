#include<iostream>
using namespace std;
int main(){
    short int a = 32767;
    short int b = 32768;
    short int c = 32769;
    short int d = 32770;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "d: " << d << endl;
    return 0;
}
// short int value ranges from -32768 to 32767 //
// When the value exceeds the positive range,it starts overflowing from the negative range and vice versa.//
// To sort it out we have to use int, long int or long long int data types.//











 
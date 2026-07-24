#include<iostream>
using namespace std;
int main(){
    int num,extract_ones_place,extract_tens_place,extract_hundreds_place,reversed_num;
    cout<<"Enter a 3 digit number:";
    cin>>num;
    extract_ones_place = num % 10;
    extract_tens_place = (num / 10) % 10;
    extract_hundreds_place = num / 100;
    reversed_num = (extract_ones_place * 100) + (extract_tens_place * 10) + extract_hundreds_place;
    cout<<"The Reversed 3 digit number is:"<<reversed_num<<endl;
    return 0;
}
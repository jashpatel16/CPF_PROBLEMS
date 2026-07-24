#include<iostream>
using namespace std;
int main(){
        int num,extract_ones_place,extract_tens_place,extract_hundreds_place,sum_of_digits;
    cout<<"Enter a 3 digit number:";
    cin>>num;
    extract_ones_place = num % 10;
    extract_tens_place = (num / 10) % 10;
    extract_hundreds_place = num / 100;
    sum_of_digits = extract_ones_place + extract_tens_place + extract_hundreds_place;
    cout<<"The Sum of Digits is:"<<sum_of_digits<<endl;
    return 0;
}






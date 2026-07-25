#include<iostream>
using namespace std;
int main(){
    float weight,height,BMI;
    cout<<"ENTER YOUR WEIGHT(in KG):";
    cin>>weight;
    cout<<"ENTER YOUR HEIGHT(in METERS):";
    cin>>height;
    BMI = weight/(height*height);
    cout<<"YOUR BMI RATIO is:"<<BMI<<endl;
    return 0;
}
// UNDERWEIGHT = BMI Less Than 18.5
// HEALTHY WEIGHT = BMI from 18.5 to 24.9
// OVERWEIGHT = BMI from 25 to 29.9
// OBESITY = BMI of 30 or Higher
#include<iostream>
using namespace std;
int main(){
    int a=10;
    char b = 'J';
    float c = 10.10;
    double d = 10.101010;
    long long e = 1000000000;
    cout<<"Integer:"<<sizeof(a)<<endl;
    cout<<"Character:"<<sizeof(b)<<endl;
    cout<<"Float:"<<sizeof(c)<<endl;
    cout<<"Double:"<<sizeof(d)<<endl;
    cout<<"Long Long:"<<sizeof(e)<<endl;
    return 0;
}
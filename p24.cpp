#include<iostream>
using namespace std;
int main(){
    auto a = 10;
    auto b = 10.1010;
    auto c = 'A';
    cout<<a<<":"<<sizeof(a)<<"bytes"<<endl;
    cout<<b<<":"<<sizeof(b)<<"bytes"<<endl;
    cout<<c<<":"<<sizeof(c)<<"bytes"<<endl;
    return 0;
}


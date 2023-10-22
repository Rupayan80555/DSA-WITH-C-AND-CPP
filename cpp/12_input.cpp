#include<iostream>
using namespace std;

int main(){

    int number,b;
    cout<<"input number ";
    cin>>number;
    cout<<"input b ";
    cin>>b;
    cout<<"number="<<number<<endl;
    cout<<"b="<<b<<endl;
    int c;
    c=b;
    b=number;
    number=c;
    cout<<"number:"<<number<<endl;
    cout<<"b:"<<b;

    return 0;

}
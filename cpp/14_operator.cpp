#include<iostream>
using namespace std;

int main(){

    int number=4;
    cout<< sizeof (number)<<endl;

    char name= 'number';
    cout<< sizeof (name)<<endl;

    bool flag ;
    name ==number ? flag = true : flag = false ;

    cout<<flag<<endl;// false return korbe mane 0

    cout<<(&number)<<endl;

    int d = 6;
    cout<<(d++)<<endl;
    int b= d+5;
    cout<<(b)<<endl;
    int c= 8;
    cout<<(++c)<<endl;


    return 0;
}
//(&number means location of number in memory)
/*x++ post increment ++number pre incriment 
post increment er  time 1st e store kore rakha value debe pore er operation e 1 add korbe
pre increment er time e jeta store kora thakbe setar sathe 1 jog korei debe*/
#include<iostream>
#include<math.h>
using namespace std;
int main (){
    int number=-128;
    while(number<=129){
        cout<<number<<"       :"<<(char)number<<endl;
        number++;
    }
    return 0;

}
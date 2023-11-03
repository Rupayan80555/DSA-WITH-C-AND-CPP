#include <iostream>
using namespace std;

int main(){

    int num1=5;//0101
    cout<<(num1<<1)<<endl;//10,bitwise =1010,{last e 1 thakle ekghor left shift er time last e 0 bosate hobe}
    cout<<(num1>>1)<<endl;//2

    int num2 =8;//1000
    cout<<(num1&num2)<<endl;   // & ei chinho ta holo bitwise and [num1 ar num2 er moddhe duibar e1 mile gele 1 hobe noi to 0 bosbe]
    cout<<(num1|num2)<<endl;   // | ei chino ta holo (bitwise or )  1101 [num1 er 0101 & num2 er 1000 er moddhe joto gulo 1 acge sob bosate hobe]              

    return 0;
}
//left shift wr khetre numm1 er store kora value er sathe 2^x gun  ar write shift hole 2^x diye vag korte hobe 
/*cggvcvwycywcyi



eouiwhuhcuic*/
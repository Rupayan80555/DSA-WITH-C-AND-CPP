#include<iostream>
using namespace std;

int main()
{
    int n,ans=0,power=1;
    cout<<"Enter a binary Number";
    cin>>n;
    while (n>0)
    {
        int lastDigit=n%10;
        ans+=(lastDigit*power);
        power*=2;
        n/=10;
    }
    cout<<ans;
    return 0;
}
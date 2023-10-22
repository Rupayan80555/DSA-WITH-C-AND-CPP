// #include<iostream>
// using namespace std;

// int main()
// {
//     int n,i,res=1;
//     cin>>n;
//     for ( i = 1; i <=n && n>=0; i++)
//     {
        
//         res=i*res;
//     }
//     cout<<res;
//     return 0;
// }

#include<iostream>
using namespace std;

int main()
{
    int a,b,c=1;
    cin>>a>>b;
    for (int i = 0; i < b; i++)
    {
        c=a*c;
    }
    cout<<c;
    return 0;
}
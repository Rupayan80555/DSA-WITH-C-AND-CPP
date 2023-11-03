#include<iostream>
using namespace std;

int main()
{
    int m;
    cout<<"Enter the value of m: ";
    cin>>m;
    printf("Now printing the triangle pattern \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<"*";
        }
        printf("\n");
    }
    printf("Now printing the reverse triangle pattern \n");
    for (int i = m; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<"*";
        }
        printf("\n");
    }
    

    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the value of Rows and Columns \n\n";
    int Rows,Columns;
    cout<<"Enter the Row value: ";
    cin>>Rows;
    cout<<"Enter the Row value: ";
    cin>>Columns;
    
    for (int i = 1; i <= Rows; i++)
    {
        for (int j = 1; j <= Columns; j++)
        {
            if ((i+j)%2!=0)
            {
                cout<<2;
            }
            else
            {
                cout<<1;
            }
        }
        
            printf("\n");
    }
    
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int rows,Column;
    cout<<"Enter the Row and Column value"<<endl;
    cout<<"Enter row: ";
    cin>>rows;
    cout<<"Enter Column: ";
    cin>>Column;
    cout<<"Now printing the Hollow Rectangular pattern"<<endl;
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < Column; j++)
        {
            if (i==0||j==0||i==rows-1||j==Column-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
            
        }
        printf("\n");
    }
    
    return 0;
}
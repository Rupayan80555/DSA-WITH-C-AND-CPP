#include<iostream>
using namespace std;

int main()
{
    int row,column;
    cout<<"Enter the number of rows and column"<<endl;
    cout<<"Enter row ";
    cin>>row;
    cout<<endl<<"Enter column ";
    cin>>column;
    cout<<endl<<"Now printing the * Strucure"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}
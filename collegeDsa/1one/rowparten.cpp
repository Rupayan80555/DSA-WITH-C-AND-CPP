#include<iostream>
using namespace std;
int main(){
    int row=1,n,count=1;
    cout<<"tell the number ";
    cin>>n;
    while(row<=n){
        int column=1;
        int a= row;
        while(column<=row){
            cout<<a<<" ";
            column++;
            a++;
        }
        cout<<"\n";
        row++;
    }
}
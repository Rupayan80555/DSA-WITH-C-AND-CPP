#include<iostream>
using namespace std;
int main(){

    int age;
    cin>>age;

    if (age>18){
        if  (age>60)
        cout<<"senior cityzent"<<endl;
        else{
            cout<<"adult"<<endl;
        }

    }

    else if(age<12){

        cout<<"child"<<endl;
    }

    else {
        cout<<"teen ager"<<endl;

    }
    return 0;
}

#include <iostream>
using namespace std;
int p = 5;
void g(int a)
{
    cout << p<<endl;
}
void sr(int a)
{
    int p=7;
    cout << ::p<<endl;
}
void sr7(int a)
{
    int p=7;
    
    cout << p<<endl;
}
int main()
{
   
    g(2);
    sr(2);
    sr7(2);
    return 0;
}
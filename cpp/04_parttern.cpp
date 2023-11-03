#include <iostream>
using namespace std;

int main()
{
    int n,l;
    cout<<"Enter the value of n: ";
    cin >> n;
    
    for (int k = 0; k <= n; k++)
    {
        for (int i = 1; i <= (n - k); i++)
        {

            cout << " ";
        }
        for (int j = 1; j <= (2 * k - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

   
    return 0;
}
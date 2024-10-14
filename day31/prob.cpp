#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    int n;
    string m;
    cin >> n;
    string arr[n];
    for(int i = 0; i < n;i++)
    {
        cin >> m;
        arr[i] = m;
 
    }
    for (int i = 0; i<n; i++)
    {
        string k = arr[i];
        if (size(k) > 10)
        {
            cout<<k[0]<<size(k) - 2<<k[size(k) - 1]<<endl;
        }
        else
        {
            cout<<k<<endl;
        }
    }
 
}
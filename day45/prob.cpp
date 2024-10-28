#include <iostream>
#include <string>
using namespace std;

int count(const string& str) 
{
    int m = 0;
    for (char c : str) 
    {
        if (c == 'A') 
        {
            m++;
        }
    }
    return m;
}

int main() {
    int n;
    cin >> n;
    int m[n];
    string p[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> p[i];
        m[i] = count(p[i]);
    }
    for (int i = 0; i < n; i++) 
    {
        if (m[i] > 2) 
        { 
            cout << "A \n";
        } else 
        {
            cout << "B \n";
        }
    }
    return 0;
}
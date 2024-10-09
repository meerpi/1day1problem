#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    char a[n + 1];
    int m = 0;
    char b[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'};
    cin >> a;
    for( int i = 0; i < n; i++)
    {
        a[i] = tolower(a[i]);
        for(int j = 0; j < 27; j++)
        {
           if(a[i] == b[j])
           {
               b[j] = 1;
               m++;
           }
        }
    }
    if(m == 26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
 
} 
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string t;
    int p = 0;
    cin >> t;
    for(int i = 0; i < t.length(); i++)
    {
        int j;
        for(j = 0; j<i;j++)
        {
            if(t[i] == t[j])
            {
                break;
            }
            
        }
        if(i == j)
        {
            p++;
        }
    }
    if(p % 2 != 0)
    {
        cout<<"IGNORE HIM!";
    }
    else
    {
        cout<<"CHAT WITH HER!";
    }
    return 0;

}
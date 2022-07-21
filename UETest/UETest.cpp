#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    cin >> a;

    for (int i = 0; i < a.length(); i++)
    {
        if (isupper(a[i]))
            a[i] = a[i] + 32;
    }

    for (int i = 0; i <= a.length(); i++)
    {
        char b = a[i];

        for (int j = i+1; j <= a.length(); j++)
        {
            if (b == a[j])
            {
                a[i] = ')';
                a[j] = ')';
            }
        }
        if (a[i] != ')')
            a[i] = '(';
    }
    
    cout << a;

    return 0;
}


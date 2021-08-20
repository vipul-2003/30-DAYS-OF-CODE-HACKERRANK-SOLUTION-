#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <map>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    map<string, int> m;

    int n;
    cin >> n;

    string name;
    int num;

    for (int i = 0; i < n; i++)
    {
        cin >> name;
        cin >> num;

        m.insert(make_pair(name, num));
    }

    while (cin >> name)
    {

        if (m[name])
        {
            cout << name << "=" << m[name] << endl;
        }
        else
        {
            cout << "Not found" << endl;
        }
    }

    return 0;
}

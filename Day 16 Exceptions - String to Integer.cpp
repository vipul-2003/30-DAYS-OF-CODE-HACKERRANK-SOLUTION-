#include <bits/stdc++.h>

using namespace std;

int main()
{
    string S;
    getline(cin, S);

    int num = 0;

    try
    {
        num = stoi(S); // string to integer
        cout << num;
    }

    catch (exception e)
    {
        cout << "Bad String " << endl;
    }

    return 0;
}


#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<int> base2;
    int reminder;

    while (n > 0)
    {

        if (n > 0)
        {
            reminder = n % 2;
            base2.push_back(reminder);
            n = n / 2;
        }
    }
    reverse(base2.begin(), base2.end());
    int size = base2.size();

    int count = 0;

    int prevmax = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (base2[i] == 1)
        {
            count += base2[i];
        }

        if (count > prevmax)
        {
            prevmax = count;
        }

        if (base2[i] == 0)
        {
            count = 0;
        }
        // 1 1 0 1 1 0 1 1 1
    }

    cout << prevmax << endl;

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}

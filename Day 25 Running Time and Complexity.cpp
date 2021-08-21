#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int testcases;
    cin >> testcases;

    vector<int> number;
    int input;

    for (int i = 0; i < testcases; i++)
    {
        cin >> input;
        number.push_back(input);

        bool prime = true;
        if (input == 1)
        {
            prime = false;
        }

        for (int i = 2; i <= sqrt(input); i++)
        {
            if (input % i == 0)
            {
                prime = false;

                break;
            }
        }
        if (prime == true)
            cout << "Prime " << endl;

        else
            cout << "Not prime " << endl;
    }
    return 0;
}

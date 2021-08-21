#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int fine = 0;
    int d1, d2, m1, m2, y1, y2;

    cin >> d1 >> m1 >> y1;
    cin >> d2 >> m2 >> y2;

    if (y1 == y2) // if the year are same
    {
        if (m1 == m2) // if months are same
        {
            if (d1 == d2) // if date are same
            {

                fine = 0;
            }

            else // when the date is not same but the month is same
            {
                fine = (d1 - d2) * 15;
            }
        }
        else if (m2 > m1) // if the book is submitted before due month
        {
            fine = 0;
        }

        else
        {
            fine = (m1 - m2) * 500;
        }
    }
    else if (y2 > y1) //if book is submitted before due year
    {
        fine = 0;
    }

    else
    {
        fine = 10000;
    }

    cout << fine;
    return 0;
}

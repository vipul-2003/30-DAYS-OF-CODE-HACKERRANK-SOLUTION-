#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference
{
private:
    vector<int> elements;

public:
    int maximumDifference;

    int n = 0;
    int __elements[100];
    // Add your code here
    Difference(vector<int> a)
    {
        n = a.size();

        for (int i = 0; i < n; i++)
        {
            __elements[i] = a[i];
        }
    }

    void computeDifference()
    {
        int min = *min_element(__elements, __elements + n);
        int max = *max_element(__elements, __elements + n);

        maximumDifference = abs(max - min);
    }

}; // End of Difference class

int main()
{
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++)
    {
        int e;
        cin >> e;

        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}
v
#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll testcases;
    cin >> testcases;
    while (testcases != 0)
    {
        ll A, B, C, D;
        cin >> A >> B;
        cin >> C >> D;
        if (C >= A && D >= B)
        {
            cout << "POSSIBLE" << endl;
        }
        else
        {
            cout << "IMPOSSIBLE" << endl;
        }
        testcases--;
    }
    return 0;
}
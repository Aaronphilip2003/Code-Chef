#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
    ll testcases = 0;
    cin >> testcases;
    while (testcases != 0)
    {
        ll X, Y, Z;
        cin >> X >> Y >> Z;
        ll min_time = Z - (Y / X);
        if (min_time > 0)
        {
            cout << min_time << endl;
        }
        else
        {
            cout << 0 << endl;
        }
        testcases--;
    }
}

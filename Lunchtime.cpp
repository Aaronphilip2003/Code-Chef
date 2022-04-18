// PROBLEM CODE : https://www.codechef.com/problems/LTIME
// SUBMISSION CODE : https://www.codechef.com/viewsolution/63154304

#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll testcases = 0;
    cin >> testcases;
    while (testcases != 0)
    {
        ll time;
        cin >> time;
        if (time >= 1 && time <= 4)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        testcases--;
    }
    return 0;
}

// PROBLEM CODE : https://www.codechef.com/problems/EXPIRY
// SUBMISSION CODE : https://www.codechef.com/viewsolution/63154450

#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll testcases = 0;
    cin >> testcases;
    while (testcases != 0)
    {
        ll N, M, K;
        cin >> N >> M >> K;
        if (M * K >= N)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
        testcases--;
    }
    return 0;
}

#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
    ll testcases;
    cin >> testcases;
    while (testcases--)
    {
        ll N, K;
        cin >> N >> K;
        if (K == 1)
        {
            if (N % 4 == 0)
            {
                cout << "On" << endl;
            }
            else
                cout << "Ambiguous" << endl;
        }
        else
        {
            if (N % 4 == 0)
            {
                cout << "Off" << endl;
            }
            else
                cout << "On" << endl;
        }
    }
    return 0;
}
#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll testcases = 0;
    cin >> testcases;
    while (testcases--)
    {
        ll X, Y;
        cin >> X >> Y; // 2 1
        ll time = 0;
        if (X > Y)
        {
            while (X > Y)
            {
                X = X - 2;
                Y = Y - 1;
                time++;
            }
        }
        else if (X < Y)
        {
            while (X < Y)
            {
                X = X + 2;
                Y = Y + 1;
                time++;
            }
        }
        cout << time << endl;
    }
    return 0;
}
// PROBLEM CODE : https://www.codechef.com/problems/JENGA
// SOLUTION CODE : https://www.codechef.com/viewsolution/63374400

#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll N, X;
        cin >> N >> X;
        if(X%N==0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
          cout<<"No"<<endl;
        }
    }
    return 0;
}

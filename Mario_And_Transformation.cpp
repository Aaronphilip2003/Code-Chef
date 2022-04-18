// PROBLEM CODE : https://www.codechef.com/problems/TRANSFORM
// SUBMISSION CODE : https://www.codechef.com/viewsolution/63155120

#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll testcases=0;
    cin>>testcases;
    while(testcases!=0)
    {
        ll X;
        cin>>X;
        if(X%3==0)
        {
            cout<<"NORMAL"<<endl;
        }
        else if(X%3==1)
        {
            cout<<"HUGE"<<endl;
        }
        else if(X%3==2)
        {
            cout<<"SMALL"<<endl;
        }

        testcases--;
    }
    return 0;
}


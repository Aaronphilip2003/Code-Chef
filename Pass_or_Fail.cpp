// PROBLEM CODE : https://www.codechef.com/problems/PASSORFAIL
// SOLUTION CODE : https://www.codechef.com/viewsolution/63154127

#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll testcases=0;
    cin>>testcases;
    while(testcases!=0)
    {
        ll N,X,P;
        cin>>N>>X>>P;
        ll marks=0;
        marks=(X*3)+((N-X)*-1);
        if (marks>=P)
        {
            cout<<"PASS"<<endl;
        }
        else
        {
            cout<<"FAIL"<<endl;
        }
        testcases--;
    }
    
}

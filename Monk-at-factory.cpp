//DR_BR34k
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long sum=0;
    for(int i=0;i<n;i++)
    {

        int x;
        cin>>x;
        sum+=x;

    }

    if(sum==2*(n-1))
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> ans;
    int n ; cin>>n;
    int arr[n];
    int sum = 0;
    for(int i=0; i<n; i++) cin>>arr[i];
    int l , r , x;
    int q; cin>>q;
    while(q--)
    {
        cin>>l>>r>>x;
        for(int i = l ; i<=r ; i++)
        {
            arr[i]+=x;
        }
    }
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}



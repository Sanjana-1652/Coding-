#include<bits/stdc++.h>
using namespace std;
long long N = 10000001;
vector<bool> prime;
void sieve()
{
    for (int i = 0 ; i < N ; i++)
    {
        prime[i]=i;
    }
    for (int i = 2; i * i <= N; i++) 
    {
        if (prime[i]) 
        {
            for (int j = i * i; j <= N; j += i)
            {
                if(prime[j]!=j) prime[j] = i;
            }
        }   
}

}
int main()
{
    vector<int> temp;
    int n=100 , i;
    sieve();
    for(i=1;i<=n;i++)
    {
        if (prime[i]) 
        temp.push_back(i);
    }
    for(auto it : temp)  
    cout<<it<<" ";
return 0;
}
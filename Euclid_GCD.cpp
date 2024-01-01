#include<bits/stdc++.h>
using namespace std;
int GCD(int a,int b)
{
    if(b==0) return a;
    else GCD(b,a%b);
}
int main()
{
    int a,b,n;
    cin>>a>>b;
    n=GCD(a,b);
    int lcm = (a*b)/n; 
    cout<<lcm;
    return 0;
}

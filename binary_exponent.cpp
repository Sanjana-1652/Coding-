#include<bits/stdc++.h>
using namespace std;
int pow(int a , int b)
{
    int ans = 1;
    while(b)
    {
       
        if(b%2) ans *= a;
        b = b >> 1;
        a = a * a; 
    }
    return ans;
}

int main()
{
    int n,p; 
    cin>>n>>p;
    cout<<pow(n,p);
}



























































int rec(int a , int b)
{
    if (b==0) return 1;
    int temp = rec(a , b/2);
    if(b % 2 == 0) return temp * temp;
    else return temp * temp * a;
}
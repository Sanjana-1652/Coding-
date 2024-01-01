#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //count the set bits for a given number
    // int n;
    // cin>>n;
    // int c;
    // while(n){
    //     //Apply an bitwise and to check wether the bit is set or not with 1
    //     if(n&1==1)//if the bit is set the make count increment
    //     {
    //         c++;
    //     }
    //     n=n>>1;//move right to check the next bits are set or not
    // }
    // cout<<c<<endl;
    // //by using stl to count set bits it is an in built function
    int cc=__builtin_popcount(5);
    cout<<cc;
    //for long numbers
    long long num;
    cin>>num;
    int cl=__builtin_popcountll(num);

    bitset<4> b1(string("1100"));
    bitset<6> b2(string("001000"));
  
    // Function to count the
    // number of set bits in b1
    int result1 = b1.count();
    cout <<result1;
    return 0;
}
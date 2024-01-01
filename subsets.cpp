#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> get_subset(vector<int> nums)
{
    vector<vector<int>> all_subset;
    int n = nums.size();
    for(int i = 0 ; i< (1<<n) ; i++)
    {
        vector<int> subset;
        for (int j = 0 ; j < n ; j++)
        {
            if((i & (1<<i))!=0)
            {
                subset.push_back(nums[j]);
            }
        }
        all_subset.push_back(subset);
    }
    return all_subset;
}

int main()
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vector<vector<int>> ans = get_subset(vec);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << endl;;
        }
    }
}
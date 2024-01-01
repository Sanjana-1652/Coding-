// // #include<bits/stdc++.h>
// // using namespace std;
// // int BFS(int start,int end,int n,int arr[])
// // {
// // 	if(start==end)return 0;
// // 	queue<pair<int,int>>q;
// // 	q.push({start,0});
// // 	while(!q.empty())
// // 	{
// // 		auto it=q.front();
// // 		int newstart=it.first;
// // 		int steps=it.second;
// // 		q.pop();
// // 		for(int i=0;i<n;i++)
// // 		{
// // 			if(newstart*arr[i]%100000==end)
// // 			{
// // 				return steps+1;
// // 			}
// // 			else
// // 			{
// // 				if(newstart*arr[i]%100000<end)
// // 				{
// // 					q.push({newstart*arr[i]%10000,steps+1});
// // 				}
// // 			}
// // 		}
// // 	}
// // 	return -1;
// // }
// // int main()
// // {
// // 	int start,end;
// // 	cin>>start>>end;
// // 	int n;
// // 	cin>>n;
// // 	int arr[n];
// // 	for(int i=0;i<n;i++)cin>>arr[i];
// // 	cout<<BFS(start,end,n,arr);
// // }

// // /*
// //  prev = nums[0]
// //         end = 0
// // 		# find the largest index not in place
// //         for i in range(0, len(nums)):
// //             if nums[i] < prev:
// //                 end = i
// //             else:
// //                 prev = nums[i]

// //         start = len(nums) - 1
// //         prev = nums[start]
// // 		# find the smallest index not in place
// //         for i in range(len(nums)-1, -1, -1):
// //             if prev < nums[i]:
// //                 start = i
// //             else:
// //                 prev = nums[i]
// //         if end != 0:
// //             return end - start + 1
// //         else: 
// //             return 0
// // */

#include<bits/stdc++.h>
using namespace std;
bool isvalid(int i,int j,int n,int m,vector<vector<int>>&mat)
{
	if(i<0 or j<0 or i>n or j>m or mat[i][j]==0)return false;
	return true;
}
int bfs(int n,int m,vector<vector<int>>&mat)
{
	vector<vector<int>>vis(n,vector<int>(m,0));
	int di[4]={-1,0,1,0};
	int dj[4]={0,1,0,-1};
	queue<pair<pair<int,int>,int>>q;
	q.push({{0,0},0});
	if(mat[0][0]==0)return -1;
	if(mat[0][0]==9)return 0;
	vis[0][0]=1;
	while(!q.empty())
	{
		auto it=q.front();
		int i=it.first.first;
		int j=it.first.second;
		int steps=it.second;
		q.pop();
		for(int k=0;k<4;k++)
		{
			int newi=i+di[k];
			int newj=j+dj[k];
			if(isvalid(newi,newj,n,m,mat) and vis[newi][newj]!=1)
			{
				if(mat[newi][newj]==9)
				{
					return steps+1;
				}
				else
				{

				q.push({{newi,newj},steps+1});
				vis[newi][newj]=1;
			}
			}
		}
	}
	return -1;
}
int main()
{
	int n,m;
	cin>>n>>m;
	vector<vector<int>>mat(n,vector<int>(m,0));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>mat[i][j];
		}
	}
	cout<<bfs(n,m,mat);
} 
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	stack<int> arr;
// 	arr.push(10);
// 	arr.push(20);
// 	arr.push(30);
	
// }

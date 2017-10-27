#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <iomanip> 
#include <deque>
using namespace std;

#define endl "\n"
#define print(x) cout<<x<<"\n"
#define print2(x,y) cout<<x<<","<<y<<"\n"
#define input(x) cin>>x
#define loop(n) for(int i = 0; i < n; i++)

int main() 
{
	string s;
	int arr[26],max=0;
	loop(26)
	{
		cin>>arr[i];
	}
	cin>>s;
	loop(s.size())
	{
		if(max < arr[s[i]-'a'])
			max = arr[s[i]-'a'];
	}
	cout<<max*s.size();
}
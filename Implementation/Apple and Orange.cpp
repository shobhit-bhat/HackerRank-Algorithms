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
	float a,s,t,b,m,n,d,apple=0,orange=0;
	cin>>s>>t>>a>>b>>m>>n;
	loop(m)
	{
		cin>>d;
		d+=a;
		if(d >= s && d <= t)
			apple++;
	}
	loop(n)
	{
		cin>>d;
		d += b;
		if(d >= s && d <= t)
			orange++;
	}
	cout<<apple<<endl<<orange;
	return 0;
}
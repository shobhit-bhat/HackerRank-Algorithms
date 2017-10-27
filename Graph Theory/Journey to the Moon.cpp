#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <iomanip> 
#include <queue>
#include <stack>
using namespace std;

#define REP(i,n) for(int i = 0; i < n; i++)

vector<vector<int>> v;
vector<bool> visited;

void solution(int u,int &count){
	visited[u] = true;
	count++;
	for(int &i : v[u]){
		if(!visited[i]){
			solution(i,count);
		}
	}
}

int main(){
	int n,p,a,b;
	cin>>n>>p;
	vector<int> c;
	v.clear();	visited.clear();
	v.resize(n);	visited.assign(n, false);
	
	REP(i,p){
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	REP(i,n){
		if(!visited[i]){
			int count = 0;
			solution(i,count);
			c.push_back(count);
		}
	}
	long long ans = 0,sum=0;
	int X = (int)c.size(); 
	REP(i,X-1)
	{
		sum+=c[i+1];
	}
	REP(i,X-1)
	{
		ans+=c[i]*sum;
		sum-=c[i+1];
	}
	cout<<ans<<endl;
}


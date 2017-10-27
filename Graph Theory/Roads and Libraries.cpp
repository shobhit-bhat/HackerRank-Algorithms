#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <iomanip> 
#include <deque>
#include <stack>
#include <list>
using namespace std;

#define REP(i,n) for(int i = 0; i < n; i++)

int dfs(vector<vector<int>> &g, vector<bool> &visited, int u){
	visited[u] = true;
	long long count = 1;
	for(int &i : g[u]){
		if(!visited[i]){
			count += dfs(g,visited,i);
		}
	}
	return count;
}

int main() {
	int t,n,m,lib,road,u,v;
	long long c,ans;
	cin>>t;
	vector<vector<int>> g;
	vector<bool> visited;
	while(t--){
		ans = 0;
		cin>>n>>m>>lib>>road;
		g.clear();		visited.clear();
		g.resize(n);	visited.assign(n,false);	

		REP(i,m){
			cin>>u>>v;
			u--;
			v--;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		bool cost = lib < road;
		REP(i,n){
			if(!visited[i]){
				c = dfs(g,visited,i);
				if(cost){
					ans += c*lib;
				}
				else{
					ans += (lib + (c-1)*road);
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
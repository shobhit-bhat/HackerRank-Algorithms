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

int dfs(vector<vector<int>> &g, vector<bool> &visited, int u, int &cut){
	visited[u] = true;
	int count = 0,c;
	for(int &i : g[u]){
		if(!visited[i]){
			c = dfs(g,visited,i,cut);
			count += c;
			if(c % 2 == 0){
				cut++;
			}
		}
	}
	return count+1;
}

int main() {
	int n,m,u,v,cut = 0;
	vector<vector<int>> g;
	vector<bool> vis;
	cin>>n>>m;
	g.clear();		vis.clear();
	g.resize(n);	vis.assign(n,false);
	REP(i,m){
		cin>>u>>v;
		u--;
		v--;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	dfs(g,vis,0,cut);
	cout<<cut<<endl;
	return 0;
}
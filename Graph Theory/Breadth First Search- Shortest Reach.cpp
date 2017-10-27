#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

#define REP(i,n,x) for(i = x; i < n; i++)

void bfs(vector<vector<int>> graph, vector<int> &dist, queue<int> &que, int pos){
	que.push(pos);
	dist[pos] = 0;
	while(!que.empty()){
		pos = que.front();
		for(int &i:graph[pos]){
			if(dist[i] == -1){
				dist[i] = dist[pos] + 6;
				que.push(i);
			}
		}
		que.pop();
	}

}

int main(){
	int i,q,n,m,x,y,s;
	cin>>q;
	vector<vector<int>> graph;
	queue<int> que;
	vector<int> dist;
	while(q--){
		cin>>n>>m;
		graph.clear();
		graph.resize(n);
		dist.clear();
		dist.assign(n,-1);
		REP(i,m,0){
			cin>>x>>y;
			x--;
			y--;
			graph[x].push_back(y);
			graph[y].push_back(x);
		}
		cin>>s;
		s--;
		bfs(graph,dist,que,s);
		REP(i,n,0){
			if(dist[i] != 0){
				cout<<dist[i]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
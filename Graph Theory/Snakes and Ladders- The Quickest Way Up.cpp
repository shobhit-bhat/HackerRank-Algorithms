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
#include <queue>
using namespace std;

#define REP(i,n,x) for(int i = x; i < n; i++)

void bfs(vector<int> &v, vector<int> &dist, int s){
	int pos;
	queue<int> que;
	que.push(s);
	dist[s] = 0;
	while(!que.empty() && dist[99] == -1){
		pos = que.front();
		for(int i = 1; i < 7 && i+pos < 100; i++){
			if(v[i+pos] != -1 && dist[v[i+pos]] == -1){
				que.push(v[i+pos]);
				dist[v[i+pos]] = dist[pos] + 1;
			}
			else if(v[i+pos] == -1 && dist[i+pos] == -1){
				que.push(i+pos);
				dist[i+pos] = dist[pos] + 1;
			}
		}
		que.pop();
	}
}

int main() {
	int t,n,m,x,y;
	vector<int> v;
	vector<int> dist;
	cin>>t;
	while(t--){
		v.clear();
		v.assign(100,-1);
		dist.clear();
		dist.assign(100,-1);
		cin>>n;
		REP(i,n,0){
			cin>>x>>y;
			x--;
			y--;
			v[x] = y;
		}
		cin>>m;
		REP(i,m,0){
			cin>>x>>y;
			x--;
			y--;
			v[x] = y;
		}
		bfs(v,dist,0);
		cout<<dist[99]<<endl;
	}

	return 0;
}
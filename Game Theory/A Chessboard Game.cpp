#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

#define REP(i,n,x) for(i = x; i < n; i++)

bool chess(map<pair<int,int>,bool> dp, int x, int y){
	if(dp.count({x,y}) == 1){
		return dp[{x,y}];
	}
	bool state = false;
	if(x-2 >=0 && y+1 <= 14 && chess(dp,x-2,y+1) == false)
		state = true;
	else if(x-2 >=0 && y-1 >=0 && chess(dp,x-2,y-1) == false)
		state = true;
	else if(x+1 <=14 && y-2 >= 0 && chess(dp,x+1,y-2) == false)
		state = true;
	else if(x-1 >=0 && y-2 >= 0 && chess(dp,x-1,y-2) == false)
		state = true;
	dp[{x,y}] = state;
	return state;
}

int main(){
	int n,x,y;
	cin>>n;
	map<pair<int,int>,bool> dp;
	while(n--){
		cin>>x>>y;
		cout<<(chess(dp,x-1,y-1)?"First":"Second")<<endl;
	}
	return 0;
}
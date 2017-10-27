#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define REP(i,n,x) for(i = x; i < n; i++)

int main() {
	int x1,v1,x2,v2;
	cin>>x1>>v1>>x2>>v2;
	float ans;
	if(v2 == v1 && x1 == x2){
		cout<<"YES";
		return 0;
	}
	else if(v2 == v1 || x1 == x2){
		cout<<"NO";
		return 0;
	}
	ans = float((x1-x2))/float((v2-v1));
	cerr<<ans;
	if(ans < 0){
		cout<<"NO";
	}
	else if(ans - int(ans) == 0){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}
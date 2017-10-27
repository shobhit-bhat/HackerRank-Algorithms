#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

#define REP(i,n,x) for(i = x; i < n; i++)

int main(){
	int n,x;
	cin>>n;
	map<int,bool> dp;
	while(n--){
		cin>>x;
		cout<<((x%7==0 || x%7==1)?"Second":"First")<<endl;
	}
	return 0;
}
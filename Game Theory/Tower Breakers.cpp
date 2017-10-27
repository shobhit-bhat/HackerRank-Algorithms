#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

#define REP(i,n,x) for(i = x; i < n; i++)

int main(){
	int t,n,m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		if(m == 1){
			cout<<"2"<<endl;
		}
		else
			cout<<(n%2==1?"1":"2")<<endl;
	}
	return 0;
}
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

#define REP(i,n,x) for(i = x; i < n; i++)

int main(){
	int t,n,i,nim_sum;
	bool flag;
	cin>>t;
	vector<int> arr;
	while(t--){
		flag = false;
		cin>>n;
		arr.clear();
		arr.resize(n);
		REP(i,n,0){
			cin>>arr[i];
		}
		nim_sum = 0;
		REP(i,n,0){
			nim_sum = nim_sum ^ arr[i];
			if(arr[i] > 2){
				flag = true;
			}
		}
		if(flag)
			cout<<((nim_sum == 0)?"Second":"First")<<endl;
		else
			cout<<((nim_sum == 1)?"Second":"First")<<endl;
	}
	return 0;
}
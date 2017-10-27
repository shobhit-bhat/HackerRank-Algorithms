#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
	int n, k, a, max = 0;
	cin>>n>>k;
	while(n--){
		cin>>a;
		if(a > max){
			max = a;
		}
	}
	if(max > k)
			cout<<max-k;
		else
			cout<<0;
	return 0;
}
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define REP(i,n,x) for(i = x; i < n; i++)

int birthdayCakeCandles(int n, vector <int> arr) {
	int max = 0, count, i;
	REP(i,n,0){
		if(arr[i] > max){
			max = arr[i];
			count = 1;
		}
		else if(arr[i] == max){
			cerr<<i<<endl;
			count++;
		}
		cerr<<"Max: "<<max<<endl;
	}
	return count;
}

int main() {
	int n;
	cin >> n;
	vector<int> ar(n);
	for(int ar_i = 0; ar_i < n; ar_i++){
		cin >> ar[ar_i];
	}
	int result = birthdayCakeCandles(n, ar);
	cout << result << endl;
	return 0;
}
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <iomanip>

using namespace std;

#define REP(i,n,x)	for(int i = x; i < n; i++)
#define pp(x)	push_back(x)

void merge(vector<int> &arr, int start, int end){
	int mid = (start + end) / 2;
	int i = start, j = mid, k = 0;
	vector<int> v(end-start);
	while(i < mid && j < end){
		if(arr[i] <= arr[j]){
			v[k++] = arr[i++];
		}
		else{
			v[k++] = arr[j++];
		}
	}
	while(i < mid){
		v[k++] = arr[i++];
	}
	while(j < end){
		v[k++] = arr[j++];
	}
	k = 0;
	while(k < end - start){
		arr[start + k] = v[k];
		k++;
	}
}

void mergesort(vector<int> &arr, int start, int end){
	int mid = (start + end) / 2;
	if(start + 1 >= end){
		return;
	}
	mergesort(arr,start,mid);
	mergesort(arr,mid,end);
	merge(arr,start,end);
}

int main() {
	int n,x,min = INT_MAX;
	cin>>n;
	vector<int> arr(n);
	REP(i,n,0){
		cin>>arr[i];
	}
	mergesort(arr,0,n);
	if(n % 2 != 0){
		cout<<arr[n/2];
	}
	else{
		cout<<((arr[n/2 - 1] + arr[n/2]) / 2);
	}
	return 0;
}
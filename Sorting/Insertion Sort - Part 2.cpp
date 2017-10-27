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

void print_arr(vector<int> &arr){
	int size = arr.size();
	REP(i,size,0){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void insertion_sort(vector<int> &arr){
	int size = arr.size();
	REP(i,size,1){
		int key = arr[i];
		int index = i - 1;
		while(index >= 0 && arr[index] > key){
			arr[index + 1] = arr[index];
			index--;
		}
		arr[index + 1] = key;
		print_arr(arr);
	}
}

int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	REP(i,n,0){
		cin>>arr[i];
	}
	insertion_sort(arr);
	return 0;
}
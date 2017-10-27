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

int main() {
	int n,x;
    cin>>n;
    vector<int> count(100,0);
    REP(i,n,0){
    	cin>>x;
    	count[x]++;
    }
    REP(i,100,0){
    	cout<<count[i]<<" ";
    }
    return 0;
}
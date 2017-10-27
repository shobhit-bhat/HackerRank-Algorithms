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

#define REP(i,n,x)  for(int i = x; i < n; i++)
#define pp(x)   push_back(x)

int main() {
    int n,x;
    cin>>n;
    string s;
    vector<pair<int,string>> input,arr;
    vector<int> count(100,0);
    REP(i,n,0){
        cin>>x;
        cin>>s;
        if(i < n/2){
            s = '-';
        }
        count[x]++;
        input.push_back({x,s});
    }
    REP(i,100,0){
            for(auto ele : input){
                if(ele.first == i){
                    arr.pp(ele);
                }
            }
    }
    REP(i,arr.size(),0){
        cout<<arr[i].second<<" ";
    }
    return 0;
}
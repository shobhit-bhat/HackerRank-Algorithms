#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <iomanip> 
#include <deque>
using namespace std;

#define endl "\n"
#define print(x) cout<<x<<"\n"
#define print2(x,y) cout<<x<<","<<y<<"\n"
#define input(x) cin>>x
#define loop(n) for(int i = 0; i < n; i++)

int main() 
{
    int n;
    long a, sum = 0;
    cin>>n;
    loop(n)
    {
    	cin>>a;
    	sum+=a;
    }
    cout<<sum;
    return 0;
}


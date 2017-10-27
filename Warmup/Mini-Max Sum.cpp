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
    long long arr[5],sum=0,arr1[5],max=0,min=99999999999;
    loop(5)
    {
    	cin>>arr[i];
    	sum+=arr[i];
    	if(arr[i] > max)
    		max = arr[i];
    	if(arr[i] < min)
    		min = arr[i];
    }
    cout<<sum-max<<" "<<sum-min;    
}


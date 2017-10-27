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
    int N,a,p = 0,n = 0, z = 0;
    cin>>N;
    loop(N)
    {
    	cin>>a;
    	if(a>0)
    		p++;
    	else if(a<0)
    		n++;
    	else
    		z++;
    }
    int t = p+n+z;
    cout<<(float)p/t<<endl;
    cout<<(float)n/t<<endl;
    cout<<(float)z/t<<endl;
}



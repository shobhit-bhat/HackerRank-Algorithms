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
    int n,sum = 0;
    cin>>n;
    int** mat;
    mat = new int*[n];
    loop(n)
    {
    	mat[i] = new int[n];
    }
    loop(n)
    {
    	for(int j = 0; j < n; j++)
    	{
    		cin>>mat[i][j];
    	}
    }
    loop(n)
    {
    	sum+=mat[i][i];
    	sum-=mat[i][n-i-1];
    }
    if(sum<0)
    	sum = -sum;
    cout<<sum;
    loop(n)
    	delete[] mat[i];
    delete[] mat;
}
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     // Enter your code here. Read input from STDIN. Print output to STDOUT 
    int n;
    // int* arr;
    int in;
    cin>>n;
    // arr = new int[n];
    for(int i = 0; i < n; i++)
    {
        // cin>>arr[i];
        cin>>in;
        if(in>37)
        {
        	if((in%5)>2)
        	{
        		in+=5;
        		in-=in%5;
        	}
        }
        cout<<in<<"\n";
    }
    
    return 0;
}


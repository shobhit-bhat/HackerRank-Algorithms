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
    string s;
    cin>>s;   
    if(s[8]=='P' && !(s[0] == '1' && s[1] == '2'))
    {
    	s[0]+=1;
    	s[1]+=2;
    }
    else if(s[8]=='A' && s[0] == '1' && s[1] == '2')
    {
    	s[0]='0';
    	s[1]='0';
    }
    cout<<s.substr(0,8);
    return 0;
}


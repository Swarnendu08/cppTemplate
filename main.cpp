/**
 *    author:  Swarnendu Mondal
**/

//GOOGLE
#pragma GCC optimize("O3,unroll-loops")

#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <time.h>

using namespace std;


#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

using ll = long long;
using ld = long double;
const ld pi = 3.141592653589793238;

/**
push_back(); push(); insert(); front(); back(); begin(); end();
pop(); top(); empty(); length(); pop_back(); resize(); length();
unordered_set<int>; unordered_map<int,int>; INT_MAX; INT_MIN;
append(); to_string(); priority_queue<int>; first; second;
lower_bound(vec.begin(), vec.end(), x); upper_bound(vec.begin(), vec.end(), x);
erase(); clear(); break; continue; delete(); emplace_back();
*/

/*
lower_bound -> greater than or equal to sk
upper_bound -> greater than sk
both returns .end() if element doesn't exist
*/

/*------------------------------------------------------------------------------------------------------------*/
// use comparefn in function
// bool comparefn(int const &a, int const &b) {return a<=b; return false;}
// use MyCmp() in funtion
// struct MyCmp{bool operator()(vector<int> const &a, vector<int> const &b){return a[1]>b[1];}};
struct TreeNode{int val;TreeNode *left;TreeNode *right;TreeNode(int x=INT_MIN):val(x),left(NULL),right(NULL){}};
struct ListNode{int val;ListNode *next;ListNode(int x):val(x),next(NULL){}};
struct LimitComb{vector<vector<int>> comb;LimitComb(int n, int start, int range){vector<int> vec; function(n,start,range,vec);}
void function(int n, int start, int range, vector<int> &vec){if(start>range) return;if(n==0){comb.push_back(vec); return;}
for(start;start<=range;start++){vec.push_back(start);function(n-1,start+1,range,vec);vec.pop_back();}}};
/*------------------------------------------------------------------------------------------------------------*/












inline void TestCase(){
  
}
/*
  stuff you should look for
  int overflow, array bounds
  special cases (n=1?)
  do smth instead of nothing and stay organized
  WRITE STUFF DOWN
  DON'T GET STUCK ON ONE APPROACH
*/




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // std::this_thread::sleep_for(std::chrono::seconds(5));

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    clock_t tStatrt = clock();
    #endif

    ll tc=1;
    cin>>tc;
    for(ll i=1; i<=tc; i++)
    {
      // cout<<"Case #"<< i << ": ";
      cout<<fixed<<setprecision(3);
      TestCase();
    }

    #ifndef ONLINE_JUDGE
    cout<<'\n';
    printf("Exexution time: %.6fs\n", (double)(clock() - tStatrt)/CLOCKS_PER_SEC);
    #endif
    return 0;
}


/**
 * file location: E:\A. C++\programs\competitive
**/

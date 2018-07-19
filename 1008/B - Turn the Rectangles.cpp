#include <iostream>
#include <cstdio>
#include <iomanip>
#include <string>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <queue>
#include <stack>
#include <cmath>
#include <bitset>
#include <unordered_set>
#include <numeric>
#include <set>
#include <list>
#include <map>

using namespace std;
#define lower_bound LB
#define upper_bound UB
#define mem(a,x) memset(a,x,sizeof(a))
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define SZ(x) ((int)(x).size())
#define IT iterator
#define test puts("OK")
#define lowbit(x) x & -x
#define PRQ priority_queue
#define PB push_back
#define gcd(a,b) _gcd(a,b)


typedef long long LL;
typedef unsigned long long uLL;
typedef pair<int,int> pii;
typedef vector<int> VI;
typedef pair<int,int> PII;
typedef vector<PII> VPII;

const LL mod=1000000007;
const double PI = acos(-1.0);
const double eps = 1e-8;
const int INF = 0x3f3f3f3f;
const int maxn = 1e5 + 5;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/Users/luodian/Desktop/B.txt","r",stdin);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int rects[maxn][2];
	int n;
	vector<int> ar;
	while(cin>>n)
	{
		mem(rects,0);
		ar.clear();
		for (int i = 0; i < n; ++i)
		{
			cin>>rects[i][0]>>rects[i][1];
		}
		bool flag = true;
		// int first_value = max(rects[0][0],rects[0][1]);
		int previous = max(rects[0][0],rects[0][1]);
		for (int i = 1; i < n; ++i)
		{
			if (max(rects[i][0],rects[i][1]) <= previous)
			{
				previous = max(rects[i][0],rects[i][1]);
				flag = true;
			}
			else if (min(rects[i][0],rects[i][1]) <= previous)
			{
				previous = min(rects[i][0],rects[i][1]);
				flag = true;
			}
			else
			{
				flag = false;
				break;
			}
		}
		if (flag)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
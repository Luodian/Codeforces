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

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/Users/luodian/Desktop/D.txt","r",stdin);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string s;
	while(cin>>s)
	{
		vector<int> f(s.size() + 1);
		vector<int> suf(3,-1);
		f[0] = 0;
		suf[0] = 0;
		int res = 0;
		for (int i = 1; i <= s.size(); ++i)
		{
			res = (res + s[i-1] - '0') % 3;
			f[i] = f[i-1];
			if (suf[res] != -1)
			{
				f[i] = max(f[i], f[suf[res]] + 1);
			}
			suf[res] = i;
		}
		cout<<f[s.size()]<<endl;
	}
	return 0;
}
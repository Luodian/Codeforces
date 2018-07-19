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
		freopen("/Users/luodian/Desktop/E.txt","r",stdin);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m;
	vector<int> ar;
	map<int,int> mp;
	while(cin>>n>>m)
	{
		ar.clear();
		ar.resize(n);
		mp.clear();
		int cnt = 0;
		int pos = 0;
		long long ans = 0;
		for (int i = 0; i < n; ++i)
		{
			cin>>ar[i];
			if (ar[i] == m)
			{
				pos = i;
			}
		}
		// cout<<pos<<endl;
		for (int i = pos; i < n; ++i)
		{
			if (ar[i] > m)
			{
				cnt ++;
			}
			if (ar[i] < m)
			{
				cnt --;
			}
			mp[cnt] += 1;
		}
		//cnt数值说明了m右边的数,比m大的减去比m小的数的个数.
		cnt = 0;
		for (int i = pos; i >= 0; --i)
		{
			if (ar[i] > m)
			{
				cnt --;
			}
			if (ar[i] < m)
			{
				cnt ++;
			}
			ans += (mp[cnt]);
			ans += (mp[1-cnt]);
		}
		// mp[0] = 1, mp[1] = 1, mp[2] = 1
		// 1 + 
		// 3 4 5 6
		// for (auto &v : mp)
		// {
		// 	cout<<v.first<<" "<<v.second<<endl;
		// }
		cout<<ans<<endl;
	}
	return 0;
}
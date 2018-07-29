#include<iostream>
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
#define mem(a, x) memset(a,x,sizeof(a))
#define rep(i, a, n) for (int i=a;i<n;i++)
#define per(i, a, n) for (int i=n-1;i>=a;i--)
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define SZ(x) ((int)(x).size())
#define IT iterator
#define test puts("OK")
#define lowbit(x) x & -x
#define PRQ priority_queue
#define PB push_back
#define gcd(a, b) _gcd(a,b)

typedef long long LL;
typedef unsigned long long uLL;
typedef pair<int, int> pii;
typedef vector<int> VI;
typedef pair<int, int> PII;
typedef vector<PII> VPII;

const LL mod = 1000000007;
const double PI = acos (-1.0);
const double eps = 1e-8;
const int INF = 0x3f3f3f3f;

void swap (string &str, int i, int j)
{
	char value = str[i];
	str[i] = str[j];
	str[j] = value;
}

int main ()
{
#ifndef ONLINE_JUDGE
	freopen ("/Users/luodian/Desktop/B.txt", "r", stdin);
#endif
	ios::sync_with_stdio (false);
	cin.tie (nullptr);
	cout.tie (nullptr);
	string str;
	string ret = "1001";
	while (cin >> str)
	{
		for (int i = 0; i < str.size (); ++i)
		{
			if (str[i] == '2')
			{
				int last_swp = i;
				for (int j = i + 1; j < str.size () && (str[j] == '1' || str[j] == '2'); ++j)
				{
					if (str[last_swp] == '1')
					{
					
					}
				}
			}
			if (str[i] == '1')
			{
				int last_swp = i;
				for (int j = i + 1; j < str.size () && (str[j] == '0' || str[j] == '1'); ++j)
				{
					last_swp = j;
				}
				if (str[i] != str[last_swp])
				{
					swap(str,i,last_swp);
				}
				
				int pre_swp = i;
				for (int j = i - 1; j >= 0 && str[j] == '2'; --j)
				{
					pre_swp = j;
				}
				if (str[i] != str[last_swp])
				{
					swap(str,i,pre_swp);
				}
			}
		}
		cout << str << endl;
	}
	return 0;
}
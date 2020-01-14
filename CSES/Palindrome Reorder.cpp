#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")

#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vii;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

#define FOR(i,a,b) for (int i = a; i < b; i++)
#define F0R(i,a) for (int i = 0; i < a; i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i>=0; i--)
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
#define f first
#define s second 
#define newl '\n'
#define mp make_pair



string str;
map<char, string> cmap;
vi odds;

int main(){
   // ios::sync_with_stdio(0);
   // cin.tie(0);

//	ifstream cin("/Users/konwoo/input.txt");
//	ofstream cout("/Users/konwoo/output.txt");

	cin >> str;
	int n = str.length();
	F0R(i,n){
		cmap[str[i]] += str[i];
	}
	int ocnt = 0;
	string ans = "";
	for (auto& a : cmap){
		if ((int)(a.s).length() % 2 == 1){
			ocnt++;
			odds.pb(a.f);
		}
		else{
			ans += (a.s).substr(0, ((int) (a.s).length())/2);
		}
	}
	if (ocnt > 1) return cout << "NO SOLUTION" << newl, 0;
	if (ocnt == 1){
		ans += ((cmap[odds[0]]).substr(0, ((int) (cmap[odds[0]]).length())/2));
	}
	string tans = ans;
	reverse(tans.begin(), tans.end());
	if (ocnt == 1) ans += odds[0];
	ans += tans;
	cout << ans << newl;



	












    return 0;
}
#include <bits/stdc++.h>

using namespace std;
static const int maxn = 1000000;
typedef long long ll;
int main(){
	ios::sync_with_stdio(false);
	int n,m;
	vector<int> a,b;
	ll ans = 1000000000000000001;//1e18+1
	cin >> n >> m;
	a.resize(n);b.resize(m);
	for(int i=0;i<n;i++)
		cin >> a[i];
	for(int i=0;i<m;i++)
		cin >> b[i];
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	ans1 = min(max(*(a.begin())*(*b.begin()),*(a.begin())*(*(b.end()-1))),
	max(*(a.end()-1)*(*(b.end()-1)),*(a.end()-1)*(*b.begin())));
	cout << ans << '\n';
	return 0;
}

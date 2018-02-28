#include <bits/stdc++.h>

using namespace std;

#define fi(n) for(int i=0;i<(n);i++)
#define fj(n) for(int j=0;i<(n);j++)

static const int maxn = 1000000;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
	int n,f,ss;
	cin >> n;
	vector<int> s(n+1,0),a(n,0);
	fi(n)
		cin >> a[i];
	cin >> ss >> f;
	s[0] = 0;
	for(int i=1;i<=n;i++)
		s[i] = s[i-1] + a[i-1];
	int max_sum = 0, ans = 0;
	for(int i=1;i<=n;i++){
		int cur_sum = 0;
		int d1=ss-i+1,d2=f-i;
		if(d1 <= 0) d1 = n + d1;
		if(d2 <= 0) d2 = n + d2;
		if(d1 < d2)
			cur_sum = s[d2] - s[d1-1];
		else cur_sum = s[n] - s[d1-1] + s[d2];
		if(cur_sum > max_sum){
			ans = i;
			max_sum = cur_sum;
		}
	}
	cout << ans << '\n';
	return 0;
}

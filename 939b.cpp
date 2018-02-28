#include <bits/stdc++.h>

using namespace std;

#define fi(n) for(int i=0;i<(n);i++)
#define fj(n) for(int j=0;i<(n);j++)

static const int maxn = 1000000;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
	ll n;
	int k, num=0;
	ll old_mod = 1e18+1;
	ll amount=0;
	cin >> n >> k;
	fi(k){
		ll a;
		cin >> a;
		ll cur_amount = n/a;
		ll mod = n % a;
		if(mod < old_mod){
			old_mod = mod;
			amount = cur_amount;
			num = i+1;
		}
	}
	cout << num << " " << amount << '\n';
	return 0;
}

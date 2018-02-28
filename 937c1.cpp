#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

long long suf(long long a, long long b){
	if(a%b==0)
		return a/b;
	else return a/b+1;
}
ll pod(ll a, ll b){
	if(a%b==0)
		return a/b;
	else return (a-a%b)/b;
}
int main(){
	long long k,d,t,steps = 0, cook = 0, period = 0, carry = 0;
	long double ans = 0;
	cin >> k >> d >> t;
	if(t < k || k % d == 0)
		return cout << t << '\n', 0;
	if(k <= d)
		period = d;
	else
		period = suf(k,d) * d;
	cook = period + k;//number of parts of a chicken being cooked by one period
	steps = pod(2*t,cook);
	carry = 2*t - steps * cook;
	if(carry <= 2*k)
		ans = steps * period + (long double)carry/2.0;
	else
		ans = steps * period  + carry - k;
	cout << fixed << setprecision(10) <<  ans << '\n';
	return 0;

}

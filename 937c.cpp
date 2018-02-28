#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
static const double eps = 1e-8;

double check(double L, double R, double speed, double level, double &ans){
		double l = L, r = R;
		while(abs(r-l) > eps){
			double m = (l+r)/2;
			double cur = level + (m-L)/speed;
			//cout << m << " " << cur << endl;
			if(cur > 1)
				r = m;
			else
				l = m;
		}
		ans = (l+r)/2.0;
}

int main(){
	long long k,d,t,steps = 0, y = 0;
	double ans = 0;
	cin >> k >> d >> t;
	if(t < k || k % d == 0)
		return cout << t << '\n', 0;
	y = k/d + 1;
	steps = 2*t/(d*y+k) + 1;
	double level1 = (double)(steps-1)/(double)(t*2.0)*(double)(d*y+k);
	double level2 = level1 + (double)k/(double)t;
	double time1 = (double)(steps-1)*(double)(d*y);
	double time2 = time1 + (double)k;
	double time3 = (double)(steps)*(double)(d*y);
	//cout << level << " " << level2 << " " << time1 << " " << time2 << '\n';
	if(level2 > 1.0)
		check(time1, time2,(double) t, level1, ans);
	else
		check(time2, time3, level2, (double)2*t, ans);
	cout << fixed << setprecision(11) << ans << '\n';
	return 0;

}

#include <vector>
#include <string>
#include <iostream>

using namespace std;

#define fi(n) for(int i=0;i<(n);i++)
	
int main(){
	
	int n,k;
	cin >> n >> k;
	vector<int>  a(n,0);
	vector<long long> t(n,0);
	fi(n)
		cin >> a[i];
	t[0] = min(n,k+1);
	for(int i=1;i<n;i++){
		if(a[i] == 0)
			t[i] = 1 + min(i+k,n-1) - i  + min(i,k);
		else{
			int c = a[i] - 1;
			int delta = i - c -1;
			if(delta >= 2*k)
				t[i] = t[c] + k + 1  + min(i+k,n-1)-i;
			else
				t[i] = t[c] + min(i +k, n-1) - min(c+k,n-1);
		}
	}
	fi(n)
		cout << t[i] << " ";
	cout << '\n';
	return 0;
}
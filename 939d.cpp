#include <bits/stdc++.h>

using namespace std;

#define fi(n) for(int i=0;i<(n);i++)
#define fj(n) for(int j=0;i<(n);j++)

static const int maxn = 1000000;

struct dsu{
	vector<int> p,size;
	dsu(int n=100){
		p = vector<int>(n,-1);
		size = vector<int>(n,0);
	}
	void add(int v){
		p[v] = v;
		size[v] = 1;
	}
	bool exist(int a){
		return (!(p[a] == -1));
	}
	int find(int v){return (p[v] == v)?v : p[v] = find(p[v]);}
	bool union_s(int a,int b){
		a = find(a);
		b = find(b);
		if(a == b)
			return 0;
		if(size[a] < size[b])
			swap(a,b);
		size[a] += size[b];
		p[b] = a;
		return 1;
	}
};
int main(){
	ios::sync_with_stdio(false);
	int n=0,ans=0;
	string a,b;
	vector<pair<char,char> > x;
	dsu s;
	cin >> n;
	cin >> a >> b;
	fi(n){
		if(a[i] != b[i]){
			int c1 = a[i] - 'a';
			int c2 = b[i] - 'a';
			if(!s.exist(c1)) s.add(c1);
			if(!s.exist(c2)) s.add(c2);
			if(s.union_s(c1,c2)){
				ans++;
				x.push_back(make_pair(a[i],b[i]));
			}
		}
	}
	cout << ans << '\n';
	fi(ans)
		cout << x[i].first << ' ' << x[i].second << '\n';
	return 0;
}

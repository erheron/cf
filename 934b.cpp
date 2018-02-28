#include <bits/stdc++.h>

using namespace std;
static const int maxn = 1000000;
vector<char> used(maxn,false);
void dfs(int v){
	if(!used[v]){
		used[v] = true;
		for(size_t i=0;i<g[v].size();i++){
			int to = g[v][i];
			dfs(to);
		}
	}
	return;
}

void bfs(int start){
	queue<int> q;
	vector<int> d;
	q.push(start);
	used[start] = true;
	while(!q.empty()){

	}
}
int main(){

}

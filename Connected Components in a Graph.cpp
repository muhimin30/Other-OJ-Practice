//Muhimin
#include<bits/stdc++.h>
using namespace std;

#define endl '\n';

const int N = 1e5;
vector<int> num[N];
vector<bool> vis(N);

vector<vector<int>> Connected;

vector<int> temp;

void dfs(int vartex){

	temp.push_back(vartex);
	vis[vartex] = true;

	for(auto child: num[vartex]){
		if(vis[child]) continue;

		dfs(child);
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, m; cin >> n >> m;

	for(int i = 0; i < m; i++){
		int a, b; cin >> a >> b;
		num[a].push_back(b);
		num[b].push_back(a);
	}

	int cnt = 0;

	for(int i = 1; i <= n; i++){
		if(vis[i]) continue;

		temp.clear();
		dfs(i);
		Connected.push_back(temp);
		cnt++;
	}

	cout << Connected.size() << endl;

	// for(auto a: Connected){
	// 	for(auto b: a) cout << b << ' ';
	// 	cout << endl;
	// }

}
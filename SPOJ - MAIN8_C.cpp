//Muhimin
#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';
int n, k;
bool check(int m, vector<int> &num){
	int cnt = 0;

	for(int i = 0; i < n; i++){
		//cout << num[i] << endl;
		int temp = num[i] / m;
		cnt += temp;
	}

	return (cnt >= k);
}

int main()
{
	bismillah();
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		vector<int> num(n);
		for(int i = 0; i < n; i++){
			cin >> num[i];
		}

		int l = 1, r = 1e9;
		int ans = 0;
		while(l <= r){
			int mid = l + (r - l) / 2;

			if(check(mid, num)){
				ans = mid;
				l = mid + 1;
			}
			else{
				r = mid - 1;
			}
		}


		cout << ans << endl;
	}

	return 0;
}

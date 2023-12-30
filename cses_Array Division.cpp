#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';
int n, k; 
vector<int> num;

bool fun(ll m){
	ll temp = 0;
	int k_cnt = 1;
	for(int i = 0; i <= n; i++){
		if(num[i] > m) return false;
		temp += 1LL * num[i];
		
		
		if(temp > m){			
			temp = 1LL * num[i];
			k_cnt++;
		}
	}

	return (k_cnt <= k);
	
}

int main()
{
	bismillah();

	cin >> n >> k;
	for(int i = 0; i < n; i++){
		int temp ;cin >> temp;
		num.push_back(temp);
	}
	num.push_back(0);

	ll l = 0, r = 2e14, ans = 0;

	while(l <= r){
		ll mid = (l + r) / 2;

		if(fun(mid)){
			ans = mid;
			r = mid - 1;
		}
		else{
			l = mid + 1;

		}
	}

	cout << ans << endl;


	return 0;
}

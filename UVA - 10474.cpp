//Muhimin
#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

int n, k;

int main()
{
	bismillah();
	int tc = 1;
	while(1){
		cin >> n >> k;
		if(n == 0 && k == 0) break;
		vector<int> num(n + 1);

		for(int i = 1; i <= n; i++){
			cin >> num[i];
		}

		sort(num.begin(), num.end());
		cout << "CASE# " << tc << ':' << endl;

		while(k--){
			int temp; cin >> temp;

			int l = 1, r = n;
			int ans = 0;

			while(l <= r){
				int mid = l + (r - l) / 2;

				if(num[mid] >= temp){
					ans = mid;
					r = mid - 1;
				}
				else{
					l = mid + 1;
				}
			}

			if(num[ans] == temp){
				cout << temp << " found at " << ans << endl;
			}
			else{
				cout << temp << " not found" << endl;
			}
		}

		tc++;
	}

	return 0;
}

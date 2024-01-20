//Muhimin
#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';
int n, q, a, b;
int main()
{
	bismillah();
	int t; cin >> t;
	int tc = 1;
	while(t--){
		cin >> n >> q;
		vector<int> num;
		num.push_back(-1);
		for(int i = 0; i < n; i++){
			int temp; cin >> temp;
			num.push_back(temp);
		}
		//num.push_back(num[n] + 1);
		cout << "Case " << tc << ':' << endl;

		while(q--){
			cin >> a >> b;

			int l = 0, r = n;

			int left_ans = 0, right_ans = n;
			while(l <= r){
				int mid = l + (r - l) / 2;

				if(num[mid] < a){
					left_ans = mid;
					l = mid + 1;
				}
				else{
					r = mid - 1;
				}
			}

			l = 0, r = n;
			while(l <= r){
				int mid = l + (r - l) / 2;

				if(num[mid] <= b){
					right_ans = mid;
					l = mid + 1;
				}
				else{
					r = mid - 1;
				}
			}

			cout << right_ans - left_ans << endl;

		}

		tc++;
	}

	return 0;
}

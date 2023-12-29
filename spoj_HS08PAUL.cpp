#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

const int sz = 1e7 + 23;
int mx = 1e7;
bitset<sz> is_prime;
bitset<sz> ans;
 
void prime(){
	for(int i = 3; i <= mx; i += 2){
		is_prime[i] = 1;
	}
 
	is_prime[2] = 1;
	for(int i = 3; i <= sqrt(mx); i += 2){
		for(int j = i * i; j <= mx; j += i){
			is_prime[j] = 0;
		}
	}
}
vector<int> main_ans(sz);
int main()
{
	bismillah();
	prime();

	int val = 0;
	for(int y = 0; y < 60; y++){
		for(int x = 0; x < 3200; x++){
			int ind = (x * x) + (y * y * y * y);
			if(ind <= mx){
				if(is_prime[(x * x) + (y * y * y * y)]){
					ans[(x * x) + (y * y * y * y)] = 1;
				}
			}
			
		}
	}

	int temp = 0;
	for(int i = 0; i < sz; i++){
		temp += ans[i];

		main_ans[i] = temp;
	}



	int t; cin >> t;
	while(t--){
		int n; cin >> n;

		cout << main_ans[n] << endl;
	}
	

	return 0;
}

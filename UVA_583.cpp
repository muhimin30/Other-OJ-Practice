#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

const int sz = 1e5 + 23;
int mx = 1e5;
bitset<sz> is_prime;

vector<int> primes;
 
void prime(){
	for(int i = 3; i <= mx; i += 2){
		is_prime[i] = 1;
	}
	for(int i = 3; i <= sqrt(mx); i += 2){
		for(int j = i * i; j <= mx; j += i){
			is_prime[j] = 0;
		}
	}

	primes.push_back(2);

	for(int i = 3; i <= mx; i++){
		if(is_prime[i]){
			primes.push_back(i);
		}
	}
 
}

vector<int> primefac(int n){
	vector<int> ans;

	for(auto a: primes){

		if(a * a > n) break;

		if(n % a == 0){
			while(n % a == 0){
				ans.push_back(a);
				n /= a;
			}
		}
	}

	if(n > 1){
		ans.push_back(n);
	}

	//for(auto a: ans) cout << a << endl;

	return ans;
}

int main()
{
	bismillah();		
	prime();
	int n;
	while(cin >> n){

		if(n == 0) break;
		bool neg = false;
		cout << n << " = ";
		if(n < 0){
			neg = true;
			n *= -1;
		}
		vector<int> ans = primefac(n);

		if(neg){
			ans.insert(ans.begin(), -1);
		}



		cout << ans[0];

		for(int i = 1; i < ans.size(); i++) cout << " x " << ans[i];
		cout << endl;
	}

	return 0;
}

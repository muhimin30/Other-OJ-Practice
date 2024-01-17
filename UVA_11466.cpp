#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

const int sz = 1e7 + 23;
int mx = 1e7;
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

vector<int> primefac(ll n){
	vector<int> ans;

	for(auto a: primes){

		if(1LL * a * a > n) break;

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
	return ans;
}

int main()
{
	bismillah();		
	prime();
	ll n;
	while(cin >> n){

		if(n == 0) break;

		vector<int> ans = primefac(n);

		cout << ((ans.back() == n) ? -1 : ans.back()) << endl;
	}

	return 0;
}

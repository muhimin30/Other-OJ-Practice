#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

int main()
{
	bismillah();

	int n;
	unordered_map<int, int> num;
	vector<int> element;
	while(cin >> n){
		if(num[n] == 0){
			element.push_back(n);
		}
		num[n]++;
	}

	for(auto a: element) cout << a << ' ' << num[a] << endl;;

	return 0;
}

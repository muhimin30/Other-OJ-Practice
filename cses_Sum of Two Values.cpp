//Muhimin
#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);

int main()
{
	bismillah();
	int n, k; cin >> n >> k;

	map<int, int> freq;
	map<int, int> ind;
	vector<int> num(n + 1);
	for(int i = 1; i <= n; i++){
		cin >> num[i];

		freq[num[i]]++;

		ind[num[i]] = i;	
	}

	for(int i = 1; i <= n; i++){
		int temp = k - num[i];

		if(freq[temp] >= 1){
			if(ind[temp] != i){
				cout << i << ' ' << ind[temp] << endl;
				return 0;
			}
		}
	}

	cout << "IMPOSSIBLE" << '\n';

	return 0;
}

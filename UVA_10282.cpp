#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

int main()
{
	bismillah();

	map<string, string> m;

	string s, s1, s2;
	char c;

	while(getline(cin, s)){
		if(s.empty()) break;

		//cout << s << endl;
		stringstream ss(s);
		while(1){
			ss >> s1 >> s2;
			break;
		}
		m[s2] = s1;
	}

	//for(auto a: m) cout << a.first << ' ' << a.second << endl;

	string ans;

	while(cin >> ans){
		if(m[ans].size() > 0){
			cout << m[ans] << endl;
		}
		else{
			cout << "eh" << endl;
		}
	}

	return 0;
}

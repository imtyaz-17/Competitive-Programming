#include <bits/stdc++.h>
using namespace std;

int main(){
	unordered_set<string>u_s;
	int n;
	cin>>n;

	for (int i = 0; i < n; ++i)
	{
		string str;
		cin>>str;

		u_s.insert(str); // O(1)
	}

	int q;
	cin>>q;
	while(q--){
		string str;
		if (u_s.find(str)==u_s.end()) // O(1)
		{
			cout<<"no"<<endl
		}
		else{
			cout<<"yes"<<endl
		}
	}

	return 0;
}
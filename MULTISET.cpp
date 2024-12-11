#include <bits/stdc++.h>
using namespace std;

int main(){
	multiset<string>m_s;

	m_s.insert("abc"); // O(log(n))
	m_s.insert("abc");
	m_s.insert("cbc");

	m_s.erase("abc"); // O(log(n))

	for (auto value:m_s)
	{
		cout<<value<<endl;
	}

	return 0;
}
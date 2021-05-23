#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,l;
	cin>>n;
	string s = "";
	for(int i=0;i<n;i++)
	{
		cin>>s;
		l=s.length();
		if(l>10)
		{cout<<s[0];
		cout<<l-2;
		cout<<s[l-1];
		cout<<"\n";
		}
		else cout<<s+"\n";
	}
	return 0;
}
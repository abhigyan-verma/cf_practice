#include <bits/stdc++.h>
using namespace std;

int main() {
	int m,n,temp,c=0;
	scanf("%d",&m);
	scanf("%d",&n);
	if(n>m)
	{
		temp=m;
		m=n;
		n=temp;
	}
	if(n==1)
	{
		c=m/2;
	}
	else 
	{
		if(n%2==0)
		{
			c=(m*n)/2;
		}
		else
		{
			c=(m*(n-1))/2 + m/2;
		}
	}
	cout<<c;
	return 0;
}
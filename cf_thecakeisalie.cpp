#include <bits/stdc++.h>
using namespace std;

int main() {
	int c,l=0,arr[3],n,m;
	scanf("%d",&c);
	for(int i=0;i<c;i++)
	{
		for(int k=0;k<=2;k++)
		scanf("%d",&arr[k]);
		if(arr[0]<arr[1])
		{
			n=arr[1];
			m=arr[0];
		}
		else
		{
			n=arr[0];
			m=arr[1];
		}
		l=(n-m) + (m-1)*(m+1);
		if(l==arr[2]) cout<<"YES\n";
		else cout<<"NO\n";
	}
	
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k,c=0;
	scanf("%d",&n);
	scanf("%d",&k);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]>0)
		{
			if(k-1<i)
			{
				if(arr[k-1]==arr[i]) c++;
				else break;
			}
			if(k-1>=i)
			{
				c++;
			}
		}
		else break;
	}
	cout<<c;
	return 0;
}
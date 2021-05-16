#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,l=0,arr[3];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<=2;k++)
		scanf("%d",&arr[k]);
		if(accumulate(arr,arr+3,0) >=2) l+=1;
	}
	cout<<l;
	return 0;
}
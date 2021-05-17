#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cout<<1<<" ";
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			cout<<i<<" "<<n/i<<" ";
		}
	}
	cout<<n;
	return 0;
}

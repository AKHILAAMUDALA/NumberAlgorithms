#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int fac=1;
	for(int i=2;i<=n;i++)//upto n=10 it satisfies
	{
		fac=fac*i;
	}
	int count=0;
	while(fac%10==0)
	{
		count++;
		fac=fac/10;
	}
	cout<<count;
	return 0;
}


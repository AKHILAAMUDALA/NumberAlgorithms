#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,c=0;
	cin>>n;
	for(int i=2;i<=n/2+1;i++)//for(i=2;i<=n-1;i++)orfor(i=2;i<=sqrt(n+1);i++)
	{
		if(n%i==0)
		{
			c++;
			cout<<"not prime";
			break;
		}
		
	}
	if(c==0)
	{
		cout<<"Prime";
	}
	return 0;
}


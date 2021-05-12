#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=2456;
	int r,res=0;
	while(n)
	{
		r=n%10;
		n=n/10;
		res=res*10+r;
	}
	cout<<res;
	return 0;
}


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=1234;
	int r,oc=0,ec=0;
	while(n)
	{	r=n%10;
		n=n/10;
		
	
		if(r%2==0)
		{
			ec++;
		}
		else
		{
	    	oc++;
		}
	}
	cout<<ec<<oc;
	return 0;
}

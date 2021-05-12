#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=1359;
	int r,oc=0,ec=0,dc=0;
	while(n)
	{	r=n%10;
		n=n/10;
		dc++;
	
		if(r%2==0){
			ec++;
		}
		else
		{
	    	oc++;
		}	
    }
	if(oc==dc)
	{
		cout<<"strongly odd";
	}
	else if(ec==dc)
	{
		cout<<"strongly even";
	}
	else
	{
		cout<<"mixed";
	}
}

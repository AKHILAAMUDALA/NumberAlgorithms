#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,num;
	int r,res=0;
	cout<<"enter num:";
	cin>>num;
	n=num;
	while(n)
	{
		r=n%10;
		n=n/10;
		res=res*10+r;
	}
	if(res==num)
	{
		cout<<"palindrome";
	}
	else
	{
		cout<<"not a palindrome";
	}
		
	return 0;
}


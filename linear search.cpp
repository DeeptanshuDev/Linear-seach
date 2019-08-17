#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n],i,c=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			if(a[i]==k)
			{
				c=i+1;
			}	
		}
		if(c>0)
		{
			cout<<c;
		}
		else
		{cout<<-1;
		}
		
		
	}
}

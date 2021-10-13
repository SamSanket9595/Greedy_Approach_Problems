#include<iostream>
using namespace std;

int main()
{
	int n=0,i=0;
	cout<<"Enter no of elements: ";
	cin>>n;
	
	int arr[n];
	
	cout<<endl<<"Enter elements:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	int max_min=INT_MIN;
	int max_prod=1;
	int zero_cnt=0;
	int negative_cnt=0;
	
	for(i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			zero_cnt++;
			continue;
		}
		else if(arr[i]<0)
		{
			negative_cnt++;
			max_min=max(max_min,arr[i]);
		}
		max_prod=max_prod*arr[i];
	}
	
	if(zero_cnt==n)
	{
		cout<<"0";
		return 0;
	}
	
	else if(negative_cnt + zero_cnt == n)
	{
		cout<<"0";
		return 0;
	}
	
	else if(negative_cnt%2!=0)
	{
		max_prod=max_prod/max_min;
	}
	cout<<"Max Product is: "<<max_prod;
	
	return 0;
		
}

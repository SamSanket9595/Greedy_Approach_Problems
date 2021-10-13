#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n=0,rupees=0,i=0,maxStocks=0;
	int totalStockVal=0;
	
	cout<<"enter no of stocks";
	cin>>n;
	
	int stocks[n];
	cout<<endl<<"Enter the value of stocks: "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>stocks[i];
	}
	
	cout<<"Enter total rupees you have: ";
	cin>>rupees;
	
	vector<pair<int,int> >  v;
	
	for(i=0;i<n;i++)
	{
		v.push_back({stocks[i],i+1});
	}
	
	sort(v.begin(),v.end());
	
	int stkValue=0,noofShares=0,temp=0;
	for(i=0;i<n;i++)
	{
		stkValue=v[i].first;
		noofShares=v[i].second;
		
		totalStockVal=stkValue*noofShares;
		
		if(totalStockVal<=rupees)
		{
			maxStocks=maxStocks+noofShares;
			rupees=rupees-totalStockVal;
		}
		else
		{
			temp=rupees/stkValue;
			maxStocks=maxStocks+temp;
			rupees=rupees-stkValue;
		}
		
		
	}
	
	cout<<endl<<"Max Stocks you can buy is:  "<<maxStocks;
	
	return 0;
}

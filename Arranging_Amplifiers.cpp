///////////////////////////////////////////////////////////////
//	Arranging Amplifiers
//
//	We need to find the correct sequence of the array elements
//   such that the output of the power of each variable till
//	  end is maximum.
//
//		Ip: 			  |
//		  1				  |				1
//		  3				  |				5
//		4  6   5		  |				3	1	2	1	1
//						  |
//		Op:				  |				1	1	1	2	3
//		  6	 5	4     	  |
//
//	We keep all 1's in the starting because if they are placed
//	 at last then they will make the result as 1 which will be 
//		minimum value and we need to find the maximum value here.
//		using the power
//
//		One exceptional case is of 3 and 2 and it is only when there
//		are no other elements than 1's and only one 3 and one 2
//
/////////////////////////////////////////////////////////////////







#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int no_of_testcases=0;
	int i=0,n=0;
	int one_cnt=0;
	
	cout<<"Enter no of testcases:  ";
	cin>>no_of_testcases;
	
	while(no_of_testcases!=0)
	{
	
	cout<<endl<<"Enter no of variables:  ";
	cin>>n;
	
	int arr[n];
	
	cout<<endl<<"Enter the variables "<<endl;
	
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]==1)
		{
			one_cnt++;
		}
	}
	
	sort(arr,arr+n,greater<int>());
	
	for(i=0;i<one_cnt;i++)
	{
		cout<<"1 ";
	}
	
	if(n - one_cnt==2 and arr[0]==3 and arr[1]==2)
	{
		cout<<"2  3";
	}
	else
	{
		for(i=0;i<n-one_cnt;i++)
		{
			cout<<arr[i]<<" ";
		}
	}
	
	 no_of_testcases--;
	}
}

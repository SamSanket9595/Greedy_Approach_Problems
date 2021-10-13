/////////////////////////////////////////////////////////////////////
//
//	Find the maximum equal sum from the given 3 stacks
//
//	Given three stacks of the positive numbers, the task is 
//   to find the possible equal maximum sum of the stacks with 
//   the removal of top elements allowed. 
//	  Stacks are represented as an array, and the first index of 
//    the array represent the top element of the stack
//
//	I/p:	
//	5	3	4	//size of stacks
//	3	2	1	1	1		//elements of stack1
//	4	3	2				//elements of stack2
//	1	1	4	1			//elements of stack3
//
//	O/p:
//		5
////////////////////////////////////////////////////////////////////


#include <iostream>
using namespace std;

int main() {
	
	int n1=0,n2=0,n3=0;
	int i=0,equalsum=0;
	int sum1=0,sum2=0,sum3=0;
	int top1=0,top2=0,top3=0;
	
	cin>>n1;
	cin>>n2;
	cin>>n3;
	
	int arr1[n1];
	int arr2[n2];
	int arr3[n3];
	
	for(i=0;i<n1;i++)//get stack1 elements
	{
	    cin>>arr1[i];
	    sum1=sum1+arr1[i];
	}
	
	for(i=0;i<n2;i++)//get stack2 elements
	{
	    cin>>arr2[i];
	    sum2=sum2+arr2[i];
	}
	
	for(i=0;i<n3;i++)//get stack3 elements
	{
	 cin>>arr3[i];   
	 sum3=sum3+arr3[i];
	}
	
	while(true)
	{
		//break if the max sum of all stacks is equal
	    if(sum1==sum2 and sum2==sum3)
	    {
	        equalsum=sum1;
	        break;
	    }
	    
	    //break if any top of stack reaches the end
	    else if(top1==n1 or top2==n2 or top3==n3)
	    {
	        equalsum=0;
	        break;
	    }
	    
	    //if sum of stack1 is greater than or equal than other 2 stacks
	    //then substract the top element from the stack1 
	    else if(sum1>=sum2 and sum1>=sum3)
	    {
	        sum1=sum1-arr1[top1];
	        top1++;
	    }
	    
	    
	    //if sum of stack2 is greater than or equal than other 2 stacks
	    //then substract the top element from the stack2 
	    else if(sum2>=sum1 and sum2>=sum3)
	    {
	        sum2=sum2-arr2[top2];
	        top2++;
	    }
	    
	    
	    //if sum of stack3 is greater than or equal than other 2 stacks
	    //then substract the top element from the stack3 
	    else if(sum3>=sum1 and sum3>=sum2)
	    {
	        sum3=sum3-arr3[top3];
	        top3++;
	    }
	}
	//print the max sum
	cout<<endl<<"MaxEqual sum is:  "<<equalsum;
	
	
	return 0;
}

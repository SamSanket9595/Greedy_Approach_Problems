#include<iostream>
using namespace std;


int main()
{
	int no=0,irev=0,idigit=0;
	int j=0;
	
	printf("Enter no: ");
	scanf("%d",&no);
	
	while(no!=0)
	{
		idigit=no%10;
		irev=irev*10 + idigit;
		
		no=no/10;
	}
	
	printf("\nReverse no is: %d",irev);
	return 0;
}

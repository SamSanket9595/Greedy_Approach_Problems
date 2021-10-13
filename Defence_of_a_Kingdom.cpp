/////////////////////////////////////////////////////////////////////////
//
//	Q.Defence of a kingdom 
//	Given the towers(x,y) coordinate of a tower ,the tower can
//	  protect only the vertical and horizontal grid it is present.
//	Find the maximum unprotected grid from the given grid.
//
//	I/p:  
//	1	//No of test cases
// 15	8	3	rows,cols,no of towers
// 3	8	tower x and y coordinates
// 11	2	tower x and y coordinates
//  8	6	tower x and y coordinates
//
//  O/p:
//		12  maximum unprotected grid
//
////////////////////////////////////////////////////////////////////////


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
	int no_of_testcases=0,i=0,x=0,y=0;
	int rows=0,cols=0,towers=0;
	int max_x=0,max_y=0;
	
	cout<<"Enter no of TestCases:  ";
	cin>>no_of_testcases;
		
	while(no_of_testcases!=0)
	{
			
		vector<int> xcords;//stores all x co-ordinates of towers
		vector<int> ycords;//stores all y co-ordinates of towers
		
		xcords.push_back(0);//insert 0 at beginning
		ycords.push_back(0);//insert 0 at beginning
		
		
		cout<<endl<<"Enter the no of rows:  ";
		cin>>rows;
		
		cout<<endl<<"Enter no of Cols:  ";
		cin>>cols;
		
		cout<<endl<<"Enter no of towers:  ";
		cin>>towers;
		
		cout<<endl<<"Enter tower details:";
		for(i=0;i<towers;i++)
		{
			printf("\nEnter details of tower %d  ",i+1);
			cin>>x>>y;//get each tower coordinates
			xcords.push_back(x);//add x co-ordinate
			ycords.push_back(y);//add y co-ordinate
		}
		
		xcords.push_back(rows+1);//add the max no of rows 
		ycords.push_back(cols+1);//add the max no of cols
		
		sort(xcords.begin(),xcords.end());//sort the x co-ordinates
		sort(ycords.begin(),ycords.end());// sort the y co-ordinates
		
		
		for(i=0;i<xcords.size()-1;i++)
		{
			max_x=max(max_x,(xcords[i+1]-xcords[i]-1));//get the maxm x coordinate difference
			max_y=max(max_y,(ycords[i+1]-ycords[i])-1);//get the maxm y coordinate difference
		}
		
		cout<<"Max unprotected grid is:  "<<(max_x * max_y);//max x cordinate * max y cordinate is the answer for the max unprotected grid
	
		no_of_testcases--;
	
  }

	return 0;
}

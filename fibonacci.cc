///
///@date   2016-04-17 19:48:09
///
 
 
 
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int fun(int n)
{
	if(n==0) return 0;
	if(n==1) return 1;
	else if(n==2) return 1;
	else return fun(n-2)+fun(n-1);
}


int fun1(int n)
{
	if(n==0) return 0;
	else if(n==1) return 1;
	int i=2;
	int first=0;
	int second=1;
	int temp;
	while(i<n)
	{
		temp=second;
		second=first+second;
		first=temp;
	}
	return first+second;
}


int main()
{
	int n;
	while(cin>>n)
	{
//		cout<<fun(n)<<endl;                 //递归
		cout<<fun(n)<<endl;					//非递归算法
	}
	return 0;
}

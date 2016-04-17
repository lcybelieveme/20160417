///
///@date   2016-04-17 23:45:27
///
 
 
 
#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::abs;
int numberof1(int n)
{
	int x=abs(n);
	int temp=x;
	int count=0;
	while(x>0)
	{
		if(x%2==1) count++;
		x/=2;
	}
	if(n>0) return count;
	else
	{
		if(count==0)return 1;
		else if(temp%2==0) return 32-count;
		else
			return 33-count;
	}
}

int main()
{
	int number;
	while(cin>>number)
	{
		cout<<numberof1(number)<<endl;
	}
	return 0;
}

///
///@date   2016-04-17 19:27:36
///
 
 
 
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

class solution
{
	public:
		int reArray(vector<int> A)
		{
			int i;
			for(i=0;i<(A.size()-1);i++)
			{
				if(A[i]>A[i+1]) break;
			}
			if(i==(A.size()-1)) return A[0];
			else return A[i+1];
		}
};


int main()
{
	vector<int> A{1,2,3,4,5};
	vector<int> B{3,4,5,1,2};
	solution so;
	cout<<so.reArray(A)<<endl;
	cout<<so.reArray(B)<<endl;
	return 0;
}

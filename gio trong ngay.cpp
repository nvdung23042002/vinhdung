#include<iostream>
#include<string>
using namespace std;
int main()
{
	for(int i=0; i<24; i++)
	{
		if(i==0)
		cout <<"12 mid night"<< endl;
		else if(i<12)
		cout << i <<"am"<< endl;
		else if(i==12)
		cout << "12 noon"<< endl;
		else if(i<24)
		cout << i-12 <<"pm"<< endl;		
	}
		return 0;
}

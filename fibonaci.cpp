#include<iostream>
using namespace std;

int main()
{
	string f0="a";
	string f1="b";
	string f2;
	for(int i=1; i<4; i++)
	{
		f2=f1+f0;
		f0=f1;
		f1=f2;
	}
	cout << f2;
	return 0;
}

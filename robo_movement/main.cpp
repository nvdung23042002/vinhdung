#include<iostream>
using namespace std;
// convert directions when turning left
void convert_left(int &L, int &X,int &T, int &P)
{
	int temp=P;
	P=L;
	L=T;
	T=X;
	X= temp;
}
// convert directions when turning right
void convert_right(int &L, int &X,int &T, int &P)
{
	int temp=T;
	T=L;
	L=P;
	P=X;
	X= temp;
}
// convert the axis when it turns
void convert_axis(int &Ox, int &Oy)
{
    int temp=Ox;
    Ox=Oy;
    Oy=temp;
}
// print result
void Result(int count, int Ox, int Oy)
{
    if(count %2==0)
        cout <<Ox<<" "<<Oy;
    else
        cout <<Oy<<" "<<Ox;
}
// Main Function
int main()
{
	int n;
	cin >> n;
	char a[100];
	for(int i=0; i<n;i++)
	{
		cin >> a[i];
	}
	int L=1,X=-1,T=-1,P=1;
	int Ox=0,Oy=0;
    int count =0;
	for(int i=0; i<n; i++)
	{
    switch(a[i])
	    {
            case('l'):
                Oy=Oy+L;
                break;
            case('t'):
            {
                Ox=Ox+T;
                convert_left(L,X,T,P);
                convert_axis(Ox,Oy);
                count ++;
                break;
            }
            case('x'):
                Oy=Oy+X;
                break;
            case('p'):
            {
                Ox=Ox+P;
                convert_right(L,X,T,P);
                convert_axis(Ox,Oy);
                count ++;
                break;
            }
	    }
	}
	Result(count,Ox,Oy);
	return 0;
}

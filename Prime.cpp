#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int dem=0;
    if(n==2)
        cout <<"yes";
    if(n==3)
        cout << "yes";
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
            dem++;
    }
    if(dem==0)
        cout <<"yes";
    else
        cout <<"no";
    return 0;
}

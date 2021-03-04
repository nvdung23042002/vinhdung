#include <iostream>
#include <string>
#include<stdlib.h>
using namespace std;
// ham lay so ngay thang nam
void input(string s1,int &dd, int &mm, int &yy)
{
    char sdd[10],smm[10],syy[10];
    // get number out of string
    for(int i=0;i<2;i++)
    {
        sdd[i]=s1[i];
    }
    for(int i=3;i<5;i++)
    {
        smm[i-3]=s1[i];
    }
    for(int i=6;i<10;i++)
    {
        syy[i-6]=s1[i];
    }
    dd=atoi(sdd);
    mm=atoi(smm);
    yy=atoi(syy);
}
// kiem tra tinh dung sai cua ngay thang
bool check(int d, int m, int y)
{
    if((m==1 or m==3 or m==5 or m==7 or m==8 or m==10 or m==12) and d<=31)
        return true;
    if((m==4 or m==6 or m==9 or m==11) and d<=30)
        return true;
    if((m==2 and y%4!=0 and d<=29) or (m==2 and y%4==0 and y%100!= 0 and d<=28) or (m==2 and y%4==0 and y%100==0 and d<=29))
        return true;

    else
        return false;
}
int main()
{
    int dd, mm,yy;
    string s;
    cin >> s;
    input(s,dd,mm,yy);
    int dd1=dd, mm1=mm,yy1=yy;
    while(true)
    {
    int k;
    cin >> k;
    if(k==0)
        break;
    int t=dd+k;
    while (check(t,mm,yy)==false)
    {
        if(mm==1 or mm==3 or mm==5 or mm==7 or mm==8 or mm==10 or mm==12)
            t=t-31;
        if(mm==4 or mm==6 or mm==9 or mm==11)
            t=t-30;
        if((mm==2 and yy%4!=0) and (mm==2 and yy%4==0 and yy%100==0))
            t=t-29;
        if(mm==2 and yy%4==0 and yy%100!= 0)
            t=t-28;
        mm++;
        if(mm==13)
        {
            yy++;
            mm=1;
        }
    }
    if(mm<10)
    {
        cout <<t<<"/0"<<mm<<"/"<<yy<<endl;
    }
    else
        cout <<t<<"/"<<mm<<"/"<<yy<< endl;

    // lay lai gia tri ban dau
    dd=dd1;
    yy=yy1;
    mm=mm1;
    }
    return 0;
}

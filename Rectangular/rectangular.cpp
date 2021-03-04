#include <iostream>

using namespace std;

int main()
{
    int arr[20][20];
    for(int i=0; i<20; i++)
    {
        for(int j=0; j<20; j++)
            arr[i][j]=0;
    }
    int n;
    cin >> n;
    int b=n;
    while(n>0)
    {
        int a,b;
        cin >> a >> b;
        for (int i=19; i>19-a; i--)
        {
            for(int j=0; j< b; j++)
            {
                arr[i][j]++;
            }
        }
        n--;
    }
    int count=0;
    for(int i=0; i<20; i++)
    {
        for(int j=0; j<20; j++)
        {
            if(arr[i][j]==b)
            {
                count++;
            }
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "The Number is: " << count;
    return 0;
}

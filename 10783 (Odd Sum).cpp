#include <iostream>
using namespace std;

int main() 
{
    int t,a,b,sum;
    cin >> t;
    for(int i=0; i<t ;i++)
    {
        sum=0;
        cin>>a>>b;
        for(int j=a; j<=b; j++)
        {
            if(j%2)
            sum+=j;
        }
        cout<<"Case "<<i+1<<": "<<sum<<endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    long long int n,sum,x;
    cin>>n;
    while(n>=0)
    {
        sum=1, x=1;
        for(int i=0;i<n;i++)
        {
            sum+=x;
            x++;
        }
        cout<<sum<<endl;
        cin>>n;
    }
    return 0;
}
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,x;
    cin>>t;
    while(t--)
    {
        cin>>x;
        int c=0,n=x;
        while(x>1)
        {
            x=x/2;
            c++;
        }
        int ans=pow(2,c);
        if(n==1)
        ans=2;
        if(n==pow(2,c+1)-1)
        ans=pow(2,c+1);
        cout<<ans<<endl;
    }    
    return 0;
}

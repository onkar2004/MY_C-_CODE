#include <iostream>

using namespace std;

int main()
{
    // progeram to find raise of a to b
    int i,ans,a,b;
    cin>>a>>b;
    ans = 1;
    for(i=1;i<=b;i++){
        ans = ans*a;
    }
    cout<<"\nans :"<<ans<<"\nthanks"<<endl;

    // factorial
    int n;
    cin>>n;
    int fact = 1;
    for(int i = 1; i<=n;i++)
    {
         fact = fact*i;
    }
    cout<<"\nfact"<<fact<<"\nthanks"<<endl;

}
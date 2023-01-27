#include <iostream>

using namespace std;

int main()
{       // program to find sum of series {1-2+3-4+5.......n}
    cout<<"enter number"<<endl;
    int n,i;
    cin>>n;
    int ans = 1;
    for(i=1; i<=n;i++)
    {
        if(i % 2 ==0)
        {
            ans = ans -i;
        }
        else{
            ans = ans +i;
        }
    }
    cout<<ans<<endl;
    cout<<"thanks"<<endl;
    
}
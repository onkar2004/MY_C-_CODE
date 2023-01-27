#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter binary number : "<<endl;
    cin>>n;
    int power =1;
    int ans = 0;

    while(n>0)
    {
        int lastdigit = n%10;
        ans = ans + lastdigit*power;
        n = n/10;
        power = power*2;
    }
    cout<<ans<<endl;

}
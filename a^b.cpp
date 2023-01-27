#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Enter base : "<<endl;
    cin>>a;
    cout<<"Enter power : "<<endl;
    cin>>b;
    int result = 1;

    for(int i =1;i<=b;i++)
    {
        result = result *a;

    }
    cout<<result<<endl;
    cout<<"Thanks"<<endl;
}
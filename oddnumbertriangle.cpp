#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter number : "<<endl;                          
    cin>>n;
    int number = 1;
    // loop for rows
    for(int i=1;i<=n;i++)
    {
        // loop for columns
        // print spaces
        for(int j =1;j<=(n-i);j++)
        {
            cout<<" "<<" ";
        }
        // print star
        for(int j =1; j<=(2*i-1);j++)
        {
            cout<<number<<" ";
            number = number + 2;            // for odd number
        }
        cout<<endl;
    }
}
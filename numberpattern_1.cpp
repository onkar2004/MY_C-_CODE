#include<iostream>

using namespace std;

int main()
{
    int n,m;
    cout<<"Enter number of rows : "<<endl;
    cin>>n;
    cout<<"Enter number of columns : "<<endl;
    cin>>m; 
    // number pattern - rectangle

    // loop for rows
    for(int i =1;i<=n;i++)
    {
        // loop for columns
        for(int j =1;j<=m;j++)
        {
            // print number
            if((i+j)%2==0)
            {
                cout<<"1"<<" ";
            }
            else
            {
                cout<<"0"<<" ";
            }
            
        }
        cout<<endl;
    }
    cout<<"Thanks"<<endl;

    // numberpattern_2

    //loop for rows
    for(int i =1;i<=n;i++)
    {
        // loop for columns
        for(int j =1;j<=m;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<"Thanks"<<endl;

    // numberpattern_3          triangle number pattern with updating number
    int number =1;
    //loop for rows
    for(int i =1;i<=n;i++)
    {
        // loop for columns
        for(int j =1;j<=m;j++)
        {
                cout<<number<<" ";
                number++;
            
        }
        cout<<endl;
    }
    cout<<"Thanks"<<endl;
}
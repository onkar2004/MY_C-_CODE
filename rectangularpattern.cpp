#include<iostream>

using namespace std;

int main()
{                   //  RECTANGULAR PATTERN SOLID
    int n ,m;
    cout<<"Enter NO. of rows : "<<endl;
    cin>>n;
    cout<<"Enter NO. of columns : "<<endl;
    cin>>m;
    
    // loop for rows 
    for(int i =1;i<=n;i++ )
    {
        // loop for columns
        for(int j =1;j<=m;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }


                // hollow rectangular pattern
    // loops for rows
    for(int i =1;i<=n;i++)
    {
        // loop for columns
        for(int j =1;j<=m;j++)
        {
            // condition for star 
            if(i==1||i==n||j==1||j==m)
            {
                cout<<"*"<<" ";
            }
            else{
                cout<<" "<<" ";
            }
        }
        cout<<endl;
    }
}
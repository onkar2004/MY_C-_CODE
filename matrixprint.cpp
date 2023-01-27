#include<iostream>

using namespace std;

int main()
{
    int n ;
    cout<<"enter rows : ";
    cin>>n;

    int m ;
    cout<<"enter columns : ";
    cin>>m;

    int arr[n][m];

    //input
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    // print output
    cout<<"here your given 2darray : "<<endl;
    for(int i=0;i<n;i++){
        for(int j =0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
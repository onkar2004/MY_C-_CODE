#include<iostream>

using namespace std;

int main()
{
    int n ;
    int m;

    cout<<"enter number of rows : ";
    cin>>n;

    cout<<"enter number of col : ";
    cin>>m;

    int mt[n][m];

    cout<<"enter element : "<<endl;
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            cin>>mt[i][j];
        }
    } 
    cout<<"matrix : "<<endl;
     for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            cout<<mt[i][j]<<" ";
        }
        cout<<endl;
    }
    int row ;
    int col;

    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            if(mt[i][j] == 0){
               row = i;
                col = j;
            }
        }
    }
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==row || j == col){
                mt[i][j] = 0;
            }
        }
    }
    cout<<"seted matrix : "<<endl;
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            cout<<mt[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
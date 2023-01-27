#include<iostream>

#include<vector>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;

    int matrix[n][m];

    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            cin>>matrix[i][j];
        }
    }

    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            if(i==n/2 && j==m/2){
                cout<<matrix[i][j];
            }
        }
    }
    


    

    
}
#include<iostream>

using namespace std;

int main()
{
    int m1[2][2];

    cout<<"enter element of matrix 1 : "<<endl;
    for(int i =0;i<2;i++){
        for(int j =0;j<2;j++){
            cin>>m1[i][j];
        }
    }

    int m2[2][2];
    cout<<"enter element of matrix 2 : "<<endl;
    for(int i =0;i<2;i++){
        for(int j =0;j<2;j++){
            cin>>m2[i][j];
        }
    }

    int n = 2;
    int m =2;

    int matrixmul[n][m];

    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            if(i == n-1 && j == m-1){
                matrixmul[n-1][m-1] = (m1[n-1][j]*m2[i][m-1] + m1[n-1][m-1]*m2[n-1][m-1] );
            }
            
            else{

            matrixmul[i][j] = (m1[i][j]*m2[i][j] + m1[i][j+1]*m2[i+1][j] );
            }
            
        }
    }
    
    // matrixmul[0][0] = (m1[0][0]*m2[0][0] + m1[0][1]*m2[1][0] );
    // matrixmul[0][1] = (m1[0][0]*m2[0][1] + m1[0][1]*m2[1][1] );
    // matrixmul[1][0] = (m1[1][0]*m2[0][0] + m1[1][1]*m2[1][0] );
    // matrixmul[1][1] = (m1[1][0]*m2[0][1] + m1[1][1]*m2[1][1] );
        
    
    cout<<"multiplication of matrix 1 and 2 is below matrix :  "<<endl;
    for(int i =0;i<2;i++){
        for(int j =0;j<2;j++){
            cout<<matrixmul[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
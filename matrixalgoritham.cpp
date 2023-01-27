#include<iostream>

using namespace std;

int main()
{   
    // input matirx 1

    int n ;
    cout<<"enter rows : ";
    cin>>n;

    int m ;
    cout<<"enter columns : ";
    cin>>m;

    int matrix1[n][m];

    //input 
    cout<<"enter element of matrix 1 : "<<endl;

    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            cin>>matrix1[i][j];
        }
    }

    // input matrix 2
    
    int matrix2[n][m];

    cout<<"enter element of matrix 2 : "<<endl;
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            cin>>matrix2[i][j];
        }
    }

    // print matrix 1
    cout<<"here your given matrix 1 : "<<endl;
    for(int i=0;i<n;i++){
        for(int j =0;j<m;j++){
            cout<<matrix1[i][j]<<" ";
        }
        cout<<endl;
    }

     // print matrix 2
    cout<<"here your given matrix 2 : "<<endl;
    for(int i=0;i<n;i++){
        for(int j =0;j<m;j++){
            cout<<matrix2[i][j]<<" ";
        }
        cout<<endl;
    }

    // sumMatrixOfOneAndTwo

    int matrixsum[n][m];

    for(int i= 0;i<n;i++){
        for(int j =0;j<m;j++){
            matrixsum[i][j]  = matrix1[i][j] + matrix2[i][j];
        }
    }

    // matrixsum print
    cout<<"summation of matrix 1 and 2 : "<<endl;
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            cout<<matrixsum[i][j]<<" ";
        }
        cout<<endl;
    }

    int matrixsub[n][m];

    for(int i= 0;i<n;i++){
        for(int j =0;j<m;j++){
            matrixsub[i][j]  = matrix1[i][j] - matrix2[i][j];
        }
    }

    // matrixsum print
    cout<<"summation of matrix 1 and 2 : "<<endl;
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            cout<<matrixsub[i][j]<<" ";
        }
        cout<<endl;
    }

    // trace of matrix 1 
    int M1_trace = 0;

    if(n != m){
        cout<<"please enter square matrix (trace is defined for only square matrix"<<"\nthanks"<<endl;
    }
    else{

    for(int i=0;i<n;i++){
        for(int j =0;j<m;j++){
            
            if(i==j){
                M1_trace = M1_trace + matrix1[i][j];
            }
        }
        
      }
      cout<<"trace of matrix 1 is : "<<M1_trace<<endl;
    }

     // trace of matrix 2

     int M2_trace = 0;

    if(n != m){
        cout<<"please enter square matrix (trace is defined for only square matrix"<<"\nthanks"<<endl;
    }
    else{

    for(int i=0;i<n;i++){
        for(int j =0;j<m;j++){
            
            if(i==j){
                M2_trace = M2_trace + matrix2[i][j];
            }
        }
        
      }
      cout<<"trace of matrix 2 is : "<<M2_trace<<endl;
    }
}
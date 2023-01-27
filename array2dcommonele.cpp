#include<iostream>

using namespace std;

void findCommon(int matrix[3][3] , int n, int m){

    for(int i =0;i<1;i++){
        for(int j =0;j<m;j++){
        while(i<n){
            
            if(matrix[i][j]==matrix[i+1][j] && matrix[i+1][j] == matrix[i+2][j]){
                cout<<matrix[i][j];
            }
            else if(matrix[i][j]<matrix[i+1][j]){
                i++;
            }
            else if(matrix[i+1][j]<matrix[i+2][j]){
                i++;
            }
            else{
                i++;
            }
        }
        }
    }
}

int main(){

    int matrix[3][3] = {{1,2,3},
                      {3,4,5},
                      {6,3,8}};

    int n = 3;

    int m =3;



    cout<<"common elements : "<<endl;

    findCommon(matrix ,n  ,m);
}
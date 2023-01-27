#include<iostream>

using namespace std;

int main()
{
    int m;
    cout<<"enter the number of rows of matrix 1 : ";
    cin>>m;

    int n;
    cout<<"enter the number of columns of matrix 1 : ";
    cin>>n;

    int m1[m][n];

    cout<<"enter the element of matrix 1 : "<<endl;

    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            cin>>m1[i][j];
        }
    }
    
     int q;
    cout<<"enter the number of rows of matrix 2 : ";
    cin>>n;

    int p;
    cout<<"enter the number of columns of matrix 2 : ";
    cin>>p;

    if(n!=q){
        cout<<"sorry matrix multiplication with this number of rows and columns are not possibly"<<endl;
    }
    else{

    int m2[q][p];

    cout<<"enter the element of matrix 2 : "<<endl;

    for(int i =0;i<q;i++){
        for(int j =0;j<m;j++){
            cin>>m2[i][j];
        }
    }
    
    // multiplication

    int product[m][p];
    int sum =0;

    for(int i=0;i<q;i++){
        for(int j =0;j<p;j++){
            for(int k =0;k<q;k++){
                sum =sum +m1[i][k]*m2[k][j];
            }
            product[i][j] = sum;
            sum =0;
        }
    }

    //print product matrix
    for(int i =0;i<q;i++){
        for(int j =0;j<p;j++){
            cout<<product[i][j]<<" ";
        }
        cout<<endl;

        
    }
    }

}

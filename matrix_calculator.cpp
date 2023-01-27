#include<iostream>

using namespace std;

int main()
{
    int arr1[3][3];

    cout<<"enter elements for matrix 1: "<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr1[i][j];
        }
    }
    int arr2[3][3];
    cout<<"enter elements for matrix 2 : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr2[i][j];
        }
    }
   int x=1;
   int q;
   cout<<"enter quires : ";
   cin>>q;
    while(x<=q)
    {
    char opration;
    cout<<"enter oprator : ";
    cin>>opration;

    int arradd[3][3];
    int arrsub[3][3];
    int arrmul[3][3];
    int sum=0;
    int trace=0;

    switch (opration)
    {
    case '+':
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                arradd[i][j]=arr1[i][j]+arr2[i][j];
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<arradd[i][j]<<" ";
            }
            cout<<endl;
        }
        break;

    case '-':
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                arrsub[i][j]=arr1[i][j]-arr2[i][j];
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<arrsub[i][j]<<" ";
            }
            cout<<endl;
        }
        break;

     case '*' :
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                for(int k=0;k<3;k++){
                sum = sum+arr1[i][k]*arr2[k][j];
                }
                arrmul[i][j]=sum;
                sum=0;
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<arrmul[i][j]<<" ";
            }
            cout<<endl;
        }
        break;

    case 'T' :
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(i==j){
                    trace = trace + arr1[i][j];
                }
            }
        }
        cout<<"trace of matrix 1 : "<<trace<<endl;

        trace =0;
        
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(i==j){
                    trace = trace + arr2[i][j];
                }
            }
        }
        cout<<"trace of matrix 2 : "<<trace<<endl;
        break;
    
    default:
        cout<<"enter valid oprator"<<endl;
        break;
    }
    x++;
    }

}
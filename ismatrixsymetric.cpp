#include<iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    int m; cin>>m;

    int m1[n][m];

    int m2[m][n];

    for(int i=0;i<n;i++){
        for(int j =0;j<m;j++){
            cin>>m1[i][j];
        }
    }

    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            m2[i][j] = m1[j][i];
        }
    }
    // for(int i =0;i<n;i++){
    //     for(int j =0;j<m;j++){
    //         cout<<m2[i][j]<<" ";
    //     }
    // }

    

    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            if(m1[i][j] == m2[i][j]){
                cout<<"sy"<<endl;
            }
            else{
                cout<<"not sy"<<endl;
            }
        }
    }
    
}
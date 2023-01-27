#include<iostream>

#include<vector>

using namespace std;

int main()
{
    int m1[2][2];

    vector<int>v;

    cout<<"enter element of matrix 1 : "<<endl;
    for(int i =0;i<2;i++){
        for(int j =0;j<2;j++){
            cin>>m1[i][j];
        }
    }
    for(int i =0;i<2;i++){
        for(int j =0;j<2;j++){
            int temp  = m1[i][j];
            v.push_back(temp);
        }
    }
    cout<<"1D array : "<<endl;
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
    for(int i =0;i<v.size();i++){
        if(v[i]>v[i+1]){
            swap(v[i+1], v[i]);
        }
    }
    cout<<"\nsorted array : "<<endl;
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
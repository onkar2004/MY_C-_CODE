#include<iostream>

#include<vector>

using namespace std;

void sortzerosandonse(vector<int>&v){
    int n;
    int count_zeros = 0;
    
    for(int i =0;i<n;i++){
        if(v[i]==0){
            count_zeros++;
        }
    }

    for(int i =0;i<n;i++){

        if(i<count_zeros){
            v[i] = 0;
        }
        else{
            v[i]=1;
        }
    }
    
}

int main(){

    vector<int>v;
    cout<<"enter size : "<<endl;
    int n;
    cin>>n;
    cout<<"enter element :"<<endl;
    for(int i =0;i<n;i++){
        int ele; cin>>ele;
        v.push_back(ele);
    }

    sortzerosandonse(v);

    cout<<"sorted array : "<<endl;

    for(int  i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
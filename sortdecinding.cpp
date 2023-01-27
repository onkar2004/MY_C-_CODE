#include<iostream>

#include<vector>

using namespace std;

void sortdecinding(vector<int>&v){

    for(int i =0;i<v.size()-1;i++){
    if(v[i]>v[i+1]){
        int temp = v[i+1];
        v[i+1]=v[i];
        v[i]=temp;
    }
    }
    
}

int main(){

    int n;
    cout<<"enter size : "<<endl;
    cin>>n;

    vector<int>v;

    cout<<"enter element : "<<endl;

    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    sortdecinding(v);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
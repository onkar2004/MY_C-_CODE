#include<iostream>

#include<bits/stdc++.h>

#include<vector>

using namespace std;



int main(){

    int n;
    cout<<"Enter size :"<<endl;
    cin>>n;

    vector<int>v(n+1,0);

    // input
    cout<<"enter element : "<<endl; 
    for(int i=1;i<=n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    for(int i =1;i<=n;i++){
        v[i] = v[i]+v[i-1];
    }

    int q;
    cout<<"enter quire :"<<endl;
    cin>>q;

    while(q--){
        int l,r;
        cout<<"enter l : ";
        cin>>l;
        cout<<"enter r : ";
        cin>>r;

        int ans = v[r] - v[l-1];

        cout<<"ans : "<<ans<<endl`;

       
    }
   
    return 0;
    
    
}
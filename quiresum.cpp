
#include<iostream>

#include<vector>

using namespace std;



    

int main(){

    int n;
    cout<<"enter size"<<endl;
    cin>>n;

    vector<int>v;

    
    // v.push_back(0);
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);
    
    
    
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    

    int q;
    cout<<"enter number of quire :"<<endl;
    cin>>q;

    while(q--){

        int l;
        cout<<"enter l : ";
        cin>>l;

        int r;
        cout<<"enter r : ";
        cin>>r;

        int ans1=0;
        int ans2=0;
        int ans =0;

        

        // calculate sum till l

        for(int i=0;i<v.size();i++){
            if(i<=l-2){
                
                ans1 = ans1 + v[i];
            }
        }
        // calculate sum till r
        for(int i=0;i<v.size();i++){
            if(i<=r-1){
               
                ans2 = ans2 + v[i];
            }
        }
        // diffrence ans2 - ans1;
        
         ans = ans2 - ans1;

        cout<<"ans : "<<ans<<endl;
    }
    
}

    

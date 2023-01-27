#include<iostream>

using namespace std;

int main()
{
    int a,b,c,max;
    cout<<"enter numbers : "<<endl;
    cin>>a>>b>>c;
    
    if(a>b&&a>c){
        max=a;
    }
    else if(b>a&&b>c){
        max =b;
    }
    else{
        max=c;
    }
    cout<<"max number among given is : "<<max<<endl;
}


#include<iostream>

#include<vector>

using namespace std;

vector<vector<int> >pascalTriangle(int n){

    vector<vector<int> >pascal(n);

    for(int i =0;i<n;i++){
        pascal[i].resize(i+1);

        for(int j =0;j<i+1;j++){

            int i_factorial =1;
            for(int k =1;k<=i;k++){
                i_factorial = i_factorial*k;
            }
            int j_factorial = 1;
            for(int l =1;l<=j;l++){
                j_factorial = j_factorial*l;
            }
            int imj = i-j;

            int imj_factorial = 1;
            for(int h =1;h<=imj;h++){
                imj_factorial = imj_factorial*h;
            }

            pascal[i][j] = i_factorial/((j_factorial)*(imj_factorial));

        }
    
    }
    return pascal;
}

int main()
{
    int n;
    cout<<"enter n :";
    cin>>n;

    vector<vector<int> > ans;
    ans = pascalTriangle(n);
    //print
    for(int i =0;i<n;i++){
        for(int j=0;j<(i+1);j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
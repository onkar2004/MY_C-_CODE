#inclide<bits/stdc++.h>

using namespace std;

void multiply(int m1 , int m2 , int m1[][2] ,int n, int n2 ,int m2[][2]){

    int x ,i,j;

    int res[m1][n2];

    for(i =0;i<m1;i++){
        for(j =0;j<n2;j++){
            res[i][j] = 0;
            for(x =0;x<m2;x++){
                *(*(res +i)+j) += *(*(m1+i)+x)* *(*(m2+x)+j); 
            }
        }
    }
    for(i=0;i<m1;i++){
        for(j=0;j<n2;j++){
            cout<<*(*(res+i)+j)<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int m1[][] = {{1,1},{2,2}};
    int m2[][] = {{1,1},{2,2}};

    multiply()
}
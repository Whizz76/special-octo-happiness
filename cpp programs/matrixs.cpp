#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the number of rows of matrix 1\n";
    int n1;
    cin>>n1;
    cout<<"Enter the number of columns of matrix 1\n";
    int m1;
    cin>>m1;
    cout<<"Enter the elements of first matrix\n";
    int arr[n1][m1];
    int i;
    int j;
    for(i=0;i<n1;i++){
        for(j=0;j<m1;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    cout<<"Enter the number of columns of matrix 2\n";
    int m2;
    cin>>m2;
    cout<<"Enter the elements of first matrix\n";
    int a[m1][m2];
    for(i=0;i<m1;i++){
        for(j=0;j<m2;j++){
            cin>>a[i][j];
        }
        cout<<endl;
    }
    int ans[n1][m2];
    for(i=0;i<n1;i++){
        for(j=0;j<m2;j++){
            ans[i][j]=0;
            for(int k=i;k<m1;k++){
                ans[i][j]+=(arr[i][k])*(a[k][j]);
            }
        }
    }
    for(i=0;i<n1;i++){
        for(j=0;j<m2;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }


}

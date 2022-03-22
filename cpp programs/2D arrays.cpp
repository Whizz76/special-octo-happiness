#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the number of rows \n";
    int n;
    cin>>n;
    cout<<"Enter the number of columns\n";
    int m;
    cin>>m;
    int arr[n][m];
    int i;
    int j;
    cout<<"Enter the array elements\n";
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //spiral traverse matrix
    cout<<"Spiral traversal of matrix\n";
    int r_s=0;
    int r_e=n-1;
    int c_s=0;
    int c_e=m-1;
    while(r_s<=r_e && c_s<=c_e){

           for(j=c_s;j<=c_e;j++){
               cout<<arr[r_s][j]<<" ";

    }
           r_s+=1;

           for(i=(r_s);i<=r_e;i++){
               cout<<arr[i][c_e]<<" ";
    }
           c_e-=1;
           for(j=c_e;j>=c_s;j--){
               cout<<arr[r_e][j]<<" ";
    }
           r_e-=1;
           for(i=r_e;i>=r_s;i--){
               cout<<arr[i][c_s]<<" ";
    }
           c_s+=1;

    }
    cout<<endl;
    cout<<"Transpose of matrix\n";
    int ans[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            ans[i][j]=arr[j][i];
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;


}

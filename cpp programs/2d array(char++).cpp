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
    cout<<endl;
    cout<<"Enter the element to find\n";
    int key;
    cin>>key;
    int ia=0;
    bool p=true;
    int ja=(m1-1);
    while(ia<n1 && ja<m1){
        if(arr[ia][ja]>key){
            ja--;
        }
        else if(arr[ia][ja]<key){
            ia++;
        }
        else{
            cout<<"Founded at "<<ia<<" "<<ja;
            p=false;
            break;
        }
    }
    if(p){
        cout<<"Not found";
    }
}

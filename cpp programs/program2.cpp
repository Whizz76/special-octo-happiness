#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

bool cmp(string a,string b){
    int x= a.length();
    int y= b.length();
    if(x==y){
        if(a>b){
            return false;
        }
        else{
            return true;
        }
    }
    else{
        if(x>y){
            return true;
        }
        else{
            return false;
        }
    }
}



int main(){
    cout<<"Sorting a string"<<endl;
    int n;
    cout<<"Enter the number of elements "<<endl;
    cin>>n;
    vector<string> s(n);
    cout<<"Enter the elements "<<endl;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    sort(s.begin(),s.end(),cmp);
    cout<<"The sorted string in decreasing order "<<endl;
    for(int i=0;i<n;i++){
        cout<<s[i]<<" ";
    }

}

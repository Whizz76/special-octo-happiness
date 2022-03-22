#include <bits/stdc++.h>
using namespace std;
int main(){
    char c[]={'A','p','p','l','e','\0'};
    char c1[100]="Hello world!";
    cout<<c<<endl;
    cout<<c1<<endl;
    int arr[]={5,6,3,4};
    cout<<*arr<<endl;
    cout<<"Enter a sentence/word\n";
    char c3[1000];
    cin.get(c3,1000,'\n');
    cout<<c3[2]<<endl;
    string str="Hello world";
    cout<<"str.length() "<<str.length()<<endl;
    str.clear();
    cout<<str<<endl;
    string s2= str+" from me";
    cout<<s2<<endl;
}

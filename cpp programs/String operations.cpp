#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    string s1="fam";
    string s2="ily";
    cout<<s1+s2<<endl;
    cout<<s1.compare(s2)<<endl;
    string s3="hello world";
    s3.clear();
    cout<<s3;
    string s4="The great wall";
    cout<<s4.find("wall")<<endl;
    cout<<s4.substr(3,12)<<endl;
    s4.erase(0,3);
    cout<<s4<<endl;
    string x="7895";
    int y=stoi(x);
    cout<<y+2<<endl;
    cout<<to_string(y)+"45"<<endl;
    sort(x.begin(),x.end());
    cout<<x<<endl;
    return 0;

}

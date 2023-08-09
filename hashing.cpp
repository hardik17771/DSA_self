#include<iostream>
#include<map>
using namespace std;

int main()
{   
    string s;
    cin>>s;
    int hash[256]={0};
    int q=s.size();
    while(q--)
    {
       hash[s[q]]+=1;
    }
    char k;
    cin>>k;
    cout<<hash[k];



    return 0;
}
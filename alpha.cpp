#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
        cout<<ch<<"\t is an alphabet";
        else 
        cout<<ch<<"\t  is not an alphabet";
    return 0;
}

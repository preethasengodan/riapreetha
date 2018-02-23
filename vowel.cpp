#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a;
    cin>>a;
    if(a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U')
    cout<<"vowel"<<endl;
    else
    cout<<"not a vowel";
    return 0;
}

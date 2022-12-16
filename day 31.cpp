#include<iostream>
using namespace std;
int main()
{
    char a[10],x;
    int i;
    cout<<"enter string = ";
    cin>>a;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            a[i]=a[i]+32;
        }
        if(a[i]>='a' && a[i]<='z')
        {
            a[i]=a[i]-32;
        }
    }
    cout<<"Toggle string = "<<a;
    return 0;
}

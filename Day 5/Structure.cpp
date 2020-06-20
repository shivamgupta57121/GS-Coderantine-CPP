#include<bits/stdc++.h>
using namespace std;
struct student {
    int roll;
    string name;
    float per;
}s[2];
int main()
{
for(int i=0;i<2;i++){
    cout<<"enter roll: ";
    cin>>s[i].roll;
    cout<<"name: ";
    cin>>s[i].name;
    cout<<"percentage: ";
    cin>>s[i].per;
}
cout<<"Roll\t Name\t Per"<<endl;
for(int i=0;i<2;i++){
    cout<<s[i].roll<<"\t";
    cout<<s[i].name<<"\t";
    cout<<s[i].per<<"\t"<<endl;
}

return 0;
}

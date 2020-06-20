#include<bits/stdc++.h>
using namespace std;
class student{
    private:
        int roll;
        string name;
        float marks[3];
        float total, per;
        void calculate(){
            total=0;
            for(int i=0;i<3;i++) total+=marks[i];
            per = total/3;
        }
    public:
        student(){
            cout<<"enter roll: ";
            cin>>roll;
            cout<<"name: ";
            cin>>name;
            cout<<"marks in three subjects: \n";
            for(int i=0;i<3;i++) cin>>marks[i];
            calculate();
        }
        void print(){
            cout<<roll<<"\t"<<name<<"\t"<<per<<endl;
        }
};
int main()
{
    student s1;
    student s2;
    cout<<"Roll\t Name\t Per\n";
    s1.print();
    s2.print();

return 0;
}

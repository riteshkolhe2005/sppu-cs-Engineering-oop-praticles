#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;
class student
{
    public:
    int roll;
    char name[20];
    char dob[20];
    int tel;
    void getdata()
    {
        cout<<"\nEnter Rollno :";
        cin>>roll;
        cout<<"enter name :";
        cin>>name;
        cout<<"enter dob :";
        cin>>dob;
        cout<<"enter tele no. :";
        cin>>tel;
    }
    void display()
    {
        cout<<roll<<"\t"<<name<<"\t"<<dob<<"\t"<<tel<<endl;
    }
    bool operator ==(const student &obj)
    {
        return (roll==obj.roll);
    }
};
vector<student> read()
{
   int n;
   student obj1;
   vector<student>v;
   cout<<"How many students you want to enter :";
   cin>>n;
   for(int i=0;i<n;i++)
   {
    obj1.getdata();
    v.push_back(obj1);
   } 
   return v;
}
void show(vector<student> v)
{
    cout<<"**********student database************"<<endl;
    cout<<"roll\tname\tdob\ttel"<<endl;
    for(student i: v)
    {
        i.display();
    }
    cout<<endl;
}
void insert(vector<student> &v)
{
    student obj2;
    cout<<"insert the new data "<<endl;
    obj2.getdata();
    v.push_back(obj2);
    cout<<"Data inserted suscessfully "<<endl;
    show(v);
}
void del(vector<student> &v)
{
    student obj3;
    cout<<"Enter roll no of student whose data want to delete "<<endl;
    cin>>obj3.roll;
    vector<student>::iterator itr;
    itr=find(v.begin(),v.end(),obj3);
    if(itr != v.end())
    {
        v.erase(itr);
        cout<<"Student data deleted sucessfully "<<endl;
        show(v);
    }
    else
    {
        cout<<"student not found "<<endl;
    }
}
void search1(vector<student> v)
{
    student obj4;
    cout<<"Enter roll no to search student "<<endl;
    cin>>obj4.roll;
    vector<student>::iterator itr;
    itr=find(v.begin(),v.end(),obj4);
    if(itr != v.end())
    {
        cout<<"Student data found "<<endl;
        cout<<itr->roll<<"\t"<<itr->name<<"\t"<<itr->dob<<"\t"<<itr->tel<<endl;
    }
    else
    {
        cout<<"Student data not found "<<endl;
    }
}
bool check1(student &a,student&b)
{
    return (a.roll < b.roll);
}
void sort1(vector<student> &v)
{
    sort(v.begin(),v.end(),check1);
    show(v);
}
int main()
{
    vector<student>vec;
    vec=read();
    show(vec);
    insert(vec);
    search1(vec);
    sort1(vec);
    del(vec);

    return 0;
}
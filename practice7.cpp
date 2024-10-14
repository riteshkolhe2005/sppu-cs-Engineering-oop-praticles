#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n,Population;
    string state;
    map<string,int>mymap;
    cout<<"how many states you want to add "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter state"<<endl;
        cin>>state;
        cout<<"enter population"<<endl;
        cin>>Population;
        mymap.insert(make_pair(state,Population));
    }
    cout<<"which state you want to find"<<endl;
    cin>>state;
    map<string,int>::iterator itr;
    for(itr=mymap.begin();itr != mymap.end();itr++)
    {
        if(itr->first==state)
        {
            cout<<"population of "<<itr->first<<" is "<<itr->second<<endl;
        }
    }
    return 0;
}
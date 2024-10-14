#include<iostream>
#include<fstream>
using namespace std;

class dd
{
    int roll;
    char name1[20];
    public:
    void getdata()
    {
        cout<<"Enter roll no and name "<<endl;
        cin>>roll>>name1;
    }
    void display()
    {
        cout<<roll<<"\t\t"<<name1<<endl;
    }
};
int main()
{
    int ch,n;
    do
    {
        cout<<"Select option "<<endl;
        cout<<"1.write\n.2.read\nappend"<<endl;
        cin>>n;
        switch(n)
        {
            case 1:
            {
                dd obj1;
                ofstream fout;
                fout.open("sample.txt",ios::out);
                cout<<"how many students"<<endl;
                int n1;
                cin>>n1;
                for(int i=0;i<n1;i++)
                {
                    obj1.getdata();
                    fout.write((char *)&obj1,sizeof(obj1));
                }
                fout.close();
                break;
            }
            case 2:
            {
                dd obj2;
                ifstream fin;
                fin.open("sample.txt",ios::in);
                while(fin.read((char *)&obj2,sizeof(obj2)))
                {
                    obj2.display();
                }
                fin.close();
                break;
            }
            case 3:
            {
                dd obj3;
                ofstream fout2;
                fout2.open("sample.txt",ios::app);
                obj3.getdata();
                fout2.write((char *)&obj3,sizeof(obj3));
                fout2.close();
                break;
            }
            default:
                cout<<"Invalid input";
                break;
        }
        cout<<"Do you want to continue ?"<<endl;
        cout<<"1.yes\n2.no"<<endl;
        cin>>ch;
    }while(ch==1);
    return 0;
}


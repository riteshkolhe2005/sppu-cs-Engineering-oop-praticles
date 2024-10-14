#include <iostream>
#include <fstream>
using namespace std;
class student
{
    int r;
    char name[20];

    public:
    void getdata()
    {
        cout << "\nEnter roll no and name:"<<endl;
        cin >> r >> name;
    }
    void putdata()
    {
        cout << "\n"<< r;
        cout << "\t\t" << name << "\n";
    }
};
int main()
{
    int a, choose;
    do
    {
        cout << "Enter your choice:";
        cout << "\n1.write \n2.read \n3.append" << endl;
        cin >> choose;
        switch (choose)
        {
            case 1:
            {
                student s;
                int i, n;
                cout << "\nEnter how many students data you want to add:" << endl;
                cin >> n;
                ofstream fout;
                fout.open("a.txt",ios::out);
                for (i = 0; i < n; i++)
                {
                    s.getdata();
                    fout.write((char *)&s, sizeof(s));
                }
                fout.close();
                break;
            }
            case 2:
            {
                
                ifstream fin("a.txt",ios::in);
                student s1;
                cout << "\nData of students:";
                cout << "\nRoll No.\t\tName:";
                while (fin.read((char *)&s1, sizeof(s1)))
                {
                    s1.putdata();
                }
                fin.close();
                break;
            }
            case 3:
            {
                ofstream fout;
                fout.open("a.txt", ios::app);
                student s2;
                s2.getdata();
                fout.write((char *)&s2, sizeof(s2));
                fout.close();
            }
        }
        cout << "\nDo you want to continue?\n1.yes \n2.no"<<endl;
        cin >> a;
    } while (a == 1);
    return 0;
}

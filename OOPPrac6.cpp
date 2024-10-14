// practical no 6

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
class student
{
public:
    int r;
    char name[20];
    char dob[10];
    long int tel;

    void getdata()
    {
        cout << "\n Enter roll no.";
        cin >> r;
        cout << "\n Enter name:";
        cin >> name;
        cout << "\n Enter Date of Birth";
        cin >> dob;
        cout << "\n Enter Telephone number";
        cin >> tel;
    }
    void putdata()
    {
        cout << r << "\t" << name << "\t" << dob << "\t" << tel << endl;
    }
    bool operator==(const student &student1) // Required for searching data of student
    {
        return (r == student1.r);
    }
};
// Read data of students
vector<student> read()
{
    int n;
    student s;
    vector<student> v;
    cout << "\nEnter total no. of students : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        s.getdata();
        v.push_back(s);
    }
    return v;
}

// Display Data of students

void print(vector<student> v)
{
    cout << "\n *******************Student Database***************";
    cout << "\n ROLL NO\tNAME\tDATE OF BIRTH\n";
    for (student i : v)
    {
        i.putdata();
    }

    cout << "\n **************************************************";
}
// Inesrtion of data
void insert(vector<student> &v)
{
    student s;
    s.getdata();
    v.push_back(s);
    cout << "\n Data inserted successfully";
    print(v);
}
// Deleting data
void del(vector<student> &v)
{
    student s;
    cout << "\n Enter roll no. of student to delete";
    cin >> s.r;
    vector<student>::iterator itr;
    itr = find(v.begin(), v.end(), s);
    if (itr != v.end())
    {
        v.erase(itr);
        cout << "\n student data deleted successfully";
        print(v);
    }

    else
        cout << "\n Student data not found";
}
// Searching data of student
void search(vector<student> v)
{
    student s;
    cout << "\n Enter roll no. of student search";
    cin >> s.r;
    vector<student>::iterator itr;
    itr = find(v.begin(), v.end(), s);
    if (itr != v.end())
    {
        cout << "\n student data found\n";
        cout << itr->r << "\t" << itr->name << "\t" << itr->dob << "\t" << itr->tel;
    }

    else
        cout << "\n Student data not found";
}
// Sorting data
bool check1(student &s1, student &s2)
{
    return (s1.r < s2.r);
}
void sorting(vector<student> &v)
{
    sort(v.begin(), v.end(), check1);
    print(v);
}

int main()
{
    vector<student> vec;
    int op;
    do
    {
        cout << "\n\n\t\t-------<< MENU >>---------";
        cout << "\n\t\t1.Create ";
        cout << "\n\t\t2.Display ";
        cout << "\n\t\t3.Insert  ";
        cout << "\n\t\t4.Delete ";
        cout << "\n\t\t5.Search ";
        cout << "\n\t\t6.Sort";
        cout << "\n\t\t7.Quit";
        cout << "\n\t\t--------------------------";
        cout << "\n\t\tEnter your choice : ";
        cin >> op;
        switch (op)
        {
        case 1:
            vec = read();
            break;
        case 2:
            print(vec);
            break;
        case 3:
            insert(vec);
            break;
        case 4:
            del(vec);
            break;
        case 5:
            search(vec);
            break;
        case 6:
            sorting(vec);
            break;
        }
    } while (op != 7);
    return 0;
}

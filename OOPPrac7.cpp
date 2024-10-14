#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n, pop;
    string state;
    map<string, int> mymap;
    cout << "\nEnter how many states do you want?";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter the name of state:";
        cin >> state;
        cout << "\nEnter the mymap of state:";
        cin >> pop;
        mymap.insert(make_pair(state, pop));
    }
    cout << "\nEnter the state you want to search:";
    cin >> state;
    cout << "State"<< "\t" << "Population";
    map<string,int>::iterator itr;
    for ( itr = mymap.begin(); itr != mymap.end(); itr++)
    {
        if (itr->first == state)
        {
            cout << "\n"<< itr->first << "\t" << itr->second << endl;
            break;
        }
    }
    return 0;
}

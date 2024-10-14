#include<iostream>
using namespace std;
#define ms 10
int n;

template<class t>
void selection(t arr[ms])
{
    for(int i=0;i<=n-2;i++)
    {
        int mini=i;
        for(int j=i;j<=n-1;j++)
        {
            if(arr[j]<arr[mini])
            {
                mini=j;
            }
        }
        swap(arr[mini],arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{   
    int arr[ms];
    float arr2[ms];
    cout<<"how many integer elements"<<endl;
    cin>>n;
    cout<<"enter elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selection(arr);
    cout<<"how many float numbers"<<endl;
    cin>>n;
    cout<<"enter elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    selection(arr2);
    return 0;
}
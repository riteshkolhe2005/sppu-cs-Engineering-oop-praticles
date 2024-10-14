#include<iostream>
#define ms 10
using namespace std;

int n;
template<class T>
void selection(T arr[ms])
{
    
    for(int i = 0 ; i <= n-2 ; i++)
    {
        int mini=i;
        for(int j = i ; j <= n-1 ; j++)
        {
            if(arr[j]<arr[mini])
            {
                mini=j;
            }
            
        }
        swap(arr[i],arr[mini]);
    }
    cout<<"\n***********Sorted list********** :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[ms];
    float farr[ms];
    cout<<"*********Selection sort*******\n";
    cout<<"enter how many Integer element "<<endl;
    cin>>n;
    cout<<"Enter the integer element "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selection(arr);
    cout<<endl;
    cout<<"Enter how many float elements you want "<<endl;
    cin>>n;
    cout<<"enter the float elements "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>farr[i];
    }
    selection(farr);
    return 0;
}
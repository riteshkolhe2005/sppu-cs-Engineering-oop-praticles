#include<iostream>
#include<string.h>
using namespace std;

class publication
{
    public:
    float price;
    string title;
    void get()
    {
        cout<<"Enter the title and price of book reapectively:"<<endl;
        cin>>title>>price;
    }

    void disp()
    {
        cout<<"title is :"<<title<<endl;
        cout<<"price is :"<<price<<endl;
    }

};

class book:public publication
{
    public:
    int page_count;
    void getpage()
    {
        cout<<"enter the page count :";
        cin>>page_count;
        try
        {
            if(page_count<=0)
            {
                throw 1;
            }
        }
        catch(int a)
        {
            title=" ";
            page_count=0;
            price=0;
            cout<<"page count should be greater than zero"<<endl;
        }
    }

    void disppage()
    {
        cout<<"page count is :"<<page_count<<endl;
    }
};

class tape:public publication
{
    public:
    float playing_time;
    void gettime()
    {
        cout<<"Enter the cassette playing time in min :";
        cin>>playing_time;

        try
        {
            if(playing_time<0)
            {
                throw 1;
            }
        }
        catch(int a)
        {
            playing_time=0;
            cout<<"palying time should be greater than zero"<<endl;
        }
    }

    void disptime()
    {
        cout<<"play time in minute is :"<<playing_time<<endl;
    }
};

int main()
{
    book obj1;
    tape obj2;
    obj2.get();
    obj1.getpage();
    obj2.gettime();
    obj2.disp();
    obj1.disppage();
    obj2.disptime();
    return 0;
}
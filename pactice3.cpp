#include<iostream>
using namespace std;

class publication
{
    public:
    string title;
    int price;
    void getdata()
    {
        cout<<"enter the title and price :"<<endl;
        cin>>title>>price;
    }
    void display()
    {
        cout<<"Title :"<<title<<endl;
        cout<<"Price :"<<price<<endl;
    }
};
class book:public publication
{
    public:
    int page_count;
    void getpage()
    {
        cout<<"enter page count :";
        cin>>page_count;
        try
        {
            if(page_count==0)
            {
                throw 1;
            }
        }
        catch(int x)
        {
            title=" ";
            price=0;
            page_count=0;
            cout<<"Page count cant be zero "<<endl;
        }
    }
    void dispage()
    {
        cout<<"Page count :"<<page_count<<endl;
    }
};
class tape:public publication
{
    public:
    float playtime;
    void setplay()
    {
        cout<<"enter playtime :";
        cin>>playtime;
        try
        {
            if(playtime<=0)
            {
                throw 1;
            }
        }
        catch(int x)
        {
            title=" ";
            price=0;
            playtime=0;
            cout<<"playtime cant be zero "<<endl;
        }
    }
    void diplay()
    {
        cout<<"playtime :"<<playtime;
    }
    
};

int main()
{
    book obj;
    tape obj2;
    obj.getdata();
    obj.getpage();
    obj2.setplay();
    obj.display();
    obj.dispage();
    obj2.diplay();
    return 0;
}

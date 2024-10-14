#include<iostream>
using namespace std;

class comp
{
    int real,imag;
    public:
    comp()
    {
        real=0;
        imag=0;
    }

    comp operator +(comp a1)
    {
        comp temp;
        temp.real=real+a1.real;
        temp.imag=imag+a1.imag;
        return temp;
    }

    comp operator *(comp a2)
    {
        comp temp1;
        temp1.real=(real*a2.real)-(imag*a2.imag);
        temp1.imag=(real*a2.imag)+(imag*a2.real);
        return temp1;
    }

    friend comp operator -(comp a3,comp a4);  //no need but for practice
    friend ostream &operator <<(ostream &output,comp &c);
    friend istream &operator >>(istream &input,comp &c);
};
comp operator -(comp a3,comp a4)
{
    comp temp2;
    temp2.real=a3.real-a4.real;
    temp2.imag=a3.imag-a4.imag;
    return temp2;
}

ostream &operator <<(ostream &output,comp &c)
{
    output<<c.real<<"+"<<c.imag<<"i"<<endl;
}

istream &operator >>(istream &input,comp &c)
{
    cout<<"enter  real number :";
    input>>c.real;
    cout<<"enter imaginary number :";
    input>>c.imag;
}

int main()
{
    int n;
    
    comp obj1,obj2,obj3;
    cin>>obj1;
    cin>>obj2;
    cout<<"enter \n1.Addition\n2.multipication\n3.subtraction"<<endl;
    cin>>n;
    
    switch(n)
    {
        case 1:
            obj3=obj1+obj2;
            cout<<obj3;
            break;
        case 2:
            obj3=obj1*obj2;
            cout<<obj3;
            break;
        case 3:
            obj3=obj1-obj2;
            cout<<obj3;
            break;
        default:
            cout<<"Invalid Input";
            break;

    }

    return 0;
}
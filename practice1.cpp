#include<iostream>
using namespace std;

class complex
{
    int real;
    int imag;
    public:
    complex()
    {
        real=0;
        imag=0;
    }
    complex operator +(complex a)
    {
        complex temp;
        temp.real=real+a.real;
        temp.imag=imag+a.imag;
        return temp;
    }
    complex operator *(complex a1)
    {
        complex temp;
        temp.real=(real*a1.real)-(imag*a1.imag);
        temp.imag=(real*a1.imag)+(imag*a1.real);
        return temp;
    }
    friend complex operator -(complex a3,complex a4);
    friend ostream &operator <<(ostream &output,complex &c);
    friend istream &operator >>(istream &input,complex &c);
};
complex operator -(complex a3,complex a4)
{
    complex temp;
    temp.real=a3.real-a4.imag;
    temp.imag=a3.imag-a4.imag;
    return temp;
}
ostream &operator <<(ostream &output,complex &c)
{
    output<<c.real<<"+"<<c.imag<<"i"<<endl;
}
istream &operator >>(istream &input,complex &c)
{
    cout<<"enter real"<<endl;
    input>>c.real;
    cout<<"enter imag"<<endl;
    input>>c.imag;
}
int main()
{
    int n;
    complex obj1,obj2,obj3;
    //obj.display();
    cout<<"enter first complex number :"<<endl;
    cin>>obj1;
    cout<<"enter second complex number :"<<endl;
    cin>>obj2;
    cout<<"1.add\n2.sub\n3.mul"<<endl;
    cout<<"select option :";
    
    cin>>n;
    
    switch(n)
    {
        case 1:
            obj3=obj1+obj2;
            cout<<obj3;
            break;
        case 2:
            obj3=obj1-obj2;
            cout<<obj3;
            break;
        case 3:
            obj3=obj1*obj2;
            cout<<obj3;
            break;
        default:
            cout<<"Invalid Input"<<endl;
            break;
    }
    return 0;
}
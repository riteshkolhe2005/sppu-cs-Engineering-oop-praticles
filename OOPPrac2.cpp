#include<iostream>
#include<cstring>
using namespace std;
class student
{
	private:
		char name[20];
		int roll,drivili;
		char class1[10];
		char div;
		char dob[10];
		char address[20];
		char bloodgr[10];
		long int teleno;
	public:
		static int countb;
		student()
		{
			roll = 0;
			strcpy(name,"unknown");
			strcpy(class1,"SE");
			div = 'a';	
			strcpy(dob,"DD/MM/YYYY");
			strcpy(address,"unknown");	
			strcpy(bloodgr,"ab+");
			teleno = 423742;
			countb++;
		}
		void getdata()
		{ 	cout<<"\nenter roll no";
		  	cin>>roll;
			cout<<"\nname of student";
			cin>>name;
			cout <<"\nenter date of birth";
			cin>>dob;
			cout<<"enter class of student=";
			cin>>class1;
			cout<<"\nenter div";
			cin>>div;
			cout<<"\nblood group:";
			cin>>bloodgr;
			cout<<"\naddress:";
			cin>>address;
			cout<<"\ntelephone number";
			cin>>teleno;
			cout<<"\nenter driving license number:";
			cin>>drivili;
			countb++;

			
		}
		student(student &s)
		{
			roll = s.roll;
			strcpy(name,s.name);
			strcpy(class1,s.class1);
			div = s.div;	
			strcpy(dob,s.dob);
			strcpy(address,s.address);	
			strcpy(bloodgr,s.bloodgr);
			teleno = s.teleno;
			drivili = s.drivili;
			countb++;
		}
		friend void display(student s);
		static void count()
		{
			cout<<"student count-> "<<countb;
		}
		~student()
		{
			cout<<"Name"<< this->name<<"deleted"<<endl;
		}
};


int student::countb=0;
void display(student s)
{
	cout<<"Name"<<s.name<<endl;	
	cout<<"Roll"<<s.roll<<endl;
	cout<<"Class"<<s.class1<<endl;
	cout<<"Div"<<s.div<<endl;
	cout<<"DOB-= "<<s.dob<<endl;
	cout<<"address-> "<<s.address<<endl;
	cout<<"Blood group= "<<s.bloodgr<<endl;
	cout<<"Telephone Number= "<<s.teleno<<endl;
	cout<<"Driving licence= "<<s.drivili<<endl;
}

int main()
{	
	student s1,*ptr[10];
	display(s1);
	student s3(s1);
	display(s3);
	int n;
	cout<<"how many student database you can save="<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		ptr[i] = new student;
		
		ptr[i]->getdata();
	}
	for(int i=0;i<n;i++)	
	{
		cout<<" student data "<< i <<endl;
		display(*ptr[i]);
	}
	for(int i=0;i<n;i++)	
	{
		delete ptr[i];
	}
	return 0;
}						
		


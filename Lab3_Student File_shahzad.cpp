#include<iostream>
using namespace std;
class student{
	private:
	int smester;
	float cgpa;
	string name;
	double sapid;
	public :
		student(float c, int s)
		{

            cgpa=c;
            smester=s;
		}
	
		student(string n,int m,float s)
		{
		name=n;
		smester=m;
		cgpa=s;
		}
		student (int p)
		{
			sapid=p;
		}
		student (int m, float s, string n,double p)
		{
			smester=m;
			cgpa=s;
			name=n;
			sapid=p;
		}
		
			// copy constructor
		student (student &s4)
		{
		   smester=s4.smester;
		   cgpa=s4.cgpa;
		   name=s4.name;
		   sapid=s4.sapid;
		   
		}
		void display()
		{
			cout<<"The cgpa is "<<cgpa<<endl;
			cout<<"The smester is "<<smester<<endl;
			cout<<"**************************"<<endl;
		}
		void displays()
		{
			cout<<"the name is "<<name<<endl;
			cout<<"smester is "<<smester<<endl;
		    cout<<"cgpa  is "<<cgpa<<endl;
		    cout<<"**************************"<<endl;
		}
		void displayss()
		{
			cout<<" Sap id "<<sapid<<endl;
			  cout<<"**************************"<<endl;
		}
		void displaysss()
		{       cout<<"The smester is "<<smester<<endl;
				cout<<"The cgpa is "<<cgpa<<endl;
					cout<<"The name is "<<name<<endl;
						cout<<"Sap id is "<<sapid<<endl;
		cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd"<<endl;
		}
		// destructor
		~student()
		{

			cout<<"DESTRUCTOR RUNNING "<<endl;
	        smester;
			cgpa;
			name;
			sapid;
		}
};
int main()
{
	student s1(2.5,2);
	s1.display();
	student s2("tauheed",3,3.5);
	s2.displays();
	student s3(46859);
	s3.displayss();
	student s4(2,2.86,"Bilal",45473);
	s4.displaysss();
	
	
}

#include<iostream>
using namespace std;
class A
{
	private:
	int rollno;
    void roll()
    {
    	cout<<"  roll no IS ";
    	cin>>rollno;
	}
	public:
	int year;
	void sme()
	{
	cout<<" THE year IS ";
	cin>>year;
	}
	protected:
	float cgpa;
	void cg()
	{
		cout<<" THE CGPA IS ";
	cin>>cgpa;	
	}
	
		A(int s,int se,float cg)
		{
			rollno=s;
			year=se;
			cgpa=cg;
		}
public:
	
	A() 
	{
	cout<<" THE NULL CONSTRUCTOR IS RUNNING\n ";	
	  rollno=0;
	  year=1;
	  cgpa=2;  
	}
	// DESTRUCTOR
	~ A()
	{
		
	}
	
	
	
};
class B{
		public:
	int rollno;
    void roll()
    {
    	cout<<"  roll no IS ";
    	cin>>rollno;
	}
	private:
	int year;
	void sme()
	{
	cout<<" THE year IS ";
	cin>>year;
	}
	protected:
	float cgpa;
	void cg()
	{
		cout<<" THE CGPA IS ";
	cin>>cgpa;	
	}
		B(int s,int se,float cg)
		{
			rollno=s;
			year=se;
			cgpa=cg;
		}
public:
	
	B() 
	{
	cout<<" THE NULL CONSTRUCTOR IS RUNNING\n ";	
	  rollno=0;
	  year=1;
	  cgpa=2;  
	}
	// DESTRUCTOR
	~ B()
	{
		
	}
	
	
};
class C{
		private:
	int rollno;
    void roll()
    {
    	cout<<"  roll no IS ";
    	cin>>rollno;
	}
	protected:
	int year;
	void sme()
	{
	cout<<" THE year IS ";
	cin>>year;
	}
	public:
	float cgpa;
	void cg()
	{
		cout<<" THE CGPA IS ";
	cin>>cgpa;	
	}
		C(int s,int se,float cg)
		{
			rollno=s;
			year=se;
			cgpa=cg;
		}
public:
	
	C() 
	{
	cout<<" THE NULL CONSTRUCTOR IS RUNNING\n ";	
	  rollno=0;
	  year=1;
	  cgpa=2;  
	}
	// DESTRUCTOR
	~ C()
	{
		
	}
		

};
class D: public A,B,C{
	
	public:
	int rollno;
    void roll()
    {
    	cout<<"  roll no IS ";
    	cin>>rollno;
	}
	public:
	int year;
	void sme()
	{
	cout<<" THE year IS ";
	cin>>year;
	}
	public:
	float cgpa;
	void cg()
	{
		cout<<" THE CGPA IS ";
	cin>>cgpa;	
	}

};
class E:public D
{
		public:
	int rollno;
    void roll()
    {
    	cout<<"  roll no IS ";
    	cin>>rollno;
	}
	private:
	int year;
	void sme()
	{
	cout<<" THE year IS ";
	cin>>year;
	}
	protected:
	float cgpa;
	void cg()
	{
		cout<<" THE CGPA IS ";
	cin>>cgpa;
}
};
class F: public E{
		protected:
	int rollno;
    void roll()
    {
    	cout<<"  roll no IS ";
    	cin>>rollno;
	}
	private:
	int year;
	void sme()
	{
	cout<<" THE year IS ";
	cin>>year;
	}
	public:
	float cgpa;
	void cg()
	{
		cout<<" THE CGPA IS ";
	cin>>cgpa;
}
};
int main()
{
D d1;
E e1;
F f1;
d1.sme();
e1.roll();
f1.cg();
}

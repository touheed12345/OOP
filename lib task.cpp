#include<iostream>

using namespace std;
class A
{
	private:
	int sapid;
    void sap()
    {
    	cout<<" SAP ID IS ";
    	cin>>sapid;
	}
	public:
	int smester;
	void sme()
	{
	cout<<" THE SMESTER IS ";
	cin>>smester;
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
			sapid=s;
			smester=se;
			cgpa=cg;
		}
public:
	
	A() 
	{
	cout<<" THE NULL CONSTRUCTOR IS RUNNING\n ";	
	  sapid=0;
	  smester=1;
	  cgpa=2;  
	}
	// DESTRUCTOR
	~ A()
	{
		
	}
	
	
	
};
class B{
		public:
	int sapid;
    void sap()
    {
    	cout<<" SAP ID IS ";
    	cin>>sapid;
	}
	private:
	int smester;
	void sme()
	{
	cout<<" THE SMESTER IS ";
	cin>>smester;
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
			sapid=s;
			smester=se;
			cgpa=cg;
		}
public:
	
	B() 
	{
	cout<<" THE NULL CONSTRUCTOR IS RUNNING\n ";	
	  sapid=0;
	  smester=1;
	  cgpa=2;  
	}
	// DESTRUCTOR
	~ B()
	{
		
	}
	
	
};
class C{
		private:
	int sapid;
    void sap()
    {
    	cout<<" SAP ID IS ";
    	cin>>sapid;
	}
	protected:
	int smester;
	void sme()
	{
	cout<<" THE SMESTER IS ";
	cin>>smester;
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
			sapid=s;
			smester=se;
			cgpa=cg;
		}
public:
	
	C() 
	{
	cout<<" THE NULL CONSTRUCTOR IS RUNNING\n ";	
	  sapid=0;
	  smester=1;
	  cgpa=2;  
	}
	// DESTRUCTOR
	~ C()
	{
		
	}
		

};
class D: public A,B,C{
	
	public:
	int sapid;
    void sap()
    {
    	cout<<" SAP ID IS ";
    	cin>>sapid;
	}
	public:
	int smester;
	void sme()
	{
	cout<<" THE SMESTER IS ";
	cin>>smester;
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
	int sapid;
    void sap()
    {
    	cout<<" SAP ID IS ";
    	cin>>sapid;
	}
	private:
	int smester;
	void sme()
	{
	cout<<" THE SMESTER IS ";
	cin>>smester;
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
	int sapid;
    void sap()
    {
    	cout<<" SAP ID IS ";
    	cin>>sapid;
	}
	private:
	int smester;
	void sme()
	{
	cout<<" THE SMESTER IS ";
	cin>>smester;
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
e1.sap();
f1.cg();
}

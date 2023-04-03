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
class B:public  A{
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

int main()
{
	A a1;
	a1.sme();
	B b1;
	b1.sap();
}

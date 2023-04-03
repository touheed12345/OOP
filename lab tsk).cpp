#include<iostream>
using namespace std;
class E
{
	private:
	int rollno;
    void roll()
    {
    	cout<<" rollno IS ";
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
	E(int s,int se,float cg)
		{
			rollno=s;
			year=se;
			cgpa=cg;
		}
public:
	
	E() 
	{
	cout<<" THE NULL CONSTRUCTOR IS RUNNING\n ";	
	  rollno=0;
	  year=1;
	  cgpa=2;  
	}
	// DESTRUCTOR
	~ E()
	{
		
	}
	
	
	
};
class F:public  E{
	public:
	int rollno;
    void roll()
    {
    	cout<<" rollno IS ";
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
class G:public F{
		protected:
	int rollno;
    void roll()
    {
    	cout<<" rollno IS ";
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
	E e1;
	e1.sme();
	F f1;
	f1.roll();
	G g1;            // Due to multilevel inheritence it give access.
	g1.cg();
}


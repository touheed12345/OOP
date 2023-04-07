#include<iostream>
#include<fstream>
using namespace std;
struct teacher{
	string name;
    long contactno;
	int salary;
	string city;
}D;
void data()
{
	fstream teacher;
     teacher.open("Teacher.txt",ios::out);
     teacher<<" Name "<<D.name<<endl;
     teacher<<" contact no "<<D.contactno<<endl;
     teacher<<" Salary  "<<D.salary<<endl;
     teacher<<" City name "<<D.city<<endl;
     teacher.close();
     cout<< "Data of the user\n";
}
int main()
{
	cout<<" Name of user: ";
	getline(cin,D.name);
	cout<<" Contact number of user: ";
    cin>>D.contactno;
	cout<<" Salary: ";
	cin>>D.salary;
	cout<<" City name: ";
    cin>>D.city;
    data();
		fstream teacher;
	   teacher.open("Teacher.txt", ios::in);
        string line;
        while(getline(teacher,line)) {
        cout<<"...............................................\n";
        cout <<line<<endl; 
	}
	teacher.close();
}

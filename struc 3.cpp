#include<iostream>
#include<string>
using namespace std;


struct student 
{
string name;
float mm;
float pm;
float cm;	
};

int main()
{
struct student s[3];

for(int i=0;i<=2;i++)
{
	
	cout<<"student "<<i+1<<endl;
	
	
	cout<<"enter name:";
	cin>>s[i].name;
	
	cout<<"math marks :";
	cin>>s[i].pm;
		
	cout<<"physics marks :";
	cin>>s[i].pm;
		
	cout<<"chemistry marks :";
	cin>>s[i].cm;
	
	}	
	
	for(int i=0;i<=2;i++)
	{
		cout<<"-------------------------------------------------------------------------------"<<endl;
		cout<<s[i].name <<" persent is "<<(s[i].cm+s[i].mm+s[i].pm)/3<<endl;
	
	}
	return 0;
}

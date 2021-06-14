#include<iostream>
#include<string>
using namespace std;

struct student {
	
	string name;
	int age;
	int roll;
	string address;
	
};


int main()
{
	struct student s[3];
	
	for(int i=0;i<=2;i++)
	{
		cout<<"student "<<i+1<<endl;
		
		cout<<"Enter Name :";
		cin>>s[i].name;
				
		cout<<"Enter Age :";
		cin>>s[i].age;
				
		cout<<"Enter Roll :";
		cin>>s[i].roll;
				
		cout<<"Enter Address :";
		cin>>s[i].address;
	}
	
	for(int i=0;i<=2;i++)
	{
		if(s[i].age==14)
		{
			cout<<s[i].name<<" your age is 14 "<<endl<<endl;
		}
	}
	
		for(int i=0;i<=2;i++)
	{
		if(s[i].roll%2==0)
		{
			cout<<s[i].name<<" your roll is even "<<endl<<endl;
		}
	}
	
		for(int i=0;i<=2;i++)
	{
	
			cout<<"Roll no of student "<<s[i].name<<" is "<<s[i].roll<<endl<<endl;
		
	}
	return 0;
}

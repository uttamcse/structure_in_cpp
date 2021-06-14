#include<iostream>
#include<string>
using namespace std;


struct student {
	
	string name;
	int age;
	int roll;
	string email;
};

int main()
{
	struct student s[2];
	for(int i=0;i<=1;i++)
	{
		cout<<"Student "<<i+1<<"Details"<<endl;
		
		cout<<"enter his/her name :";
		cin>>s[i].name;
				
		cout<<"enter his/her roll no :";
		cin>>s[i].roll;
				
		cout<<"enter his/her age :";
		cin>>s[i].age;
				
		cout<<"enter his/her email :";
		cin>>s[i].email;
		
		
	}
	
	for(int i=0;i<=1;i++)
	{
		cout<<"-----------------------------------------------------------------------"<<endl;
		cout<<"Name : "<<s[i].name<<endl;
		cout<<"Roll No :"<<s[i].roll<<endl;
		cout<<"Age :"<<s[i].age<<endl;
		cout<<"Email ID :"<<s[i].email<<endl;
	}
	return 0;
}

#include<iostream>
#include<string>
using namespace std;


struct student {
	
	string name;
	int age;
	int roll;
	int marks;
	
};
int main()
{
	struct student s1;
	s1.name="Uttam yadav";
	s1.age=20;
	s1.roll=19162;
	s1.marks=73;
	
	cout<<"Name :"<<s1.name<<endl<<"Age :"<<s1.age<<endl<<"Roll No :"<<s1.roll<<endl<<"Marks :"<<s1.marks<<endl;
	
	
	
	
	
	return 0;
}

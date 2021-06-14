#include<iostream>
#include<string>
using namespace std;

struct worker
{
string name;
int salary;
int work;	
};
int main()
{
	
	struct worker s[3];
for(int i=0;i<=2;i++)
{
	cout<<"student "<<i+1<<endl;
	
	cout<<"enter name :";
	cin>>s[i].name;
		
	cout<<"enter salary :";
	cin>>s[i].salary;
		
	cout<<"enter work :";
	cin>>s[i].work;	
	
}

for(int i=0;i<=2;i++)
{
	if(s[i].work>=8 && s[i].work<10)
	{
		cout<<s[i].name<<" salary increase by 50$ "<<endl;
	}
}

for(int i=0;i<=2;i++)
{
	if(s[i].work>=10 && s[i].work<12 )
	{
		cout<<s[i].name<<" salary increase by 100$ "<<endl;
	}
}
for(int i=0;i<=2;i++)
{
	if(s[i].work>=12)
	{
		cout<<s[i].name<<" salary increase by 200$ "<<endl;
	}
}
return 0;	
}

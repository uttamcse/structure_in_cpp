#include<iostream>
#include<string>
using namespace std;

struct accountholder
{

string name;
int accno;
float balence;	
};

int main()
{
	struct accountholder s[5];
	
	for(int i=0;i<=2;i++)
	{
		cout<<"student "<<i+1<<endl;
		
		cout<<"enter name :";
		cin>>s[i].name;
		
		cout<<"enter accno :";
		cin>>s[i].accno;
		
		cout<<"enter balence :";
		cin>>s[i].balence;
		
	
	}
	for(int i=0;i<=2;i++)
	{
		if(s[i].balence<=1000)
		{
			cout<<s[i].name<<" your balence is less than 1000"<<endl<<endl;
		}
	}
	
	for(int i=0;i<=4;i++)
	{
		if(s[i].balence>=1000)
		{
			cout<<s[i].name<<" balance before adding 100 :"<<s[i].balence<<endl;
			
			cout<<s[i].name<<"  balence after adding 100 :"<<(s[i].balence+100)<<endl;
			
		}
	}
	return 0;
}

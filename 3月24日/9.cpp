// 9.cpp : Defines the entry point for the console application.
//

#include<iostream>
#include<ctime>
using namespace std;


int main(int argc, char* argv[])
{   int i,a,b,sum=0;
    int op,c,d;
	srand(time(NULL));
	for(i=1;i<=10;i++)
	{
	a=rand()%10;
	b=rand()%10;
	c=rand()%3;
	switch (op){
	case 0 : cout<<a<<'+'<<b<<'=';
		c=a+b;break;
	case 1 : cout<<a<<'-'<<b<<'=';
         c=a-b;break;
	case 2 : cout<<a<<'*'<<b<<'=';
		c=a*b;
	}
	cin>>d;
		if(d==c)
		{
		cout<<"��ȷ";
		sum+=10;
		}
	else cout<<"����";
	}
	cout<<"10���д��"<<sum/10<<"�⣬"<<'\t'<<"�÷֣�"<<sum<<'\n';
	return 0;
}

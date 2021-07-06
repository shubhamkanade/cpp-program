#include<iostream>
using namespace std;
class tempc;
class tempf
{
	int far;
	public: void accept()
		{
			cout<<"enter the temperature in farenheigt:";
			cin>>far;
		}
		friend int convert(tempf &a,tempc &b);
};
class tempc
{
	int cel;
	public: void accept()
		{
			cout<<"enter the temperature in celcius:";
			cin>>cel;
		}
		friend int convert(tempf &a,tempc &b);
};
int convert(tempf &a,tempc &b)
{
	cout<<"enter the temperature in farenhight:"<<a.far<<endl;
	cout<<"enter the temperature in celcius:"<<b.cel<<endl;
}
int main()
{
	tempf f;
	tempc c;
	f.accept();
	c.accept();
	convert(f,c);
	return 0;
}

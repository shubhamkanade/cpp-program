#include<iostream>
#include<iomanip>
using namespace std;

ostream& form(ostream& out)
{
	out<<setw(10);
	out<<setprecision(2);
	out<<setfill('*');
	return out;
}
int main()
{
	cout.setf(ios::left);
	cout<<form<<123.1214<<"rs"<<endl;
	cout.setf(ios::right);
	cout<<form<<123.1234<<"rs"<<endl;
return 0;
}



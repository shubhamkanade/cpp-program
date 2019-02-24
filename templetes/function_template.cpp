#include<iostream>
using namespace std;
int add1(int iNo1,int iNo2)  ///necked function
{
	int iAns=0;
	iAns=iNo1+iNo2;
	return iAns;
}
float add2(float fNo1,float fNo2)  //necked function
{
	float fAns=0.0f;
	fAns=fNo1+fNo2;
	return fAns;
}
double add3(double dNo1,double dNo2)  //necked function
{
	double dAns=0.0;
	dAns=dNo1+dNo2;
	return dAns;
}
int main()
{
	int i=10,j=20,iRet=0;
	cout<<add1(i,j)<<endl;
	float f=10.0,f1=20.0,fRet=0.0f;
	cout<<add2(f,f1)<<endl;
	double d=20.00,d1=40.00,dRet=0.0;
	cout<<add3(d,d1)<<endl;
	return 0;
}



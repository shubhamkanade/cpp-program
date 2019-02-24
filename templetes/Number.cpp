#include<iostream>
using namespace std;
template <class T>
class Number
{
	public:
		T *ptr;
		int iSize;
		Number(int);
		~Number();
		int Search(T);
		int Frequency(T);
		void Accept();
};
	template <class T>
Number<T>::Number(int iLength=5)
{
	iSize=iLength;
	ptr=new T[iSize];
}
	template <class T>
Number<T>::~Number()
{
	delete []ptr;
}
	template <class T>
void Number<T>::Accept()
{
	cout<<"enter numbers\n";
	for(int i=0;i<iSize;i++)
		cin>>ptr[i];
}
	template <class T>
int Number<T>::Search(T iValue)
{
	int i=0;
	for(i=0;i<iSize;i++)
		if(ptr[i]==iValue)
			break;
	if(i==iSize)
		return -1;
	else
		return i;
}
template<class T>
int Number<T>::Frequency(T iValue)
{
	int i=0,iCnt=0;
	for(i=0;i<iSize;i++)
	{
		if(ptr[i]==iValue)
			iCnt++;
		return iCnt;
	}
}
int main()
{
	Number <int> iobj(10);
	Number <float> fobj(8);
	iobj.Accept();
	cout<<iobj.Search(11);
	fobj.Accept();
	cout<<fobj.Frequency(3.14f);
	return 0;
}

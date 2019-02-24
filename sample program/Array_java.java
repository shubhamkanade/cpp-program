import java.lang.*;
import java.io.*;
class Demo
{
	public int i;
	public int j;

	public static int k=0;

	public void fun()
	{
		System.out.println("the value of i is="+i);
		System.out.println(j);
		System.out.println(k);
	}
	public static void gun()
	{
	//	System.out.println("the value of i is="+i);
	//	System.out.println(j);
		System.out.println(k);
	}
}
class Array_java
{
	public static void main(String arg[])
	{
		System.out.println(Demo.k);
//		sizeof(dobj);
		Demo dobj=new Demo();
		Demo dobj1=new Demo();
	}
}


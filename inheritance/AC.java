import java.lang.*;
import java.io.*;

abstract class Hello
{
	public void fun()
	{
		System.out.println("In fun\n");
	}
	abstract void sun();
}
abstract class Demo extends Hello
{	
		void sun()
		{
		}	
}

import java.io.*;

class A
{

       
                public void fun(int i){
                        //cout<<"Inside FUn\n";
			System.out.println("Hello world In fun Of a");
                        }
			
		public int gun()
		{
			return 0;
		}
};
class B extends A
{
        
         public void fun(int i,int j){
                         System.out.println("Hello world");
                        }
		 float gun()
		{
			return 0.0;
		}

};
class Overload
{
	public static void main(String arg[])
	{
		B bobj=new B();
		bobj.fun(11);
	}
}

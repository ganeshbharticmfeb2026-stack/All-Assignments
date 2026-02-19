import java.util.Scanner;


class Question31
{
	public static void main(String[] arge)
	{

        String str1 = "java";
        String str2 = "java";
	String str3 = "java";

        
        System.out.println("All String point to the same object : "+ ((str1 == str2) && (str2 == str3)));
	}
}
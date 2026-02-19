import java.util.Scanner;


class Question26
{
	public static void main(String[] arge)
	{
		Scanner sc = new Scanner(System.in);

		System.out.println("Enter string here");
		String str = sc.next();
		
		String rstr = new String("");
		
		for(int i=str.length()-1;i>=0;i--)
		{
			rstr+=str.charAt(i);
		}
		
		if (str.equals(rstr))
		{
			System.out.println("string are palindrome");
		}
		else
		{
			System.out.println("string are not palindrome");
		}
	}
}
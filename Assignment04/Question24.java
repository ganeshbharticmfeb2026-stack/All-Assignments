import java.util.Scanner;


class Question24
{
	public static void main(String[] arge)
	{
		Scanner sc = new Scanner(System.in);

		System.out.println("Enter string here");
		String str = sc.next();

		System.out.println("Reverse string :");
		for(int i=str.length()-1;i>=0;i--)
		{
			System.out.print(str.charAt(i));
		}
	}
}
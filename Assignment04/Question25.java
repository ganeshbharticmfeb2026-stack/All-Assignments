import java.util.Scanner;


class Question25
{
	public static void main(String[] arge)
	{
		Scanner sc = new Scanner(System.in);

		System.out.println("Enter string here");
		String str = sc.next();

		int count = 0;
		for(int i=str.length()-1;i>=0;i--)
		{
			char ch = str.charAt(i);
			if( ch == 'A'|| ch == 'E'|| ch == 'I'|| ch == 'O'|| ch == 'U'||
				ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u')
			{
				count++;
			} 
		}
		System.out.println("Vowels count is :"+count);
	}
}
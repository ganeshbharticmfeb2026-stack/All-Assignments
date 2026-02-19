import java.util.Scanner;


class Question08
{
	public static void main(String[] arge)
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("how many name you want enter type in count");
		int count = sc.nextInt();
		
		String names[] = new String[count];
		
		System.out.println("Enter the name here");
		for (int i=0;i<count;i++)
		{
			names[i] = sc.next();
		}

		System.out.println("Names are:");
		for (String name :names)
		{
			System.out.println(name);
		}
	}
}
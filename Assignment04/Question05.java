import java.util.Scanner;

class Question05
{
	public static void main(String arge[])
	{
	Scanner sc = new Scanner(System.in);
	
	System.out.println("Enter number:");
	int num = sc.nextInt();

	
	System.out.println("Odd number is upto 1 to "+num);
	
	for (int i= 1;i<=num;i++)
	{
		if (i%2 != 0)
		{
			System.out.println(i);
		}
	}


	}
}
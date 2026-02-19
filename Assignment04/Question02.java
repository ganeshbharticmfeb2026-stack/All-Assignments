import java.util.Scanner;

class Question02
{
	public static void main(String arge[])
	{
	Scanner sc = new Scanner(System.in);
	
	System.out.println("Enter number:");
	int num = sc.nextInt();
	
	System.out.println("1 to "+num+"multiple by 3");
	for (int i= 1;i<=num;i++)
	{
		System.out.println(i*3);
	}


	}
}
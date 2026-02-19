import java.util.Scanner;

class Question03
{
	public static void main(String arge[])
	{
	Scanner sc = new Scanner(System.in);
	
	System.out.println("Enter number:");
	int num = sc.nextInt();

	int fact = 1;	
	
	for (int i= num;i>0;i--)
	{
		fact = i*fact;
	}
	System.out.println(num+" factorial is "+fact);


	}
}
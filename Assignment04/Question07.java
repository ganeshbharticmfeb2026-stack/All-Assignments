import java.util.Scanner;

class Question07
{
	public static void main(String[] arge)
	{
		Scanner sc = new Scanner(System.in);

		System.out.println("Enter arr size or length here:");
		int size = sc.nextInt();

		int arr[] = new int[size];	
		System.out.println("Enter arr element here:");
		for (int i=0;i<arr.length;i++)
		{
			arr[i] = sc.nextInt();
		}
		
		int sum = 0;
		for (int i=0;i<arr.length;i++)
		{
			sum +=arr[i];
		}
		System.out.println("All elements sum is :"+sum);

	}
}
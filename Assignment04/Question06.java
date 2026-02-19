import java.util.Scanner;

class Question06
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
		
		System.out.println("All arr elements");
		for (int i=0;i<arr.length;i++)
		{
			System.out.println(arr[i]);
		}

	}
}
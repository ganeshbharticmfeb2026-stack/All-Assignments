import java.util.Scanner;


class Question13
{
	public static void main(String[] arge)
	{
		Scanner sc = new Scanner(System.in);

		System.out.println("Enter size of arr");
		int size = sc.nextInt();
	
		int arr[] = new int[size];
	
		System.out.println("Enter Element of arr");
			
		for (int i=0;i<arr.length;i++)
		{
			arr[i] = sc.nextInt();

		}

		System.out.println("enter number you want to find");
		int num = sc.nextInt();
		Boolean temp = false;
		for (int i=0;i<arr.length;i++)
		{
			if (num == arr[i])
			{
				temp = true;
			}
		}
		
		if (temp)
		{
			System.out.println("found...");
		}
		else
		{
			System.out.println("Not found...");
		}

	}
}
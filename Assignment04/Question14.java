import java.util.Scanner;


class Question14
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
		int index = 0;
		for (int i=0;i<arr.length;i++)
		{
			if (num == arr[i])
			{
				temp = true;
				index = i;
				break;
			}
		}
		
		if (temp)
		{
			System.out.println("found and index is "+index);
			
		}
		else
		{
			System.out.println("Not found...");
		}

	}
}
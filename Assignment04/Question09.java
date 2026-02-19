import java.util.Scanner;


class Question09
{
	public static void main(String[] arge)
	{
		Scanner sc = new Scanner(System.in);

		System.out.println("Enter the size of arr");
		int size = sc.nextInt();
		
		int arr[] = new int[size];
	
		System.out.println("Enter the element of arr");
		for(int i=0;i<arr.length;i++)
		{
			arr[i]= sc.nextInt();
		}

		int largestnum = 0;
		
		for (int i=0;i<arr.length;i++)
		{
			if (largestnum <arr[i])
			{
				largestnum = arr[i];
			}
		}
		
		System.out.println("largest number in array is :"+largestnum);
	}
}
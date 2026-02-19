import java.util.Scanner;


class Question11
{
	public static void main(String[] arge)
	{
		Scanner sc = new Scanner(System.in);

		System.out.println("Enter size of arr");
		int size = sc.nextInt();
	
		int arr[] = new int[size];
	
		System.out.println("Enter Element of arr");
		int ecount = 0;
		int ocount = 0;
		
		for (int i=0;i<arr.length;i++)
		{
			arr[i] = sc.nextInt();
			if (arr[i]%2 == 0)
			{
				ecount++;
			}
			else
			{
				ocount++;
			}
			
		}
		
		System.out.println("Even count is : "+ecount+" Odd count is "+ocount);
	}
}
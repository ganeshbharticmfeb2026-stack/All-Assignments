import java.util.Scanner;


class Question12
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

		}

		for (int i=0;i<arr.length;i++)
		{
			for (int j=i+1;j<arr.length;j++)
			{
				 if (arr[i] > arr[j]) 
				{
                  	 		int temp = arr[i];
                    			arr[i] = arr[j];
                    			arr[j] = temp;
                		}
			}
		}

		
		System.out.println("Ascendign order arr:");
		for (int i=0;i<arr.length;i++)
		{
			System.out.println(arr[i]);

		}

	}
}
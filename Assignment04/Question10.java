import java.util.Scanner;


class Question10
{
	public static void main(String[] arge)
	{
		Scanner sc = new Scanner(System.in);

		System.out.println("Enter size of arr");
		int size = sc.nextInt();
	
		int arr[] = new int[size];
	
		System.out.println("Enter Element of arr");
		int sum = 1;
		for (int i=0;i<arr.length;i++)
		{
			arr[i] = sc.nextInt();
			sum +=arr[i];
		}
		
		System.out.println("this average of elelment in array "+(sum/size));
	}
}
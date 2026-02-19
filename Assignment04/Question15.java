class Question15
{
	public static void main(String[] arge)
	{
		for(int i=1;i<=5;i++)
		{
			for(int j=1;j<=i;j++)	
			{
				if (i == j)
				{
					System.out.print(i);
				}
				else
				{
					System.out.print(i+"*");
				}
			}
			System.out.println();
		}
		for(int i=5;i>=1;i--)
		{
			for(int j=0;j<=i;j++)	
			{
				if (i == j)
				{
					System.out.print(i);
				}
				else
				{
					System.out.print(i+"*");
				}
			}
			System.out.println();
		}

	}
}
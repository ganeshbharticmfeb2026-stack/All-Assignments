class Question16
{
	public static void main(String[] arge)
	{
		for(int i=1;i<=5;i++)
		{
			for(int j=1;j<=i;j++)	
			{
				if (i == j)
				{
					System.out.print(j);
				}
				else
				{
					System.out.print(j+"*");
				}
			}
			System.out.println();
		}

	}
	
}
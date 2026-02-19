class Student
{
	int id;
   	String name;
    	char div;
    	static String branch = "Computer";

    
    	Student()
    	{
        	System.out.println("Default Constructor Called");
   	}

	Student(int id,String name,char div)
	{
		System.out.println(id);
		System.out.println(name);	
		System.out.println(div);
	}

	void display()
	{
		System.out.println("Doing study...");
	}
	
}


class Demolab
{
	public static void main(String[] ganesh)
	{

		Student s1 = new Student();
		System.out.println(s1.id);
		System.out.println(s1.name);
		System.out.println(s1.div);
		System.out.println(s1.branch);
		s1.display();
	
		Student s2 = new Student(10,"ganesh",'D');
		
	}
}
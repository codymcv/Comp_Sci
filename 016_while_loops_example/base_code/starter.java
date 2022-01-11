import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// Your code goes below here
	Scanner sc = new Scanner(System.in);
	
	System.out.println("Input a name, any name.");
	String name = sc.nextLine();
	
	System.out.println("How many times would you like it output?");
	int out = sc.nextInt();
	
	int count = 1;
	while(true)
	{
	System.out.println(name);
	if(count == out)
	{
		break;
	}
	count = count + 1;
	}

		
	}
}

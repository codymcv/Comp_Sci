import java.util.Scanner;
import java.util.Random;

class starter {
	
	public static void pow(int one, int two) {
		int three = 1;
		while(true)
		{
			if(two == 0)
			{
				System.out.println(three);
				break;
			}
			two = two - 1;
			three = three * one;
		}
	return;
	}
	//
	public static void main(String args[]) {
	// Your code goes below here
	Scanner sc = new Scanner(System.in);
	//
	System.out.println("Type in a whole number");
	int one = sc.nextInt();
	System.out.println("Type in a second whole number to find the power of the first");
	int two = sc.nextInt();
	
	System.out.println("------------------");
	
	pow(one, two);


		
	}
}

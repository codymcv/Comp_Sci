import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// Your code goes below here
	Scanner sc = new Scanner(System.in);
	
	System.out.println("Guess a number 1-1000");
	int guess = sc.nextInt();
	int secret = 420;
	
	
	while(guess != secret)
	{
		if(guess == secret)
		{
			break;
		}
		System.out.println("Guess again");
		int guess2 = sc.nextInt();
		if(guess2 == secret)
		{
			break;
		}
	}
	System.out.println("Correct!!");

		
	}
}

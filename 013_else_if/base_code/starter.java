import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc = new Scanner (System.in);
		
		System.out.println("Guess a number between 1 and 1000");
		int number = sc.nextInt();
		
		int number1 = 500;
		
		if(number==number1)
		{
			System.out.println("........");
			System.out.println("Correct!");
			System.out.println("yass");
		}
		else if(number>number1)
		{
			System.out.println("Lower");
		}
		else if(number<number1)
		{
			System.out.println("Higher");
		}
	}
}

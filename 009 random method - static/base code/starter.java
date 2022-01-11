import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Random rand = new Random();
		
		int rand_a = rand.nextInt(10);
		System.out.println(rand_a);
		
		int rand_b = rand.nextInt(100) + 1;
		System.out.println(rand_b);
		
		double rand_c = rand.nextDouble() + 2.5;
		System.out.println(rand_c);
		
		double rand_d = rand.nextDouble() + rand.nextInt(575) + 14;
		System.out.println(rand_d);
		
	}
}

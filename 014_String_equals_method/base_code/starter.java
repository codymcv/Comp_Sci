import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		
		Scanner sc = new Scanner (System.in);
		System.out.println("Choose to be a Wizard, Warrior, or a Rogue. (write in all lower case)");
		String character = sc.nextLine();
		
		
		if(character .equals("wizard"))
		{
		System.out.println("You are a " + character);
		String wizard = new String("cool");
		System.out.println(wizard);
		}
		else if (character .equals("warrior"))
		{
		System.out.println("You are a " + character);
		String warrior = new String("great choice");
		System.out.println(warrior);
		}
		else if (character .equals("rogue"))
		{
		System.out.println("You are a " + character);
		String rouge = new String("nice");
		System.out.println(rouge);
		}
		else
		{
		System.out.println("Something is not right, try again");
		}
		
		
	}
}

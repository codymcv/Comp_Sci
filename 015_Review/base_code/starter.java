import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
	Scanner sc = new Scanner (System.in);
	System.out.println("What is your name?");
	String name = sc.nextLine();
		
	System.out.println("What is your Title? ex: Slayer of Dragons");
	String title = sc.nextLine();
	
	System.out.println("Would you like to be a Wizard, Warrior, or Rogue?");
	String character = sc.nextLine();
	System.out.println("You are a " + character);
	
	System.out.println("You have 25 points to spend in the following: Strength, Dexterity, Intelligence, Constitution, and Charisma ");
	System.out.println("Use your points wisley");
	System.out.print("Strength(1-10) : ");
	int s = sc.nextInt();
	
	int max = 25;
	
	int max2 = max - s;
	
	
	if(s < 11 && s>0)
	{
	System.out.println(max2 + " points left");
	System.out.print("Dexterity(1-10) : ");
	}
	else
	{
	System.out.println("Something went wrong, try again.");
	}
	
	int d = sc.nextInt();
	
	int max3 = max2 - d;
	
	if(d < 11 && d > 0)
	{
	System.out.println(max3 + " points left");
	System.out.print("Intelligence(1-10) : ");
	}
	else
	{
	System.out.println("Something went wrong, try again.");
	}
	
	int i = sc.nextInt();
	
	int max4 = max3 - i;
	
	if(i < 11 && i >0)
	{
	System.out.println(max4 + " points left");
	System.out.print("Constitution(1-10) : ");
	}
	else
	{
	System.out.println("Something went wrong, try again.");
	}
	
	int co = sc.nextInt();
	
	int max5 = max4 - co;
	
	if(co < 11 && co >0)
	{
	System.out.println(max5 + " points left");
	System.out.print("Charisma(1-10) : ");
	}
	else
	{
	System.out.println("Something went wrong, try again.");
	}
	
	int ch = sc.nextInt();
	int max6 = max5 - ch;
	
	System.out.println(max6 + " points left over");
	System.out.println("You are all set " + name + ". Your title is " + title + " and you are a " + character + ". Have a great quest.");
	
	
	
	
	}
}

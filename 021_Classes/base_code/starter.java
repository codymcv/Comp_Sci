import java.util.Scanner;
import java.util.Random;

class character{
String role = new String("Wizard");
int Stregth = 5;
int Dexterity = 5;
int Intelligence = 5;
int Constitution = 5;
int Charisma = 5;
}

class starter {
	public static void main(String args[]) {
		// Your code goes below here
	character one = new character();
	character two = new character();
	System.out.println("Your role is " + two.role);
	System.out.println("Your Stregth trait is " + one.Stregth);
	System.out.println("Your Dexterity trait is " + one.Dexterity);
	System.out.println("Your Intelligence trait is " + one.Intelligence);
	System.out.println("Your Constitution trait is " + one.Constitution);
	System.out.println("Your Charisma trait is " + one.Charisma);
	
	
	}
}

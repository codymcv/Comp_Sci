import java.util.Scanner;
import java.util.Random;

class starter {
	
	public static void input(String a){
	String x = a;
	System.out.println(x);
	return;
	
	}
	
	public static void toStringCombined(String a, String b){
	String x = a;
	String y = b;
	System.out.println(x + " " + y);
	return;
	}
	
	public static void main(String args[]) {
		// Your code goes below here
	Scanner sc = new Scanner (System.in);
	
	System.out.println("write a sentence!");
	String text = sc.nextLine();
	System.out.println("write a sentence!");
	String text1 = sc.nextLine();
	
	System.out.println("------------------");
	
	input(text);
	toStringCombined(text, text1);


		
	}
}

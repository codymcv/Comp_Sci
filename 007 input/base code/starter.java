import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc = new Scanner (System.in);
		System.out.println("First Name?");
		String FirstName = sc.nextLine();
		
		System.out.println("Age?");
		String Age = sc.nextLine();
		
		System.out.println("Birthday Month?");
		String BirthdayMonth = sc.nextLine();
		
		System.out.println("Birthday Day?");
		String BirthdayDay = sc.nextLine();
		
		System.out.println("Birthday Year?");
		String BirthdayYear = sc.nextLine();
		
		System.out.println("How much is a buck fifty?");
		String Howmuchisabuckfifty = sc.nextLine();
		
		System.out.println("...");
		
		System.out.println(FirstName + "");
		System.out.println(Age + "");
		System.out.println(BirthdayMonth + "");
		System.out.println(BirthdayDay + "");
		System.out.println(BirthdayYear + "");
		System.out.println(Howmuchisabuckfifty + "");
		
		
		
	}
}

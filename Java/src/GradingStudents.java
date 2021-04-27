import java.util.Scanner;
public class GradingStudents{
	private static final Scanner scan = new Scanner(System.in);
	public static void main(String[] args) {
		int n = scan.nextInt();
		for (int i = 0; i < n; ++i) 
			System.out.println(grade(scan.nextInt()));		
	}

	public static int grade(int mark){
		// int rounded = (mark / 5 + 1) * 5;
		// return (rounded < 40)? mark: (rounded - mark < 3? rounded: mark);
		int diff = 5 - mark % 5;
		int rounded = mark + diff;
		return (diff < 3)? (rounded >= 40? rounded: mark): mark;
	}
}
import java.util.Scanner;

public class Sum {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String word = sc.next();
		String ans = "";
		for (int i = word.length() - 1; i >= 0; i--) {
			ans += word.charAt(i);
		}
		System.out.print(ans);
	}
}
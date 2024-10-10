
import java.util.Scanner;

public class Loli {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int so = sc.nextInt();
        int[] binary = new int[100];  
        int index = 0;

        
        while (so > 0) {
            binary[index++] = so % 2;  
            so = so / 2;  
        }

        
        for (int i = index - 1; i >= 0; i--) {
            System.out.print(binary[i]);
        }
    }
}
		
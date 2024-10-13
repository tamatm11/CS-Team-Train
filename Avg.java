import java.util.Scanner;

public class Avg{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Nhap so phan tu trong manh: ");
        int n = sc.nextInt();
        double sum = 0;
        int[] arr = new int[n];
        
        for (int i = 0; i < n;i++){
            arr[i] = sc.nextInt();
        }
        for (int i = 0; i < n;i++) {
            sum += arr[i];
        }
        sum /= n;
         System.out.print("Trung binh cong cua manh: ");
        System.out.print(sum);

    }
}

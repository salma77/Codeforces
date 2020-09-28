import java.util.Scanner;

public class VanyaFence {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int wid=0;
        int n = s.nextInt();
        int h = s.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = s.nextInt();
        }
        for (int i=0;i<n;i++) {
            if(a[i]>h)
                wid+=2;
            else
                wid++;
        }
        System.out.println(wid);
    }
}

import java.util.*;

public class msoeApr2 {
    public static void main(String[] args) {
        int sum = 0;
        Scanner input = new Scanner(System.in);
        System.out.print("Enter # of vertices: ");
        int vertices = input.nextInt();
        int[] x = new int[vertices];
        int[] y = new int[vertices];
        for (int i = 0; i < vertices; i++) {
            System.out.print("Enter x: ");
            int x1 = input.nextInt();
            x[i] = x1;
            System.out.print("Enter y: ");
            int y1 = input.nextInt();
            y[i] = y1;
        }
        for (int j = 0; j < vertices; j++) {
            if (j != vertices-1)
                sum += x[j]*y[j+1]-x[j+1]*y[j];
            else
                sum += x[j]*y[0]-x[0]*y[j];
        }
        sum /= 2;
        System.out.println("Area of polygon: " + sum);
    }
}
import java.util.ArrayList;
import java.util.Scanner;

public class Project3 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        ArrayList<Student> students = new ArrayList<Student>();

        boolean exit = false;
        boolean exitAdd = false;
        while (!exit) {
            System.out.print("---------OPTIONS---------\n
                              1.............ADD STUDENT\n
                              2............EDIT STUDENT\n
                              3...........QUERY STUDENT\n
                              4....................QUIT\n");
            int choice = input.nextInt();
            if (choice == 1) {
                System.out.print("Enter student name: ");
                String name = input.next();
                while (!exitAdd) {
                    System.out.print("Add course? (y/n)")
                    String choice2 = input.next();
                    if (choice2.equals("y")) {
                        System.out.print("Enter course name: ");
                    }
                }
            }
        }

        

    }
}
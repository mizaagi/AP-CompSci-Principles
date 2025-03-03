import java.util.ArrayList;
import java.util.Scanner;
import Assignment;
import Course;
import Student;

public class Project3 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        ArrayList<Student> students = new ArrayList<Student>();

        boolean exit = false;
        boolean exitAdd = false;
        while (!exit) {
            System.out.print("---------OPTIONS---------\n1.............ADD STUDENT\n2............EDIT STUDENT\n3...........QUERY STUDENT\n4....................QUIT\n");
            int choice = input.nextInt();
            if (choice == 1) {
                System.out.print("Enter student name: ");
                String name = input.next();
                while (!exitAdd) {
                    System.out.print("Add course? (y/n)");
                    String choice2 = input.next();
                    if (choice2.equals("y")) {
                        System.out.print("Enter course name: ");
                        String cName = input.next();
                        Course c = new Course(cName);
                        System.out.print("Enter an assignment name, percentage score, and amount of points (x to continue): ");
                        boolean exitAssignmentAdd = false;
                        while (!exitAssignmentAdd) {
                            String aName = input.next();
                            if (aName.equals("x")) {
                                exitAssignmentAdd = true;
                                break;
                            }
                            double aPerc = input.nextDouble();
                            int aWeight  = input.nextInt();
                            c.addAssignment(aName, aPerc, aWeight);
                        }
                    } exitAdd = true;
                }
            } else if (choice == 2) {

            }
        }
    }
}
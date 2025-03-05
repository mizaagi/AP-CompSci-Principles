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
                    System.out.print("Add course (y/n)? ");
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
                System.out.print("Enter student first name: ");
                String searchName = input.next();
                for (Student s : students) {
                    if (s.getName().equals(searchName)) {
                        System.out.println(s);
                        System.out.print("Enter course name: ");
                        String courseSearchName = input.next();
                        for (Course c : student.getCourses()) {
                            if (c.getCourseName().equals(courseSearchName)) {
                                System.out.print("What would you like to do? (n for name change, a to add an assignment, d to delete an assignment)");
                                String yetAnotherChoice = input.next();
                                if (yetAnotherChoice.equals("n")) {
                                    System.out.print("Enter new name: ");
                                    c.setName(input.next());
                                } else if (yetAnotherChoice.equals("a")) {
                                    System.out.print("Enter assignment details ('name percentage points' format): ");
                                    c.addAssigment(input.next(), input.next(), input.next());
                                } else if (yetAnotherChoice.equals(d)) {
                                    System.out.print("Enter assignment name: ");
                                    String delete = input.next();
                                    c.deleteAssignment(delete);
                                }
                                
                            }
                        }
                    }
                }
            } else if (choice == 3) {
                for (Student s : students) {
                    System.out.println(s);
                }
            } else if (choice == 4) {
                System.exit(0);
            }
        }
    }
}
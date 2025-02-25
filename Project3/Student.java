import java.util.ArrayList;

public class Student {
    private ArrayList<Course> courses;
    private double gpa;
    private String name;

    public Student(String n, ArrayList<Course> c) {
        name = n;
        courses = c;

        preGpa = 0.0;
        numClasses = 0;
        for (Course d : courses) {
            numClasses++;
            preGpa += d.getGrade();
        }
        preGpa /= numClasses;
        gpa = preGpa;
    }
}
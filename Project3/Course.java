import java.util.ArrayList;

public class Course {
    private ArrayList<Assignment> assignments;
    private double grade;
    private int tPoints;
    private String name;

    public Course(String n, ArrayList<Assignment> a) {
        name = n;
        assignments = a;
        tPoints = 0;
        for (Assignment e : assignments) {
            tPoints += e.getWeight();
            grade += e.getScore() * 0.1 * e.getWeight();
        }
        grade /= tPoints;
    }

    public double getGrade()      { return grade;   }
    public int getTotalPoints()   { return tPoints; }
    public String getCourseName() { return name;    }
    public Assignment getAssignment(String n) {
        for (Assignment a : assignments) {
            if (a.getName().equals(n)) return a;
        }
        return new Assignment("NOT AN ASSIGNMENT", 0, 0);
    }
    public void calcGrade() {
        grade = 0.0;
        tPoints = 0;
        for (Assignment e : assignments) {
            tPoints += e.getWeight();
            grade += e.getScore() * 0.1 * e.getWeight();
        }
        grade /= tPoints;
    }
    public void addAssignment(String n, double s, int w) {
        Assignment e = new Assignment(n,s,w);
        assignments.add(e);
        calcGrade();
    }
    


}
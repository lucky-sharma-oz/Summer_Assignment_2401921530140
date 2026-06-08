class Student {
    private String name;
    private int rollNo;
    private double[] marks;

    public Student(String name, int rollNo, double[] marks) {
        this.name   = name;
        this.rollNo = rollNo;
        this.marks  = marks;
    }

    public String getName()   { return name; }
    public int getRollNo()    { return rollNo; }
    public double[] getMarks() { return marks; }

    public void displayGrade() {
        double total = 0;
        for (double m : marks) total += m;
        double avg = total / marks.length;

        String grade;
        if      (avg >= 80) grade = "A";
        else if (avg >= 60) grade = "B";
        else if (avg >= 40) grade = "C";
        else                grade = "F";

        System.out.println("Name: " + name + " | Roll No: " + rollNo);
        System.out.println("Average: " + avg + " | Grade: " + grade);
        System.out.println();
    }
}

public class StudentReportCard {
    public static void main(String[] args) {
        Student s1 = new Student("Alice", 101, new double[]{85, 90, 78});
        Student s2 = new Student("Bob",   102, new double[]{55, 48, 60});

        s1.displayGrade();
        s2.displayGrade();
    }
}

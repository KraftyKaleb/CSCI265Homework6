/*
 * Java portion of Project6
 * CSCI 265
 * Kaleb Gilson - kaleb.gilson@und.edu - 5/07/23
 */
public class HonorPoints {
    //Class variables
    public static final int REQUIRED_CREDITS = 20;
    public static final int NO_GPA = -1;

    //Instance variables
    private String name; // Student's name
    private int totalCredits = 0; // Total credits taken
    private int honorPoints = 0; // Number of honorpoints earned
    private int totalPassedCredits = 0; // Number of credits passed

    public HonorPoints() {
        this.name = "";
    }

    public HonorPoints(String name) {
        this.name = name;
    }

    /**
     * Add a class with a grade to the student
     *
     * @param credits Credit value of the class
     * @param grade Grade the student earned
     */
    public void addClass(int credits, String grade) {
        int multiplier;
        if (grade.equalsIgnoreCase("A")) {
            multiplier = 4;
        } else if (grade.equalsIgnoreCase("B")) {
            multiplier = 3;
        } else if (grade.equalsIgnoreCase("C")) {
            multiplier = 2;
        } else if (grade.equalsIgnoreCase("D")) {
            multiplier = 1;
        } else {
            multiplier = 0;
        }

        honorPoints+=(multiplier*credits);
        totalCredits+=credits;
        if (multiplier != 0) totalPassedCredits+=credits;
    }

    /**
     * Set the name of the student
     *
     * @param name Name to set
     */
    public void setName(String name) {
        this.name = name;
    }

    /**
     * Get the name of the student
     *
     * @return the name of the student
     */
    public String getName() {
        return name;
    }

    /**
     * Get the total credits of the student
     *
     * @return the total credits that the student has
     */
    public int getCredits() {
        return totalCredits;
    }

    /**
     * Get the total honor points the student has
     *
     * @return the total honor points the student has
     */
    public int getHonorPoints() {
        return honorPoints;
    }

    /**
     * Get the total credits that the student has passed
     *
     * @return The total credits that the student has passed
     */
    public int getPassedCredits() {
        return totalPassedCredits;
    }

    /**
     * Get the GPA of the student
     *
     * @return The calculated GPA from the student's honor points divided by total credits.
     */
    public double getGPA() {
        if (totalCredits == 0) return NO_GPA;

        double honorPointsDbl = honorPoints;
        double totalCreditsDbl = totalCredits;
        return (honorPointsDbl / totalCreditsDbl);
    }

    /**
     * Evaluate if this student is better than another.
     *
     * @param otherStudent Student to compare
     * @return boolean if the given student is smarter
     */
    public boolean isSmarter(HonorPoints otherStudent) {
        return otherStudent.getGPA() > this.getGPA();
    }

    /**
     * Evaluates if the student can graduate
     *
     * @return If the student has more passed credits than the requirement.
     */
    public boolean canGraduate() {
        return totalPassedCredits >= REQUIRED_CREDITS;
    }
}

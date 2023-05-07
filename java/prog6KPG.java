/*
 * Java portion of Project6
 * CSCI 265
 * Kaleb Gilson - kaleb.gilson@und.edu - 5/07/23
 */
public class prog6KPG {
    public static void main(String[] args) {
        HonorPoints kaleb = new HonorPoints("Kaleb");
        HonorPoints bob = new HonorPoints("Bob");

        bob.setName("Jeff");
        bob.addClass(4, "A");
        bob.addClass(3, "B");

        System.out.println("Name: " + bob.getName());
        System.out.println("Credits: " + bob.getCredits());
        System.out.println("Passed Credits: " + bob.getPassedCredits());
        System.out.println("Honor Points: " + bob.getHonorPoints());
        System.out.println("GPA: " + bob.getGPA());

        if (bob.isSmarter(kaleb)) {
            System.out.println("Bob is smarter than Kaleb");
        } else {
            System.out.println("Bob is not smarter than Kaleb");
        }

        if (bob.canGraduate()) {
            System.out.println("Bob can graduate!");
        } else {
            System.out.println("Bob is not ready to graduate.");
        }
    }
}


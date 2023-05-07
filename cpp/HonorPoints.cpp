/*
 * C++ portion of Project6
 * CSCI 265
 * Kaleb Gilson - kaleb.gilson@und.edu - 5/07/23
 */

#include <string>
#include "HonorPoints.h"

using namespace std;

    HonorPoints::HonorPoints() {
        this->name = "";
    }

    HonorPoints::HonorPoints(string name) {
        this->name = name;
    }

    /**
     * Add a class with a grade to the student
     *
     * @param credits Credit value of the class
     * @param grade Grade the student earned
     */
    void HonorPoints::addClass(int credits, string grade) {
        int multiplier;
        if (grade == "A") {
            multiplier = 4;
        } else if (grade == "B") {
            multiplier = 3;
        } else if (grade == "C") {
            multiplier = 2;
        } else if (grade == "D") {
            multiplier = 1;
        } else {
            multiplier = 0;
        }

        this->honorPoints += (multiplier * credits);
        this->totalCredits += credits;
        if (multiplier != 0) this->totalPassedCredits += credits;
    }

    /**
     * Set the name of the student
     *
     * @param name Name to set
     */
    void HonorPoints::setName(string name) {
        this->name = name;
    }

    /**
     * Get the name of the student
     *
     * @return the name of the student
     */
    string HonorPoints::getName() {
        return this->name;
    }

    /**
     * Get the total credits of the student
     *
     * @return the total credits that the student has
     */
    int HonorPoints::getCredits() {
        return this->totalCredits;
    }

    /**
     * Get the total honor points the student has
     *
     * @return the total honor points the student has
     */
    int HonorPoints::getHonorPoints() {
        return this->honorPoints;
    }

    /**
     * Get the total credits that the student has passed
     *
     * @return The total credits that the student has passed
     */
    int HonorPoints::getPassedCredits() {
        return this->totalPassedCredits;
    }

    /**
     * Get the GPA of the student
     *
     * @return The calculated GPA from the student's honor points divided by total credits.
     */
    double HonorPoints::getGPA() {
        if (this->totalCredits == 0) return HonorPoints::NO_GPA;

        double honorPointsDbl = this->honorPoints;
        double totalCreditsDbl = this->totalCredits;
        return (honorPointsDbl / totalCreditsDbl);
    }

    /**
     * Evaluate if this student is better than another.
     *
     * @param otherStudent Student to compare
     * @return boolean if the given student is smarter
     */
    bool HonorPoints::isSmarter(HonorPoints otherStudent) {
        return otherStudent.getGPA() > this->getGPA();
    }

    /**
     * Evaluates if the student can graduate
     *
     * @return If the student has more passed credits than the requirement.
     */
    bool HonorPoints::canGraduate() {
        return this->totalPassedCredits >= HonorPoints::REQUIRED_CREDITS;
    }

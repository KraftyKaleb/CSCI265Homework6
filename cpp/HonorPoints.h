/*
 * C++ portion of Project6
 * CSCI 265
 * Kaleb Gilson - kaleb.gilson@und.edu - 5/07/23
 */

#ifndef CPP_HONORPOINTS_H
#define CPP_HONORPOINTS_H

#include <string>

using namespace std;

class HonorPoints {

public:
    static const int REQUIRED_CREDITS = 20;
    static const int NO_GPA = -1;

private:
    string name; // Student's name
    int totalCredits = 0; // Total credits taken
    int honorPoints = 0; // Number of honorpoints earned
    int totalPassedCredits = 0; // Number of credits passed

public:
    HonorPoints();
    HonorPoints(string name);
    void addClass(int credits, string grade);
    void setName(string name);
    string getName();
    int getCredits();
    int getHonorPoints();
    int getPassedCredits();
    double getGPA();
    bool isSmarter(HonorPoints otherStudent);
    bool canGraduate();
};

#endif

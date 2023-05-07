#
# Python portion of Project6
# CSCI 265
# Kaleb Gilson - kaleb.gilson@und.edu - 5/07/23
#

class HonorPoints:
    # Class variables
    REQUIRED_CREDITS = 20
    NO_GPA = -1

    # Instance variables
    def __init__(self, name=None):
        self.name = name
        self.totalCredits = 0
        self.honorPoints = 0
        self.totalPassedCredits = 0

    # Add a class with a grade to the student
    def addClass(self, credits, grade):
        if grade.upper() == "A":
            multiplier = 4
        elif grade.upper() == "B":
            multiplier = 3
        elif grade.upper() == "C":
            multiplier = 2
        elif grade.upper() == "D":
            multiplier = 1
        else:
            multiplier = 0

        self.honorPoints += (multiplier * credits)
        self.totalCredits += credits
        if multiplier != 0:
            self.totalPassedCredits += credits

    # Set the name of the student
    def setName(self, name):
        self.name = name

    # Get the name of the student
    def getName(self):
        return self.name

    # Get the total credits of the student
    def getCredits(self):
        return self.totalCredits

    # Get the total honor points the student has
    def getHonorPoints(self):
        return self.honorPoints

    # Get the total credits that the student has passed
    def getPassedCredits(self):
        return self.totalPassedCredits

    # Get the GPA of the student
    def getGPA(self):
        if self.totalCredits == 0:
            return HonorPoints.NO_GPA
        return self.honorPoints / self.totalCredits

    # Evaluate if this student is better than another.
    def isSmarter(self, otherStudent):
        return self.getGPA() > otherStudent.getGPA()

    # Evaluates if the student can graduate
    def canGraduate(self):
        return self.totalPassedCredits >= HonorPoints.REQUIRED_CREDITS

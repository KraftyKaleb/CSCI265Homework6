/*
 * C++ portion of Project6
 * CSCI 265
 * Kaleb Gilson - kaleb.gilson@und.edu - 5/07/23
 */

#include <iostream>
#include <string>
#include "HonorPoints.h"

using namespace std;

int main() {
    HonorPoints* kaleb = new HonorPoints("Kaleb");
    HonorPoints* bob = new HonorPoints("Bob");

    bob->setName("Jeff");
    bob->addClass(4, "A");
    bob->addClass(3, "B");

    cout << "Name: " << bob->getName() << endl;
    cout << "Credits: " << bob->getCredits() << endl;
    cout << "Passed Credits: " << bob->getPassedCredits() << endl;
    cout << "Honor Points: " << bob->getHonorPoints() << endl;
    cout << "GPA: " << bob->getGPA() << endl;

    if (bob->isSmarter(*kaleb)) {
        std::cout << "Bob is smarter than Kaleb" << endl;
    } else {
        std::cout << "Bob is not smarter than Kaleb" << endl;
    }

    if (bob->canGraduate()) {
        cout << "Bob can graduate!" << endl;
    } else {
        cout << "Bob is not ready to graduate." << endl;
    }

    return 0;
}

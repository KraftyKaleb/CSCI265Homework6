#
# Python portion of Project6
# CSCI 265
# Kaleb Gilson - kaleb.gilson@und.edu - 5/07/23
#

from HonorPoints import HonorPoints

kaleb = HonorPoints("Kaleb")
bob = HonorPoints("Bob")

bob.setName("Jeff")
bob.addClass(4, "A")
bob.addClass(3, "B")

print("Name:", bob.getName())
print("Credits:", bob.getCredits())
print("Passed Credits:", bob.getPassedCredits())
print("Honor Points:", bob.getHonorPoints())
print("GPA:", bob.getGPA())

if bob.isSmarter(kaleb):
    print("Bob is smarter than Kaleb")
else:
    print("Bob is not smarter than Kaleb")

if bob.canGraduate():
    print("Bob can graduate!")
else:
    print("Bob is not ready to graduate.")
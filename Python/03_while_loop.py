name = input("Enter your name: ")
rollNumber = input("Enter your roll number: ")


marks = -1
while(marks>100 or marks <0):
    marks = int(input("Enter marks obtained in Maths: "))
subj1 = marks
marks = -1
while(marks>100 or marks <0):
    marks = int(input("Enter marks obtained in Biology: "))
subj2 = marks
marks = -1
while(marks>100 or marks <0):
    marks = int(input("Enter marks obtained in Chemistry: "))
subj3 = marks
marks = -1
while(marks>100 or marks <0):
    marks = int(input("Enter marks obtained in English: "))
subj4 = marks
marks = -1
while(marks>100 or marks <0):
    marks = int(input("Enter marks obtained in Sindhi: "))
subj5 = marks
totMarks = subj1+subj2+subj3+subj4+subj5
perc = totMarks / 5;
print("perc = ", perc, "%")
age = 66

if(age>50):
    print("You are over the age, Not eligible")
elif(age>=18):
    print("you are eligible")

name = input("Enter your name: ")
rollNumber = input("Enter your roll number: ")
subj1 = int(input("Enter marks obtained in Maths: "))
subj2 = int(input("Enter marks obtained in Biology: "))
subj3 = int(input("Enter marks obtained in Chemistry: "))
subj4 = int(input("Enter marks obtained in English: "))
subj5 = int(input("Enter marks obtained in Sindhi: "))
totMarks = subj1+subj2+subj3+subj4+subj5
perc = totMarks / 5;
print("perc = ", perc, "%")
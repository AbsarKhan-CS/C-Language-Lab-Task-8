# C-Language-Lab-Task-8


Task 1:
Create an int variable age = 20 and a pointer p that points to it.
• Print age and *p.
• Change the age to 21 using only *p.
• Print age again.

Task 2:
Write a function void swap(int *a, int *b). In main, set x = 8 and y = 3, call swap, and print the
values before and after.

Task 3:
Take the array {4, 9, 2, 7, 5}. Using a pointer that moves forward (p++) and no [ ] brackets,
calculate and print the sum and the largest number.

Task 4:
Use a const char * pointer to walk through the text "Hello World 2026" until '\0'. Count the
uppercase letters, lowercase letters, digits, and spaces.

Task 5:
Write int divide(int a, int b, int *result). It stores a / b in *result and returns 0 on success. It returns
-1 if b is zero or if result is NULL. Test all three cases in main.
Hint: Check result == NULL first, so the function never writes through a NULL pointer.

Task 6:
Ask the user for their first name and their roll number. Build a username by joining the first name,
an underscore and the roll number. Print the username and its length.
Requirements
• Use fgets to read both inputs and remove the newline.
• Use strcpy, strcat and strlen.
SAMPLE OUTPUT
Enter first name: Ali
Enter roll number: 1234
Username: Ali_1234
Length: 8

Task 7:
Store the secret code "nu2026" in your program. Ask the user to enter a code. Print "Access
granted" if it matches or "Access denied" if it does not. Then check whether the entered code starts
with "nu" and print the result.
Requirements
• Use strcmp for the full comparison.
• Use strncmp for the "starts with" check.
SAMPLE OUTPUT
Enter code: nu2026
Access granted
Code starts with "nu": Yes

Task 8:
Declare a 2D character array for 5 subjects and read them with fgets. Print the subjects as a numbered
list, then print the subject with the most letters.
Requirements
• Remove the newline from every subject after reading it.
• Use strlen to find the longest subject.

SAMPLE OUTPUT
Enter subject 1: Maths
Enter subject 2: Programming
Enter subject 3: Physics
Enter subject 4: English
Enter subject 5: Calculus
1. Maths
2. Programming
3. Physics
4. English
5. Calculus
Longest subject: Programming

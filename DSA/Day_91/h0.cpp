#include <iostream>
#include <vector>
using namespace std;

struct Student {
string name;
int rollNumber;
string department;
float cgpa;
};

void enterStudentData(vector<Student>& students, int count) {
for (int i = 0; i < count; ++i) {
Student s;
cout << "Enter Name: ";
cin >> ws;
getline(cin, s.name);
cout << "Enter Roll Number: ";
cin >> s.rollNumber;
cout << "Enter Department: ";
cin >> ws;
getline(cin, s.department);
cout << "Enter CGPA: ";
cin >> s.cgpa;
students.push_back(s);
}
}

void displayStudents(const vector<Student>& students) {
cout << "Student Records:\n";
for (const auto& s : students) {
cout << "Name: " << s.name << ", Roll Number: " << s.rollNumber 
    << ", Department: " << s.department << ", CGPA: " << s.cgpa << endl;
}
}

void searchStudent(const vector<Student>& students, int roll) {
for (const auto& s : students) {
if (s.rollNumber == roll) {
cout << "Student Found:\n";
cout << "Name: " << s.name << ", Department: " << s.department << ", CGPA: " << s.cgpa << endl;
return;
}
}
cout << "Student with Roll Number " << roll << " not found.\n";
}

void updateCGPA(vector<Student>& students, int roll, float newCgpa) {
for (auto& s : students) {
if (s.rollNumber == roll) {
s.cgpa = newCgpa;
cout << "CGPA updated successfully for " << s.name << ".\n";
return;
}
}
cout << "Student with Roll Number " << roll << " not found.\n";
}

int main() {
vector<Student> students;
int numStudents;
cout << "Enter information for 3";

cout << " students:\n";
enterStudentData(students, 3);
displayStudents(students);

int searchRoll;
cout << "Enter Roll Number to search: ";
cin >> searchRoll;
searchStudent(students, searchRoll);

int updateRoll;
float newCgpa;
cout << "Enter Roll Number to modify CGPA: ";
cin >> updateRoll;
cout << "Enter new CGPA: ";
cin >> newCgpa;
updateCGPA(students, updateRoll, newCgpa);

cout << "Updated Student Records:\n";
displayStudents(students);

return 0;
}
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Student structure
struct Student {
    int id;
    string name;
    int age;
    float gpa;
};

// Vector to hold students
vector<Student> students;

// Function to add a student (CREATE)
void addStudent() {
    Student s;
    cout << "Enter ID: ";
    cin >> s.id;
    cout << "Enter Name: ";
    cin.ignore(); 
    getline(cin, s.name);
    cout << "Enter Age: ";
    cin >> s.age;
    cout << "Enter GPA: ";
    cin >> s.gpa;

    students.push_back(s);
    cout << "✅ Student added successfully!\n";
}

// Function to view all students (READ)
void viewStudents() {
    if (students.empty()) {
        cout << "⚠️ No students found!\n";
        return;
    }
    cout << "\n--- Student List ---\n";
    for (auto &s : students) {
        cout << "ID: " << s.id << ", Name: " << s.name 
             << ", Age: " << s.age << ", GPA: " << s.gpa << endl;
    }
}

// Function to update a student (UPDATE)
void updateStudent() {
    int id;
    cout << "Enter ID of student to update: ";
    cin >> id;

    bool found = false;
    for (auto &s : students) {
        if (s.id == id) {
            cout << "Editing student: " << s.name << endl;
            cout << "Enter new Name: ";
            cin.ignore();
            getline(cin, s.name);
            cout << "Enter new Age: ";
            cin >> s.age;
            cout << "Enter new GPA: ";
            cin >> s.gpa;

            cout << "✅ Student updated successfully!\n";
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "⚠️ Student with ID " << id << " not found.\n";
    }
}

// Function to delete a student (DELETE)
void deleteStudent() {
    int id;
    cout << "Enter ID of student to delete: ";
    cin >> id;

    for (size_t i = 0; i < students.size(); i++) {
        if (students[i].id == id) {
            cout << "Deleting student: " << students[i].name << endl;
            students.erase(students.begin() + i);
            cout << "✅ Student deleted successfully!\n";
            return;
        }
    }
    cout << "⚠️ Student with ID " << id << " not found.\n";
}

// Main menu
int main() {
    int choice;
    while (true) {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. View Students\n";
        cout << "3. Update Student\n";
        cout << "4. Delete Student\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) addStudent();
        else if (choice == 2) viewStudents();
        else if (choice == 3) updateStudent();
        else if (choice == 4) deleteStudent();
        else if (choice == 5) {
            cout << "Exiting...\n";
            break;
        } else {
            cout << "Invalid choice!\n";
        }
    }
    return 0;
}

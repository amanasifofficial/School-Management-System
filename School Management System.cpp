#include <iostream>
#include <vector>
using namespace std;


class Student {
public:
    int id;
    string name;
    string grade;
    void inputStudent() {
        cout << "Enter Student ID: "; cin >> id;
        cout << "Enter Name: "; cin >> name;
        cout << "Enter Grade: "; cin >> grade;
    }
    void displayStudent() {
        cout << "ID: " << id << " Name: " << name << " Grade: " << grade << endl;
    }
};


class Teacher {
public:
    int id;
    string name;
    string subject;
    void inputTeacher() {
        cout << "Enter Teacher ID: "; cin >> id;
        cout << "Enter Name: "; cin >> name;
        cout << "Enter Subject: "; cin >> subject;
    }
    void displayTeacher() {
        cout << "ID: " << id << " Name: " << name << " Subject: " << subject << endl;
    }
};


class Attendance {
public:
    int studentId;
    string date;
    string status;
    void inputAttendance() {
        cout << "Enter Student ID: "; cin >> studentId;
        cout << "Enter Date (YYYY-MM-DD): "; cin >> date;
        cout << "Enter Status (Present/Absent): "; cin >> status;
    }
    void displayAttendance() {
        cout << "Student ID: " << studentId << " Date: " << date << " Status: " << status << endl;
    }
};


class Fee {
public:
    int studentId;
    double amount;
    string status;
    void inputFee() {
        cout << "Enter Student ID: "; cin >> studentId;
        cout << "Enter Fee Amount: "; cin >> amount;
        cout << "Enter Payment Status (Paid/Pending): "; cin >> status;
    }
    void displayFee() {
        cout << "Student ID: " << studentId << " Fee Amount: " << amount << " Status: " << status << endl;
    }
};

vector<Student> students;
vector<Teacher> teachers;
vector<Attendance> attendanceRecords;
vector<Fee> fees;

void addStudent() {
    Student s;
    s.inputStudent();
    students.push_back(s);
    cout << "Student added successfully!\n";
}

void viewStudents() {
    for (Student s : students) {
        s.displayStudent();
    }
}

void addTeacher() {
    Teacher t;
    t.inputTeacher();
    teachers.push_back(t);
    cout << "Teacher added successfully!\n";
}

void viewTeachers() {
    for (Teacher t : teachers) {
        t.displayTeacher();
    }
}

void addAttendance() {
    Attendance a;
    a.inputAttendance();
    attendanceRecords.push_back(a);
    cout << "Attendance recorded successfully!\n";
}

void viewAttendance() {
    for (Attendance a : attendanceRecords) {
        a.displayAttendance();
    }
}

void addFee() {
    Fee f;
    f.inputFee();
    fees.push_back(f);
    cout << "Fee recorded successfully!\n";
}

void viewFees() {
    for (Fee f : fees) {
        f.displayFee();
    }
}

int main() {
    int choice;
    while (true) {
        cout << "\nSchool Management System";
        cout << "\n1. Add Student";
        cout << "\n2. View Students";
        cout << "\n3. Add Teacher";
        cout << "\n4. View Teachers";
        cout << "\n5. Add Attendance";
        cout << "\n6. View Attendance";
        cout << "\n7. Add Fee Record";
        cout << "\n8. View Fee Records";
        cout << "\n9. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;
        switch (choice) {
            case 1: addStudent(); break;
            case 2: viewStudents(); break;
            case 3: addTeacher(); break;
            case 4: viewTeachers(); break;
            case 5: addAttendance(); break;
            case 6: viewAttendance(); break;
            case 7: addFee(); break;
            case 8: viewFees(); break;
            case 9: return 0;
            default: cout << "Invalid choice! Try again.";
        }
    }
}

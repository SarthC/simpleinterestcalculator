 #include<iostream>
#include<string>
using namespace std;

int main() {
    string student_name;
    int num_subjects;

    cout << "Enter student name: ";
    getline(cin, student_name);

    cout << "Enter number of subjects: ";
    cin >> num_subjects;

    string subject_names[num_subjects];
    int marks[num_subjects];
    int total_marks = 0;

    for (int i = 0; i < num_subjects; i++) {
        cout << "Enter name of subject " << (i + 1) << ": ";
        cin >> subject_names[i];
        cout << "Enter marks for " << subject_names[i] << ": ";
        cin >> marks[i];
        total_marks += marks[i];
    }

    double average_marks = static_cast<double>(total_marks) / num_subjects;

    cout << "---------Student Academic Details---------" << endl;
    cout << "Student Name: " << student_name << endl;
    cout << "Total Marks: " << total_marks << endl;
    cout << "Average Marks: " << average_marks << endl;
    cout << "------------------------------------------" << endl;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollno;
    string name;
    float marks[3];
    float total;
    float perc;
    string result;

public:
    void acceptDetails() {
        cout << "Enter Roll Number: ";
        cin >> rollno;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter marks for 3 subjects: ";
        for (int i = 0; i < 3; i++) {
            cin >> marks[i];
        }
    }

    void calculateResult() {
        total = 0;
        for (int i = 0; i < 3; i++) {
            total += marks[i];
        }
        perc = total / 3.0;

        if (perc >= 60) result = "First Class";
        else if (perc >= 50) result = "Second Class";
        else if (perc >= 40) result = "Pass";
        else result = "Fail";
    }

    void displayDetails() {
        cout << "\n-----Student Details-----" << endl;
        cout << "Roll Number: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: ";
        for (int i = 0; i < 3; i++) {
            cout << marks[i] << " ";}
        cout << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << perc << "%" << endl;
        cout << "Result: " << result << endl;}
};

int main() {
    Student s;
    s.acceptDetails();
    s.calculateResult();
    s.displayDetails();
    return 0;
}
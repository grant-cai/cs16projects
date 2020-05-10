#include <iostream>
using namespace std;

struct UndergradStudents
{
    int studentID;
    string firstName;
    string lastName;
    string major;
    double gpa[4];
};

void printRecords(UndergradStudents *records, int numrecords)
{
    cout << "These are the student records: " << endl;
    for (int i = 0; i < numrecords; i++)
    {
        double avg = 0;
        for (int j = 0; j < 4; j++)
        {
            avg += records[i].gpa[j];
        }
        avg /= 4;
        cout << "ID# " << records[i].studentID << ", ";
        cout << records[i].lastName << ", " << records[i].firstName << ", ";
        cout << "Major: " << records[i].major << ", ";
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        cout << "Average GPA: " << avg << endl;
    }
}

int main()
{
    UndergradStudents ug[3];
    ug[0].studentID = 1;
    ug[0].firstName = "Joe";
    ug[0].lastName = "Shmoe";
    ug[0].major = "EE";
    ug[0].gpa[0] = 3.8;
    ug[0].gpa[1] = 3.3;
    ug[0].gpa[2] = 3.4;
    ug[0].gpa[3] = 3.9;

    ug[1].studentID = 2;
    ug[1].firstName = "Macy";
    ug[1].lastName = "Chen";
    ug[1].major = "CS";
    ug[1].gpa[0] = 3.9;
    ug[1].gpa[1] = 3.9;
    ug[1].gpa[2] = 4.0;
    ug[1].gpa[3] = 4.0;

    ug[2].studentID = 3;
    ug[2].firstName = "Peter";
    ug[2].lastName = "Patrick";
    ug[2].major = "ME";
    ug[2].gpa[0] = 3.8;
    ug[2].gpa[1] = 3.0;
    ug[2].gpa[2] = 2.4;
    ug[2].gpa[3] = 1.9;

    printRecords(ug, 3);

    return 0;
}

#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;

class Student {
public:
    int roll;
    char name[30];
    char division;
    char address[50];

    void setdata() {
        cout << "Enter the following:" << endl;
        cout << "Enter roll no: ";
        cin >> roll;
        cout << "Enter the Name: ";
        cin >> name;
        cout << "Enter the division: ";
        cin >> division;
        cout << "Enter the address: ";
        cin >> address;
    }

    void showdata() {
        cout << "Name: " << name << endl;
        cout << "Roll No.: " << roll << endl;
        cout << "Division: " << division << endl;
        cout << "Address: " << address << endl;
    }
};

void write_record() {
    ofstream outFile;
    outFile.open("student.txt", ios::binary | ios::app);
    if (!outFile) {
        cout << "Error opening file!" << endl;
        return;
    }
    Student obj;
    obj.setdata();
    outFile.write((char*)&obj, sizeof(obj));
    outFile.close();
}

void display() {
    ifstream inFile;
    inFile.open("student.txt", ios::binary);
    if (!inFile) {
        cout << "Error opening file or file does not exist!" << endl;
        return;
    }
    Student obj;
    while (inFile.read((char*)&obj, sizeof(obj))) {
        obj.showdata();
    }
    inFile.close();
}
int search(int n) {
    ifstream inFile;
    inFile.open("student.txt", ios::binary);
    if (!inFile) {
        cout << "Error opening file!" << endl;
        return 0;
    }
    Student obj;
    bool flag = false;
    while (inFile.read((char*)&obj, sizeof(obj))) {
        if (obj.roll == n) {
            flag = true;
            obj.showdata();
            inFile.close();
            return 1;
        }
    }
    inFile.close();
    if (!flag) {
        cout << "Record with roll number " << n << " not found." << endl;
        return 0;
    }
}


void delete_record(int n) {
    Student obj;
    ifstream inFile;
    inFile.open("student.txt", ios::binary);
    if (!inFile) {
        cout << "Error opening file!" << endl;
        return;
    }
    ofstream outFile;
    outFile.open("temp.txt", ios::out | ios::binary);
    if (!outFile) {
        cout << "Error creating temp file!" << endl;
        return;
    }

    bool found = false;
    while (inFile.read((char*)&obj, sizeof(obj))) {
        if (obj.roll != n) {
            outFile.write((char*)&obj, sizeof(obj));
        } else {
            found = true;
        }
    }

    inFile.close();
    outFile.close();

        remove("student.txt");
        rename("temp.txt", "student.txt");

}

int main() {
    int ch;
    do {
        cout << "\n1. Add record";
        cout << "\n2. Display Records";
        cout << "\n3. Search Record";
        cout << "\n4. Delete a Record";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1: {
                cout << "Enter number of records: ";
                int n;
                cin >> n;
                for (int i = 0; i < n; i++) {
                    write_record();
                }
                break;
            }
            case 2:
                cout << "List of Records:" << endl;
                display();
                break;
            case 3: {
                cout << "Enter the roll number to search: ";
                int j;
                cin >> j;
                search(j);
                break;
            }
            case 4: {
                cout << "Enter the roll number to delete: ";
                int k;
                cin >> k;
                delete_record(k);
                break;
            }
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (ch != 4);

    return 0;
}

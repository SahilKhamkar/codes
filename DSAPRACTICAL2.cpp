#include <iostream>
#include <string>
using namespace std;
class telephone {
private:
    long long int key;
    int Hashaddress;
    int x;
    long long int Telephone[10];
    string Name[10];
public:
    telephone() {
        for (int i = 0; i < 10; i++) {
            Telephone[i] = -1;
            Name[i] = "NOT ASSIGNED";
        }
    }
    void insert_lp() {
        cout << "Enter no of records :" << endl;
        cin >> x;
        for (int count = 0; count < x; count++) {
            cout << "Enter telephone no.  :" << endl;
            cin >> key;
            Hashaddress = key % 10;
            if (Telephone[Hashaddress] == -1) {
                Telephone[Hashaddress] = key;
                cout << "Enter name of person :" << endl;
                cin >> Name[Hashaddress];
            } else { // Linear Probing
                int i = 1;
                while ((Hashaddress + i) < 10 && Telephone[Hashaddress + i] != -1) {
                    i++;
                }
                if ((Hashaddress + i) < 10) {
                    Telephone[Hashaddress + i] = key;
                    cout << "Enter name of person :" << endl;
                    cin >> Name[Hashaddress + i];
                } else {
                    cout << "NO SPACE AVAILABLE" << endl;
                }
            }
        }
    }
    void insert_Qp() {
        cout << "Enter no of records :" << endl;
        cin >> x;
        for (int count = 0; count < x; count++) {
            cout << "Enter telephone no.  :" << endl;
            cin >> key;
            Hashaddress = key % 10;
            if (Telephone[Hashaddress] == -1) {
                Telephone[Hashaddress] = key;
                cout << "Enter name of person :" << endl;
                cin >> Name[Hashaddress];
            } else { // Quadratic Probing
                int i = 1;
                Hashaddress =Hashaddress + (i*i);
                while (Telephone[Hashaddress]<10){
                    if (Telephone[Hashaddress]==-1){
                        Telephone[Hashaddress]=key;
                        cout<<"Enter name of person :"<<endl;
                        cin>>Name[Hashaddress];
                        break;
                    }else if(Telephone[Hashaddress]!=-1){
                        i++;
                        Hashaddress=Hashaddress+(i*i);
                    }       
                }  
            }
        }
    }
    void Display() {
        for (int i = 0; i < 10; i++) {
            cout << i << "  >>  " << Name[i] << "  >>  " << Telephone[i] << endl;
        }
    }
};
int main() {
    telephone t;
    int choice;
    do {
        cout << "<------------Enter Choice----------->" << endl;
        cout << " 1.Insert using Linear Probing   " << endl;
        cout << " 2.Insert using Quadratic Probing " << endl;
        cout << " 3.Display  " << endl;
        cout << " 4.Exit " << endl;
        cin >> choice;
        switch (choice) {
        case 1:
            t.insert_lp();
            break;
        case 2:
            t.insert_Qp();
            break;
        case 3:
            t.Display();
            break;
        case 4:
            break;
        default:
            cout << "INVALID CHOICE. TRY AGAIN." << endl;
        }
    } while (choice != 4);
    return 0;
}
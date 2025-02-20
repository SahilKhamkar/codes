// #include<iostream>
// using namespace std;
// template <class T>
// T sum(T a ,T b){
//     cout<<"the value of a is "<<a<<endl;
//     cout<<"the value od b is "<<b<<endl;
//     cout<<"the addition of a and b is : "<<a+b<<endl;
// }
// template <class X>
// X multiply(X a, X b)
// {
//     cout<<"the value of a is "<<a<<endl;
//     cout<<"the value od b is "<<b<<endl;
//     cout<<"the multiplication of a and b is :"<<a*b<<endl;
// }
// template <class V>
// V fun1(V a ){
//     cout<<"the value of a is :"<<a<<endl;
// }
// template <class D , class F>
// D fun1(D b, F c){
//     cout<<"the value of b  is  :"<<b<<" and c is :"<<c<<endl;
// }
// template <class S>
// S fun(S a , S b){
//     cout<<"the value of a*b is :"<<a*b<<endl;
//     return a*b;
// }
// template <class Y , class Z>
// Y fun(Y b, Z c){
//     cout<<"the value of b+c  is  :"<<b+c<<endl;
//     return b+c;
// }
// int main(){
//     sum(10,20);
//     sum(40,50);
//     sum(2.3,5.2);
//     multiply(10,50);
//     fun1(55);
//     fun1(22,63);
//     fun(10,20);
//     fun(20,30);


//     return 0;
// }


/* write a program to comparision of two number using template */

//#include<iostream>
//using  namespace std ;
// template<class M>
// M compare(M a, M b){
//     if(a>b){
//         cout<<"the num 1 is greather than num 2"<<endl;
//     }
//      else if (a==b){
//         cout<<"the num 1 and num 2 is equal"<<endl;
//     }
//     else
//     {
//         cout<<"the num 2 is greather than num 1 "<<endl;
//     }
// }

// int main ()
// {
//      sum(10,20);
//     sum(40,50);
//     sum(2.3,5.2);
//     multiply(10,50);
//     fun1(55);
//     fun1(22,63);
//     fun(10,20);
//     fun(20,30);

//     cout<<" \n first comparision = compare(10,20) "<<endl;
//     compare(10,20);
//     cout<<"\n second comparision = compare(15,15) "<<endl;
//     compare(15,15);
//     cout<<" \n third comparision  = compare(2,5) "<<endl;
//     compare(2,5);

//     return 0;
// }

// /*  */


// #include <iostream> 
// using namespace std; 
// class student 
// { 
//     int Rollno ; 
//     char name[30],dob[20],class_name[10],div[10],Dlincence[15],blood_grp[10],
// tele_no[10]; 
//     public: 
//     void accept(); 
//     void display(); 
// }; 
// void student::accept() 
// { 
//     cout<<"Students Database:"<<endl; 
//     cout<<"Enter the Name :"; 
//     cin>>name; 
//     cout<<"Enter the Roll no :"; 
//     cin>>Rollno; 
//     cout<<"Enter the Date of birth :"; 
//     cin>>dob; 
//     cout<<"Enter the Class : "; 
//     cin>>class_name; 
//     cout<<"Enter the Division :"; 
//     cin>>div; 
//     cout<<"Enter the Telephone number :"; 
//     cin>>tele_no; 
//     cout<<"Enter the Driving Linesence NO :"; 
//     cin>>Dlincence; 
//     cout<<"Enter the Blood group  :"; 
//     cin>>blood_grp; 
//     cout<<"\n"<<endl; 
 
// } 
// void student::display() 
// { 
//     cout<<"Students Details:"<<endl; 
//    cout<<" Name of student is:"<<name<<endl; 
//    cout<<"Roll no of students is:"<<Rollno<<endl; 
//    cout<<"Birth date of student is :"<<dob<<endl; 
//    cout<<"Class of student :"<<class_name<<endl; 
//    cout<<"Division of student is:"<<div<<endl; 
//    cout<<"Telephone no of students is:"<<tele_no<<endl; 
//    cout<<"Driving Linesence No student:"<<Dlincence<<endl; 
//    cout<<" Blood group of student is :"<<blood_grp<<endl; 
// } 
// int main(){ 
//     int i; 
//     student s[3]; 
//     for(i=0;i<3;i++) 
//     { 
//         s[i].accept(); 
         
//     } 
//      for(i=0;i<3;i++)
//         { 
//         s[i].display(); 
         
//     } 
//     return 0; 
    
// } 


// #include<iostream> 
// using namespace std; 
 
// class Publication { 
// public: 
//     string title; 
//     float price; 
 
//     void getdata() { 
//         cout << "Enter the title of Publication: "; 
//         cin>> title; 
//         cout << "Enter the price of publication: "; 
//         cin >> price; 
//     } 
 
//     void putdata() const { 
//         cout << "Title of publication: " << title << endl; 
//         cout << "Price of publication: " << price <<endl; 
//     } 
// }; 
// class book : public Publication { 
// public: 
//     int page_count; 
 
//     void getdata() { 
//         Publication::getdata();   
//         cout << "Enter the page_count of the book: "; 
//         cin >> page_count; 
//     } 
 
//     void putdata() const { 
//         Publication::putdata();   
//         cout << "Page count of the book: " << page_count << " pages" << 
// endl; 
//     } 
// }; 
 
// class tape : public Publication { 
// public: 
//     float playing_me; 
 
//     void getdata() { 
//         Publication::getdata();   
//         cout << "Enter the playing me of the audiobook (in minutes): "; 
//         cin >> playing_me; 
//     } 
 
//     void putdata() const { 
//         Publication::putdata();   
//         cout << "Playing me of the audiobook: " << playing_me << " minutes" << endl; 
//     } 
// }; 
 
// int main() { 
//     book b; 
//     cout << "\nEnter details for the book:\n"; 
//     b.getdata(); 
//     cout << "\nDetails of the book:\n"; 
//     b.putdata(); 
//     tape t; 
//     cout << "\nEnter details for the audiobook:\n"; 
//     t.getdata(); 
//     cout << "\nDetails of the audiobook:\n"; 
//     t.putdata(); 
 
//     return 0; 
// }

// #include <iostream> 
// using namespace std; 
// class complex 
// { 
//     float real, img; 
 
// public: 
//     complex operator+(complex); 
//     complex operator*(complex); 
//     friend ostream &operator<<(ostream &, complex &); 
//     friend istream &operator>>(istream &, complex &); 
// }; 
// complex complex ::operator+(complex c2) 
// { 
//     complex c3; 
//     c3.real = real + c2.real; 
//     c3.img = img + c2.img; 
//     return c3; 
// } 
// complex complex ::operator*(complex c2) 
// { 
//     complex c3; 
//     c3.real = real * c2.real - img * c2.img; 
//     c3.img = real * c2.img + img * c2.real; 
//     return c3; 
// } 
// ostream &operator<<(ostream &out, complex &c) 
// { 
//     out << c.real << " + " << c.img << "i" << endl; 
//     return out; 
// } 
// istream &operator>>(istream &in, complex &c) 
// { 
//     cout << "Enter the Real part :"; 
//     in >> c.real; 
//     cout << "Enter the imgainary part : "; 
//     in >> c.img; 
//     return in; 
// } 
 
// int main() 
// { 
//     complex c1, c2, c3; 
//     cout << "Enter the first complex number :" << endl; 
//     cin >> c1; 
//     cout << "Enter the second complex number : " << endl; 
//     cin >> c2; 
//     c3 = c1 + c2; 
//     cout << "Sum Of complex number is : " << c3 << endl; 
//     c3 = c1 * c2; 
//     cout << "Mul plica on of complex number is : " << c3 << endl; 
//     return 0; 
// }25




// #include<iostream>
// using namespace std;

// struct student{
//     int roll_no;
//     char name;

// };
// int main()
// {
//     struct student student1;

//     cout<<"student 1 roll no :"<<endl;
//     cin>>student1.roll_no;
//     cout<<"student name :"<<endl;
//     cin>>student1.name;
   

//     return 0;
// }
#include <iostream> 
using namespace std; 
 
class slot 
{ 
public: 
    int startTime, endTime, min, max; 
    bool status; 
    slot *next; 
    slot(int start, int end, int min, int max) 
    { 
        startTime = start; 
        endTime = end; 
        this->min = min; 
        this->max = max; 
        status = 0; 
        next = NULL; 
    } 
}; 
 
slot *head; 
 
void display() 
{ 
    cout << "Sr.No.\tStartTime  EndTime\tMin\tMax\tStatus" << endl; 
    int i = 1; 
    slot *temp = head; 
    while (temp != NULL) 
    { 
        cout << i << "\t" << temp->startTime << "\t" << temp->endTime << "\t" 
<< temp->max << "\t" << temp->min << "\t"; 
        if (temp->status == 0) 
        { 
            cout << "-Free-" << endl; 
        } 
        else 
        { 
            cout << "Booked" << endl; 
        } 
        i++; 
        temp = temp->next; 
    } 
} 
 
void bookAppointment() 
{ 
    int start; 
    cout << "Enter the StartTime for booking appointment: "; 
    cin >> start; 
    slot *temp = head; 
    while (temp != NULL) 
    { 
        if (temp->startTime == start) 
        { 
 
            if (temp->status == 0) 
            { 
                temp->status = 1; 
                cout << "Slot Booked Successfully!!!" << endl; 
                break; 
            } 
            else if (temp->status == 1) 
            { 
                cout << "Sorry, Slot is already Booked!!!" << endl; 
                break; 
            } 
        } 
        temp = temp->next; 
    } 
} 
 
void cancelAppointment() 
{ 
    int start; 
    cout << "Enter the StartTime to Cancel appointment: "; 
    cin >> start; 
    slot *temp = head; 
    while (temp != NULL) 
    { 
        if (temp->startTime == start) 
        { 
 
            if (temp->status == 1) 
            { 
                temp->status = 0; 
                cout << "Slot Cancelled Successfully!!!" << endl; 
                break; 
            } 
            else if (temp->status == 0) 
            { 
                cout << "Sorry, Slot is already Free!!!" << endl; 
                break; 
            } 
        } 
        temp = temp->next; 
    } 
} 
 
void sortAppointments() 
{ 
    slot *temp = head; 
    while (temp->next != NULL) 
    { 
        slot *current = temp->next; 
        while (current != NULL) 
        { 
 
            if (current->startTime < temp->startTime) 
            { 
                int val; 
                val = current->startTime; 
                current->startTime = temp->startTime; 
                temp->startTime = val; 
 
                val = current->endTime; 
                current->endTime = temp->endTime; 
                temp->endTime = val; 
 
                val = current->min; 
                current->min = temp->min; 
                temp->min = val; 
 
                val = current->max; 
                current->max = temp->max; 
                temp->max = val; 
 
                bool stat = current->status; 
                current->status = temp->status; 
                temp->status = stat; 
            } 
            current = current->next; 
        } 
        temp = temp->next; 
    } 
    cout << "Slots Sorted Successfully!!!" << endl; 
    display(); 
} 
 
int main() 
{ 
    int n; 
    cout << "Enter the no. of Slots for Today: "; 
    cin >> n; 
    for (int i = 0; i < n; i++) 
    { 
        int start, end, min, max; 
        cout << "\n\nEnter the Start Time for the slot: "; 
        cin >> start; 
        cout << "Enter the End Time for the slot: "; 
        cin >> end; 
        cout << "Enter the Max Duration: "; 
        cin >> max; 
        cout << "Enter the min Duration: "; 
        cin >> min; 
        slot *newSlot = new slot(start, end, min, max); 
        if (head == NULL) 
        { 
            head = newSlot; 
        } 
        else 
        { 
            slot *temp = head; 
            while (temp->next != NULL) 
            { 
                temp = temp->next; 
            } 
            temp->next = newSlot; 
        } 
    } 
    display(); 
    char cont = 'y'; 
    int choice; 
    while (cont == 'y') 
    { 
        cout << "-------------------------------------------------------"; 
        cout << "\n<----Menu---->" << endl; 
        cout << "1.Dispaly Appointment List" << endl; 
        cout << "2.Book Appointment" << endl; 
        cout << "3.Cancel Appointment" << endl; 
        cout << "4.Sort Appointment" << endl; 
        cout << "Enter the choice: "; 
        cin >> choice; 
        switch (choice) 
        { 
        case 1: 
            display(); 
            break; 
        case 2: 
            bookAppointment(); 
            break; 
        case 3: 
            cancelAppointment(); 
            break; 
        case 4: 
            sortAppointments(); 
            break; 
        default: 
            cout << "INvalid Choice!!!" << endl; 
        } 
        cout << "Do you want to continue? (y/n): "; 
        cin >> cont; 
    } 
    cout << "Program Ended Successfully!!!" << endl; 
    return 0; 
} 
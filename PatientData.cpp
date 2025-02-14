#include<iostream>
using namespace std;

class patient {
    int age, billingamount;
    string Date_of_Appointment; 
public:
    patient() : age(100), billingamount(0), Date_of_Appointment("N/A") {} 
    patient(float a, int bill, string date) : age(a), billingamount(bill), Date_of_Appointment(date) {} 
    patient(patient &p) : age(p.age), billingamount(p.billingamount), Date_of_Appointment(p.Date_of_Appointment) {}

    void display() {
        cout << "Age: " << age << ", Billing Amount: " << billingamount << ", Date of Appointment: " << Date_of_Appointment << endl;
    }
};

int main() {
    patient A(27, 500, "2023-10-01");
    patient B(A);
    patient C = A;
    patient D;

    cout << "\nDetails of A:"; A.display();
    cout << "\nDetails of B:"; B.display();
    cout << "\nDetails of C:"; C.display();
    cout << "\nDetails of D:"; D.display();

    return 0;
}

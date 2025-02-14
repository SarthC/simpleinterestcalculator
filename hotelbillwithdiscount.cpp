
#include<iostream>
#include<string>
using namespace std;

int main() {
    string cust_name;
    int roomtype, no_of_days;
    double price = 0.0, Total = 0.0, rate = 0.0,finalbill=0.0; // Declare rate

    cout << "__________WELCOME___________" << endl;
    cout << "Room Type:" << endl
         << "1. Non AC : 1000" << endl
         << "2. AC : 1500" << endl
         << "3. Deluxe : 2000" << endl;

    cout << "Customer name: ";
    getline(cin, cust_name);

    cout << "Select Room Type (1-3): ";
    cin >> roomtype;

    cout << "No: of days stayed: ";
    cin >> no_of_days;

    switch (roomtype) {
        case 1:
            rate = 1000.0;
            break;
        case 2:
            rate = 1500.0;
            break;
        case 3:
            rate = 2000.0;
            break;
        default:
            cout << "Invalid room type" << endl;
            return 1;
    }

    Total = no_of_days * rate; // Use rate for calculation
    if(Total>1500){
        finalbill= Total-(Total*0.10);
    }
    else{
        finalbill= Total;
    }

    

    cout << "---------Hotel Bill---------" << endl;
    cout << "Customer name: " << cust_name << endl;
    cout << "No of days Stayed: " << no_of_days << endl;
    cout << "Total bill: " << Total << endl;
    cout<<"Final Bill after discount: "<<finalbill<<endl;
    cout << "---THANK YOU---" << endl;

    return 0;
}

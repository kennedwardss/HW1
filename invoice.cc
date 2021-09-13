//*******************************************************************
//
// program: invoice.cc
//
// name:    Kendall Edwards
// date:    09/11/2021
// email:   ke484217@ohio.edu
//
// Description: This program is a submission for HW1.
//
//*******************************************************************

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;


 int main () {

     // Declaring Variables
     char monitor_type;
     int quantity;
     string s;
     s = "Samsung";
     string v;
     v = "ViewSonic";

     int samsung_price;
     int Viewsonic_price;

     char Ohio_Resident;
     string y;
     y = "yes";
     string n;
     n = "no";

     int samsung_total_price;
     int Viewsonic_total_price;

    double Discount;
    Discount = 0.05;

    double Viewsonic_subtotal;
    double Samsung_subtotal;

    
    // Monitor Type (Samsung or ViewSonic)
     cout << "Enter a monitor type (s, v) followed by the quantity: " << endl; 
     cin >> monitor_type;
    

        if (monitor_type == 's') {
            cout << "Monitor Brand: Samsung";
        }  else if (monitor_type == 'v') {
            cout << endl << "Monitor Brand: ViewSonic" << endl;
    }
    // quantity of monitors
    cin >> quantity;

        if (quantity >= 0) {
            cout << endl << "Quantity: "<< quantity << endl;
        }

    //Price of monitor: Samsung ($190) ViewSonic ($170)

    samsung_price = 190;
    Viewsonic_price = 170;

        if (monitor_type == 's') {
             cout << endl << "Price: " << samsung_price << endl;
     }     else if (monitor_type == 'v') {
            cout << endl << "Price: " << Viewsonic_price << endl;
     }

    // Ohio Resident Status
    cout << endl << "Do you live in Ohio (y/n)?: " << endl; 
    cin >> Ohio_Resident;

     if (Ohio_Resident == 'y') {
             cout << endl << "Ohio Resident: yes" << endl;
     }     else if (Ohio_Resident == 'n') {
            cout << endl << "Ohio Resident: no" << endl;
     }

    // Total Price Calculations

    samsung_total_price = samsung_price * quantity;
    Viewsonic_total_price = Viewsonic_price * quantity;

    if (monitor_type == 's') {
             cout << endl << "Total Price: " << samsung_total_price << endl;
     }     else if (monitor_type == 'v') {
            cout << endl << "Total Price: " << Viewsonic_total_price << endl;
     }

     // Discount
    
    if (quantity >= 3 && monitor_type == 'v') {
        cout << endl << "Discount: " << Viewsonic_total_price * Discount << endl;
    }  else if (quantity >= 3 && monitor_type == 's') {
        cout << endl << "Discount: " << samsung_total_price * Discount << endl;
    }
 
    // Subtotals

    Viewsonic_subtotal = Viewsonic_total_price - (Viewsonic_total_price * Discount);
    
    if (monitor_type == 'v') {
        cout << endl << "Subtotal: " << Viewsonic_subtotal << endl;
    }

    Samsung_subtotal = samsung_total_price - (samsung_total_price * Discount);

    if (monitor_type == 's') {
        cout << endl << "Subtotal: " << Samsung_subtotal << endl;
    }

 } 
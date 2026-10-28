


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Variables
    string studentNumber;
    string studentName;
    int membershipCode;
    int months;
    char assessmentChoice;

    double monthlyFee = 0;
    double subtotal;
    double discount = 0;
    double assessmentFee = 0;
    double finalAmount;

    // Constants
    const double BASIC_ACCESS = 220.00;
    const double ACTIVE_PLUS = 350.00;
    const double COMPLETE_WELLNESS = 480.00;

    cout << "===== VukaFit Membership Quotation =====" << endl;

    // Input student details
    cout << "Enter Student Number: ";
    cin >> studentNumber;

    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, studentName);

    // Membership code
    cout << endl;
    cout << "Membership Options" << endl;
    cout << "1. Basic Access (R220)" << endl;
    cout << "2. Active Plus (R350)" << endl;
    cout << "3. Complete Wellness (R480)" << endl;

    cout << "Enter Membership Code: ";
    cin >> membershipCode;

    // Validate Membership Code
    if (membershipCode < 1 || membershipCode > 3)
    {
        cout << "Invalid Membership Code!" << endl;
        return 0;
    }

    // Set monthly fee
    if (membershipCode == 1)
    {
        monthlyFee = BASIC_ACCESS;
    }
    else if (membershipCode == 2)
    {
        monthlyFee = ACTIVE_PLUS;
    }
    else
    {
        monthlyFee = COMPLETE_WELLNESS;
    }

    // Months
    cout << "Enter Number of Months (1 - 6): ";
    cin >> months;

    // Validate months
    if (months < 1 || months > 6)
    {
        cout << "Invalid Month Value!" << endl;
        return 0;
    }

    // Fitness assessment
    cout << "Do you want a Fitness Assessment? (Y/N): ";
    cin >> assessmentChoice;

    // Subtotal
    subtotal = monthlyFee * months;

    // Discount calculation
    if (months >= 3 && months <= 5)
    {
        discount = subtotal * 0.07;
    }
    else if (months == 6)
    {
        discount = subtotal * 0.12;
    }

    // Assessment fee
    if (assessmentChoice == 'Y' || assessmentChoice == 'y')
    {
        assessmentFee = 180;
    }

    // Final amount
    finalAmount = subtotal - discount + assessmentFee;

    // Output
    cout << fixed << setprecision(2);

    cout << "\n===== QUOTATION =====" << endl;
    cout << "Student Number : " << studentNumber << endl;
    cout << "Student Name   : " << studentName << endl;
    cout << "Monthly Fee    : R" << monthlyFee << endl;
    cout << "Months         : " << months << endl;
    cout << "Subtotal       : R" << subtotal << endl;
    cout << "Discount       : R" << discount << endl;
    cout << "Assessment Fee : R" << assessmentFee << endl;
    cout << "Final Amount   : R" << finalAmount << endl;

    return 0;
}


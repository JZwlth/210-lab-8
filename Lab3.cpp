
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    //Set the constant variable for each item price and tax rate.
    const double TABLE_PRICE = 429.88;
    const double DELL_AIO_PRICE = 1001.00;
    const double IMAC_PRICE = 1299.00;
    const double MEETING_OWL_3_PRICE = 1049.00;
    const double MEETING_OWL_HQ_PRICE = 1817.93;
    const double TAX_RATE = 0.0913;

    //Set the quantity for each item
    int qtyTables, qtyDellAIO, qtyiMac, qtyMeetingOwl3, qtyMeetingOwlHQ;
    //Set subtotal, tax and total
    double subtotal, tax, total;

    //Prompt the user and input for the quantity of each item ordered.
    cout << "How many 24 x 72 inch tables ordered? ";
    cin >> qtyTables;
    cout << "How many Dell All-in-One Thin Clients ordered? ";
    cin >> qtyDellAIO;
    cout << "How many Apple iMac computers? ";
    cin >> qtyiMac;
    cout << "How many Meeting Owl 3 ordered? ";
    cin >> qtyMeetingOwl3;
    cout << "How many Meeting Owl HQ devices ordered? ";
    cin >> qtyMeetingOwlHQ;

    // Calculation subtotal of the bill
    subtotal = (qtyTables * TABLE_PRICE) + (qtyDellAIO * DELL_AIO_PRICE) + (qtyiMac * IMAC_PRICE) +
               (qtyMeetingOwl3 * MEETING_OWL_3_PRICE) + (qtyMeetingOwlHQ * MEETING_OWL_HQ_PRICE);
    //Calculation tax on this subtotal
    tax = subtotal * TAX_RATE;
    //Calculation total of subtotal plus tax
    total = subtotal + tax;

    // Make sure variable has 2 decimal points
    cout << fixed << setprecision(2);
    cout << "QTY  Description                  Unit Price      Total Price" << endl;
    //subtotal for each item
    //Use setw() and space to lined up decimal points
    cout << setw(3) << qtyTables << "  TABLES 24 X 72 INCH            " << setw(7) << TABLE_PRICE << "       " << setw(9) << qtyTables * TABLE_PRICE << endl;
    cout << setw(3) << qtyDellAIO << "  DELL ALL-IN-ONE THIN CLIENTS   " << setw(7) << DELL_AIO_PRICE << "       " << setw(9) << qtyDellAIO * DELL_AIO_PRICE << endl;
    cout << setw(3) << qtyiMac << "  APPLE iMac 24-inch             " << setw(7) << IMAC_PRICE << "       " << setw(9) << qtyiMac * IMAC_PRICE << endl;
    cout << setw(3) << qtyMeetingOwl3 << "  MEETING OWL 3                  " << setw(7) << MEETING_OWL_3_PRICE << "       " << setw(9) << qtyMeetingOwl3 * MEETING_OWL_3_PRICE << endl;
    cout << setw(3) << qtyMeetingOwlHQ << "  MEETING OWL HQ                 " << setw(7) << MEETING_OWL_HQ_PRICE << "       " << setw(9) << qtyMeetingOwlHQ * MEETING_OWL_HQ_PRICE << endl;
    cout << endl;
    //subtotal of the bill
    cout << "                    SUBTOTAL      " << setw(9) << subtotal << endl;
    //tax on this subtotal
    cout << "                         TAX      " << setw(9) << tax << endl;
    //total of subtotal plus tax
    cout << "                       TOTAL      " << setw(9) << total << endl;

    cout << endl;

    return 0;
}


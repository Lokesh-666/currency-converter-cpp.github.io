// Ask user for what currency conversion they want to convert from and to
// Ask for amount
// Convert amount
// Print the amount with new currency name
// Important Note: We have used random changing factors for now

#include <iostream>
#include <string>
using namespace std;

// Print all available currencies
void print_all_currency(){
    cout << "1. USD\n";
    cout << "2. EUR\n";
    cout << "3. GBP\n";
    cout << "4. AUD\n";
    cout << "5. CAD\n";
    cout << "6. JPY\n";
    cout << "7. CNY\n";
    cout << "8. KRW\n";
    cout << "9. HKD\n";
    cout << "10. INR\n";
}

// Return the name of the currency based on its index
string currency(int index){
    switch(index){
        case 1: return "USD";
        case 2: return "EUR";
        case 3: return "GBP";
        case 4: return "AUD";
        case 5: return "CAD";
        case 6: return "JPY";
        case 7: return "CNY";
        case 8: return "KRW";
        case 9: return "HKD";
        case 10: return "INR";
        default: return "Invalid currency";
    }
}

// Convert currency from one type to another
double change_currency(int from, int to, double amount){
    // Conversion factors: USD, EUR, GBP, AUD, CAD, JPY, CNY, KRW, HKD, INR
    double conversion_factors[10][10] = {
        {1.0, 0.74, 0.64, 0.71, 0.63, 109.62, 6.45, 1167.15, 7.77, 73.58},  // USD to others
        {1.35, 1.0, 0.86, 0.96, 0.85, 148.36, 8.72, 1575.67, 10.52, 99.74}, // EUR to others
        {1.56, 1.17, 1.0, 1.12, 0.98, 172.44, 10.12, 1828.60, 12.21, 115.95}, // GBP to others
        {1.41, 1.04, 0.89, 1.0, 0.88, 153.79, 9.02, 1629.67, 10.88, 103.42}, // AUD to others
        {1.59, 1.18, 1.02, 1.14, 1.0, 174.96, 10.26, 1852.68, 12.36, 117.53}, // CAD to others
        {0.0091, 0.0067, 0.0058, 0.0065, 0.0057, 1.0, 0.0587, 10.59, 0.0707, 0.67}, // JPY to others
        {0.16, 0.11, 0.099, 0.11, 0.098, 17.03, 1.0, 179.80, 1.21, 11.46}, // CNY to others
        {0.00086, 0.00063, 0.00055, 0.00061, 0.00054, 0.094, 0.0056, 1.0, 0.0067, 0.064}, // KRW to others
        {0.13, 0.095, 0.082, 0.092, 0.081, 14.20, 0.83, 149.06, 1.0, 9.53}, // HKD to others
        {0.014, 0.010, 0.0086, 0.0097, 0.0085, 1.49, 0.087, 15.59, 0.10, 1.0} // INR to others
    };

    // Validate indices
    if (from < 1 || from > 10 || to < 1 || to > 10) {
        cout << "\nPlease select a valid currency\n";
        return 0.0;
    }

    // Convert the amount
    return amount * conversion_factors[from-1][to-1];
}

int main(){
    int from, to;
    double amount;

    cout << "==========================================";
    cout << "\nWelcome to Currency Converter:\n";
    cout << "==========================================\n";
    print_all_currency();
    cout << "\nPlease select the currency you want to convert from: \n";
    cin >> from;
    cout << "\nPlease select the currency you want to convert to: \n";
    cin >> to;
    
    cout << "\nPlease enter the amount you want to convert: \n";
    cin >> amount;

    double converted_amount = change_currency(from, to, amount);

    if (converted_amount != 0.0) {
        cout << "The Amount " << amount << " converted from " << currency(from) 
             << " to " << currency(to) << " is: " << converted_amount << endl;
    }

    return 0;
}

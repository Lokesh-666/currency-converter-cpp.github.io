// Ask user for what currency conversion they want to convert from and to
// Ask for amount
// Convert amount
// Print the amount with new currency name
// Important Note: We have used random changing factors for now

#include <iostream>
#include <string>
using namespace std;
void print_all_currency(){
    cout<<"1. USD\n";
    cout<<"2. EUR\n";
    cout<<"3. GBP\n";
    cout<<"4. AUD\n";
    cout<<"5. CAD\n";
    cout<<"6. JPY\n";
    cout<<"7. CNY\n";
    cout<<"8. KRW\n";
    cout<<"9. HKD\n";
    cout<<"10. INR\n";
}
string currency(int index){
    switch(index){
        case 1:
        return "USD";
        break;
        case 2:
        return "EUR";
        break;
        case 3:
        return "GBP";
        break;
        case 4:
        return "AUD";
        break;
        case 5:
        return "CAD";
        break;
        case 6:
        return "JPY";
        break;
        case 7:
        return "CNY";
        break;
        case 8:
        return "KRW";
        break;
        case 9:
        return "HKD";
        break;
        case 10:
        return "INR";
        break;
        default:
        return "\nPlease select a valid currency\n";
        break;
    }
}
int change_currency(int from, int to, int amount){
int new_amount = 0;
    switch(from){
        case 1:
        {switch(to){
            case 1:
            new_amount = amount;
            break;
            case 2:
            new_amount = amount * 0.74;
            break;
            case 3:
            new_amount = amount * 0.64;
            break;
            case 4:
            new_amount = amount * 0.71;
            break;
            case 5:
            new_amount = amount * 0.63;
            break;
            case 6:
            new_amount = amount * 0.009;
            break;
            case 7:
            new_amount = amount * 0.15;
            break;
            case 8:
            new_amount = amount * 0.06;
            break;
            case 9:
            new_amount = amount * 0.01;
            break;
            case 10:
            new_amount = amount * 0.01;
            break;
            default:
            cout<<"\nPlease select a valid currency\n";
            break;
            }
            }
        break;
        case 2:
        {switch(to){
            case 1:
            new_amount = amount;
            break;
            case 2:
            new_amount = amount * 0.74;
            break;
            case 3:
            new_amount = amount * 0.64;
            break;
            case 4:
            new_amount = amount * 0.71;
            break;
            case 5:
            new_amount = amount * 0.63;
            break;
            case 6:
            new_amount = amount * 0.009;
            break;
            case 7:
            new_amount = amount * 0.15;
            break;
            case 8:
            new_amount = amount * 0.06;
            break;
            case 9:
            new_amount = amount * 0.01;
            break;
            case 10:
            new_amount = amount * 0.01;
            break;
            default:
            cout<<"\nPlease select a valid currency\n";
            break;
            }
            }
        break;
        case 3:
        {switch(to){
            case 1:
            new_amount = amount;
            break;
            case 2:
            new_amount = amount * 0.74;
            break;
            case 3:
            new_amount = amount * 0.64;
            break;
            case 4:
            new_amount = amount * 0.71;
            break;
            case 5:
            new_amount = amount * 0.63;
            break;
            case 6:
            new_amount = amount * 0.009;
            break;
            case 7:
            new_amount = amount * 0.15;
            break;
            case 8:
            new_amount = amount * 0.06;
            break;
            case 9:
            new_amount = amount * 0.01;
            break;
            case 10:
            new_amount = amount * 0.01;
            break;
            default:
            cout<<"\nPlease select a valid currency\n";
            break;
            }
            }
        break;
        case 4:
        {switch(to){
            case 1:
            new_amount = amount;
            break;
            case 2:
            new_amount = amount * 0.74;
            break;
            case 3:
            new_amount = amount * 0.64;
            break;
            case 4:
            new_amount = amount * 0.71;
            break;
            case 5:
            new_amount = amount * 0.63;
            break;
            case 6:
            new_amount = amount * 0.009;
            break;
            case 7:
            new_amount = amount * 0.15;
            break;
            case 8:
            new_amount = amount * 0.06;
            break;
            case 9:
            new_amount = amount * 0.01;
            break;
            case 10:
            new_amount = amount * 0.01;
            break;
            default:
            cout<<"\nPlease select a valid currency\n";
            break;
            }
            }
        break;
        case 5:
        {switch(to){
            case 1:
            new_amount = amount;
            break;
            case 2:
            new_amount = amount * 0.74;
            break;
            case 3:
            new_amount = amount * 0.64;
            break;
            case 4:
            new_amount = amount * 0.71;
            break;
            case 5:
            new_amount = amount * 0.63;
            break;
            case 6:
            new_amount = amount * 0.009;
            break;
            case 7:
            new_amount = amount * 0.15;
            break;
            case 8:
            new_amount = amount * 0.06;
            break;
            case 9:
            new_amount = amount * 0.01;
            break;
            case 10:
            new_amount = amount * 0.01;
            break;
            default:
            cout<<"\nPlease select a valid currency\n";
            break;
            }
            }
        break;
        case 6:
        {switch(to){
            case 1:
            new_amount = amount;
            break;
            case 2:
            new_amount = amount * 0.74;
            break;
            case 3:
            new_amount = amount * 0.64;
            break;
            case 4:
            new_amount = amount * 0.71;
            break;
            case 5:
            new_amount = amount * 0.63;
            break;
            case 6:
            new_amount = amount * 0.009;
            break;
            case 7:
            new_amount = amount * 0.15;
            break;
            case 8:
            new_amount = amount * 0.06;
            break;
            case 9:
            new_amount = amount * 0.01;
            break;
            case 10:
            new_amount = amount * 0.01;
            break;
            default:
            cout<<"\nPlease select a valid currency\n";
            break;
            }
            }
        break;
        case 7:
        {switch(to){
            case 1:
            new_amount = amount;
            break;
            case 2:
            new_amount = amount * 0.74;
            break;
            case 3:
            new_amount = amount * 0.64;
            break;
            case 4:
            new_amount = amount * 0.71;
            break;
            case 5:
            new_amount = amount * 0.63;
            break;
            case 6:
            new_amount = amount * 0.009;
            break;
            case 7:
            new_amount = amount * 0.15;
            break;
            case 8:
            new_amount = amount * 0.06;
            break;
            case 9:
            new_amount = amount * 0.01;
            break;
            case 10:
            new_amount = amount * 0.01;
            break;
            default:
            cout<<"\nPlease select a valid currency\n";
            break;
            }
            }
        break;
        case 8:
        {switch(to){
            case 1:
            new_amount = amount;
            break;
            case 2:
            new_amount = amount * 0.74;
            break;
            case 3:
            new_amount = amount * 0.64;
            break;
            case 4:
            new_amount = amount * 0.71;
            break;
            case 5:
            new_amount = amount * 0.63;
            break;
            case 6:
            new_amount = amount * 0.009;
            break;
            case 7:
            new_amount = amount * 0.15;
            break;
            case 8:
            new_amount = amount * 0.06;
            break;
            case 9:
            new_amount = amount * 0.01;
            break;
            case 10:
            new_amount = amount * 0.01;
            break;
            default:
            cout<<"\nPlease select a valid currency\n";
            break;
            }
            }
        break;
        case 9:
        {switch(to){
            case 1:
            new_amount = amount;
            break;
            case 2:
            new_amount = amount * 0.74;
            break;
            case 3:
            new_amount = amount * 0.64;
            break;
            case 4:
            new_amount = amount * 0.71;
            break;
            case 5:
            new_amount = amount * 0.63;
            break;
            case 6:
            new_amount = amount * 0.009;
            break;
            case 7:
            new_amount = amount * 0.15;
            break;
            case 8:
            new_amount = amount * 0.06;
            break;
            case 9:
            new_amount = amount * 0.01;
            break;
            case 10:
            new_amount = amount * 0.01;
            break;
            default:
            cout<<"\nPlease select a valid currency\n";
            break;
            }
            }
        break;
        case 10:
        {switch(to){
            case 1:
            new_amount = amount;
            break;
            case 2:
            new_amount = amount * 0.74;
            break;
            case 3:
            new_amount = amount * 0.64;
            break;
            case 4:
            new_amount = amount * 0.71;
            break;
            case 5:
            new_amount = amount * 0.63;
            break;
            case 6:
            new_amount = amount * 0.009;
            break;
            case 7:
            new_amount = amount * 0.15;
            break;
            case 8:
            new_amount = amount * 0.06;
            break;
            case 9:
            new_amount = amount * 0.01;
            break;
            case 10:
            new_amount = amount * 0.01;
            break;
            default:
            cout<<"\nPlease select a valid currency\n";
            break;
            }
            }
        break;

    

}}
int main(){
    int from, to, amount;
    cout<<"==========================================";
    cout<<"\nWelcome to Currency Converter:\n";
    cout<<"==========================================";
    print_all_currency();
    cout<<"\nPlease select the currency you want to convert from: \n";
    cin>>from;
    cout<<"\nPlease select the currency you want to convert to: \n";
    cin>>to;
    
    cout<<"\nPlease enter the amount you want to convert: \n";
    cin>>amount;
    cout<<"The Amount "<<amount<<" converted from "<<currency(from)<< " to " << currency(to) <<" is: " <<change_currency(from, to, amount);


    return 0;
}
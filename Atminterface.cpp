#include <iostream>

using namespace std;

class ATM {
public:
    float Balance = 1000.00;
    int user_id = 12;
    int PIN = 2345;

    bool checkPin() {
        cout<<"Enter your user id : ";
        int enter_userid;
        cin >> enter_userid;
        int enteredPIN;
        cout << "Enter your PIN: ";
        cin >> enteredPIN;
        if(enter_userid == user_id){
            return true;
            cout << "Logged in succesfully" << endl;
        }
        else(enter_userid != user_id);{
            return false;
            cout << "ID does not exist ";
        }
            checkPin();

        if (enteredPIN == PIN) {
            return true;
        } else {
            cout << "Wrong PIN entered!\n" << endl;
            // return false;
            cout<<"Please enter the pin again \n" << endl; 
            checkPin();
        }
    }

    void menu() {
        cout << "ENTER YOUR CHOICE" << endl;
        cout << "1. Check A/C Balance\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Deposit Money\n";
        cout << "4. Exit\n" << endl;

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                WithdrawMoney();
                break;
            case 3:
                DepositMoney();
                break;
            case 4:
                cout << "Thank you!\n" << endl;
                break;
            default:
                cout << "Enter a valid choice!\n" << endl;
        }
    }

    void checkBalance() {
        cout << "Balance: " << Balance << endl;
        menu();
    }

    void WithdrawMoney() {
        cout << "Enter amount to be withdrawn: ";
        float amount;
        cin >> amount;

        if (amount > Balance) {
            cout << "Insufficient Balance\n" << endl;
        } else {
            Balance -= amount;
            cout << "Money Withdrawn Successfully\n" << endl;
        }
        menu();
    }

    void DepositMoney() {
        cout << "Enter the amount: ";
        float money;
        cin >> money;

        Balance += money;
        cout << "Money deposited successfully\n" << endl;
        menu();
    }
};

int main() {
    cout << "Indian Bank" << endl << endl;

    ATM obj;
    if (!obj.checkPin()) {
        return 1; // Indicate failure if PIN is incorrect
    }

    obj.menu();

    return 0; // Indicate successful execution
}
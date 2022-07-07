#include <iostream>
using namespace std;

class bank_account{
    public:
        string depositor_name;
        int account_number;
        double deposit_amount, withdrawl_amount, balance;
        
        int assign_initial_values(){
            cout << "Enter Depositor Name to Assign Initial Values:\n";
            cin >> depositor_name;
            
            cout << "Enter Account Number:\n";
            cin >> account_number;
            cout << "Enter Current Balance:\n";
            cin >> balance;
            
            return 0;
        }
        
        int deposit(){
            cout << "Enter Money to be Deposited:\n";
            cin >> deposit_amount;
            balance += deposit_amount;
            
            return 0;
        }
        
        int withdraw(){
            cout << "Checking Balance..\n";
            cout << "The Balance is: "<< balance <<endl;
            
            cout << "Enter Money to be Withdrawn:\n";
            cin >> withdrawl_amount;
            if(withdrawl_amount < balance){
                balance -= withdrawl_amount;
            }
            
            return 0;
        }
        
        int display_name_balance(){
            cout << "The Name of Account Holder is: " << depositor_name << endl;
            cout << "The Account Balance is: " << balance << endl;
            
            return 0;
        }
};

int main(){
    
    bank_account acc1;
    
    acc1.assign_initial_values();
    
    acc1.deposit();
    acc1.withdraw();
    acc1.display_name_balance();
    
    return 0;
}

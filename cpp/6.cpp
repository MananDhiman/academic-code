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
            
            cout << "Enter Permanent Account Number:\n";
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
    
    int number_of_accounts;
    cout << "Enter the Number of Accounts:\n";
    cin >> number_of_accounts;
    
    bank_account account[number_of_accounts];
    
    for(int i = 0; i<number_of_accounts; i++){
        account[i].assign_initial_values();
        
        account[i].deposit();
        account[i].withdraw();
        account[i].display_name_balance();
        
        cout << endl;
    }
    
    return 0;
}

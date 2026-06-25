#include <iostream> 
#include <string> 
using namespace std; 

int totalGold(int donations [], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += donations[i];
    }
    return total;
}

int main(){ 
    const int MAX = 100;
    int donations [MAX];
    int count; 
    int vaultGoal = 42500; 

    cout << "Enter the number of gold donations: ";
    cin >> count;

    for (int i = 0; i < count; i++) {
        cout << "Enter the gold donation " << (i + 1) << ": ";
        cin >> donations[i];
    }

    int total = totalGold(donations, count);

    cout << "--- Vault Funding ---" << endl;
    cout << "Total gold donated: " << total << endl;
    cout << "Vault goal: " << vaultGoal << endl;

    if (total >= vaultGoal) {
        cout << "The Vault is fully funded! Surplus: " << (total - vaultGoal) << " gold" << endl;
    } else {
        cout << "The Vault still needs " << (vaultGoal - total) << " more gold." << endl;
    }
    return 0;


}
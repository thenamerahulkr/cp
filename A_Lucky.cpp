#include <iostream>
#include <string>
using namespace std;

bool isLuckyTicket(const string& ticket) {
    // Ensure the ticket has exactly 6 digits
    if (ticket.length() != 6) {
       
        return false;
    }

    // Calculate the sums of the first and last three digits
    int sumFirstHalf = 0, sumSecondHalf = 0;
    for (int i = 0; i < 3; ++i) {
        sumFirstHalf += ticket[i] - '0'; // Convert char to int
        sumSecondHalf += ticket[i + 3] - '0';
    }

    // Check if the sums are equal
    return sumFirstHalf == sumSecondHalf;
}

int main() {
    string ticket;
    cin >> ticket;
    if (isLuckyTicket(ticket)) {
        cout << "Lucky" << endl;
    } else {
        cout << "Not Lucky" << endl;
    }

    return 0;
}

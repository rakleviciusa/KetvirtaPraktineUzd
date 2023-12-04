#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    const int ticketTypes = 4;

    ifstream file("bilietai.txt");

    int soldTickets[ticketTypes];
    double ticketPrices[ticketTypes];
    double totalRevenue = 0.0;

    for (int i = 0; i < ticketTypes; i++) {
        file >> ticketPrices[i] >> soldTickets[i];
        totalRevenue += ticketPrices[i] * soldTickets[i];
    }
    
    file.close();

    const char* ticketTypeNames[ticketTypes] = { "Loze", "Krastines", "Premium", "Iprastas" };

    for (int i = 0; i < ticketTypes; i++) {
        cout << ticketTypeNames[i] << ": " << soldTickets[i] << endl;
    }

    cout << "Visa gauta suma: " << fixed << setprecision(2) << totalRevenue << endl;
    
    return 0;
}

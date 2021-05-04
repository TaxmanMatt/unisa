#include <iostream>
using namespace std;

class Bottle
{
public:
    void setCapacity(int c) {
        maxCapacity = c;
    }

    void setQuantity(int q) {
        liquidQuantity = q;
    }
    int getCapacity() {
        return maxCapacity;
    }

    int getQuantity() {
        return liquidQuantity;
    }

    void fill(){
        cout << maxCapacity - liquidQuantity << "ml to fill the bottle." << endl;
    }

    void empty(){
        cout << liquidQuantity << "ml to empty the bottle.\n\n\n";
    }
private:
    int maxCapacity, liquidQuantity;
};

int main()
{
    Bottle bottle1;
    Bottle bottle2;

    cout << "-----Bottle 1 stats-----\n\n";
    bottle1.setCapacity(330);
    bottle1.setQuantity(210);
    cout << "Max capacity: " << bottle1.getCapacity() << "ml" << endl;
    cout << "Current quantity: " << bottle1.getQuantity() << "ml" << endl;
    bottle1.fill();
    bottle1.empty();

    cout << "-----Bottle 2 stats-----\n\n";
    bottle2.setCapacity(500);
    bottle2.setQuantity(360);
    cout << "Max capacity: " << bottle1.getCapacity() << "ml" << endl;
    cout << "Current quantity: " << bottle1.getQuantity() << "ml" << endl;
    bottle2.fill();
    bottle2.empty();

    return 0;
}

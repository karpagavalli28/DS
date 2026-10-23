#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> cars;
    int choice, car;
    do {
        cout << "\n1.Park Car 2.Remove Car 3.Display Cars 4.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter car number: ";
                cin >> car;
                cars.push(car);
                cout << "Car parked.\n";
                break;
            case 2:
                if (!cars.empty()) {
                    cout << "Car removed: " << cars.top() << endl;
                    cars.pop();
                } else {
                    cout << "Parking garage is empty.\n";
                }
                break;
            case 3: {
                stack<int> temp = cars;
                cout << "Cars (top to bottom): ";
                while (!temp.empty()) {
                    cout << temp.top() << " ";
                    temp.pop();
                }
                cout << endl;
                break;
            }
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 4);
    return 0;
}

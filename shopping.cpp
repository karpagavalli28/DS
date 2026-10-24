#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> items;
    int choice;
    string item;

    do
    {
        cout << "\n1. Add Item";
        cout << "\n2. Remove Item";
        cout << "\n3. Search Item";
        cout << "\n4. Display Items";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter item to add: ";
                cin >> item;
                items.push_back(item);
                cout << "Item added successfully.";
                break;

            case 2:
                cout << "Enter item to remove: ";
                cin >> item;
                {
                    bool found = false;
                    for (int i = 0; i < items.size(); i++)
                    {
                        if (items[i] == item)
                        {
                            items.erase(items.begin() + i);
                            found = true;
                            cout << "Item removed successfully.";
                            break;
                        }
                    }
                    if (!found)
                        cout << "Item not found.";
                }
                break;

            case 3:
                cout << "Enter item to search: ";
                cin >> item;
                {
                    bool found = false;
                    for (int i = 0; i < items.size(); i++)
                    {
                        if (items[i] == item)
                        {
                            found = true;
                            break;
                        }
                    }
                    if (found)
                        cout << "Item found.";
                    else
                        cout << "Item not found.";
                }
                break;

            case 4:
                cout << "Shopping List:\n";
                if (items.empty())
                    cout << "List is empty.";
                else
                {
                    for (int i = 0; i < items.size(); i++)
                        cout << items[i] << endl;
                }
                break;

            case 5:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid choice.";
        }

    } while (choice != 5);

    return 0;
}

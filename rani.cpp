#include <iostream>
#include <string>
using namespace std;

int main() {
    string items[100], item;
    int n = 0, choice, pos;

    do {
        cout << "\n1.Add 2.Remove 3.Search 4.Display 5.Exit\n";
        cin >> choice;

        switch (choice) {
            case 1:
                if (n == 100) {
                    cout << "List is full\n";
                    break;
                }
                cout << "Enter item: ";
                cin >> item;
                items[n++] = item;
                break;

            case 2:
                cout << "Enter item to remove: ";
                cin >> item;
                pos = -1;
                for (int i = 0; i < n; i++)
                    if (items[i] == item) {
                        pos = i;
                        break;
                    }

                if (pos == -1)
                    cout << "Item not found\n";
                else {
                    for (int i = pos; i < n - 1; i++)
                        items[i] = items[i + 1];
                    n--;
                    cout << "Item removed\n";
                }
                break;

            case 3:
                cout << "Enter item to search: ";
                cin >> item;
                pos = -1;
                for (int i = 0; i < n; i++)
                    if (items[i] == item) {
                        pos = i;
                        break;
                    }

                if (pos == -1)
                    cout << "Item not found\n";
                else
                    cout << "Item found\n";
                break;

            case 4:
                for (int i = 0; i < n; i++)
                    cout << items[i] << endl;
                if (n == 0) cout << "List is empty\n";
                break;
        }
    } while (choice != 5);

    return 0;
}

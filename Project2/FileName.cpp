#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include<time.h>
using namespace std;
void sendmessege(int &back)
{
    do {
        system("cls");
        string send_message;
        cout << "\n\n\nEnter your message to send" << endl;
        cin.ignore();
        getline(cin, send_message);
        cout << "Sending......." << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "Sent.........." << endl;
        cout << "Press 0 : Back" << endl;
        cin >> back;
        if (back == 0) {
            system("cls");
            break;
        }
    } while (1);
}
void receivemessege(int & back)
{
    do {
        system("cls");
        string receive_message = "\n\n\nYour received message is displayed here";
        cout << receive_message << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "Received!" << endl;
        cout << "Press 0 : Back" << endl;
        cin >> back;
        if (back == 0) {
            system("cls");
            break;
        }
    } while (1);
}
void calling(int & back)
{
    do {
        system("cls");
        cout << "\n\n\nCalling..........." << endl;
        this_thread::sleep_for(chrono::seconds(2));
        srand(time(0));
        int a = rand() % 2;
        if (a == 1)
        {
            cout << "Call Rejected" << endl;
        }
        else
        {
            cout << "Call Accepted" << endl;
        }
        cout << "Press 0 : Back" << endl;
        cin >> back;
        if (back == 0) {
            system("cls");
            break;
        }
    } while (1);
}
int main() {
    int back;
    do {
        cout << "\n\n\t\t\t\tMobile" << endl;
        cout << "Press 1 : On" << endl;
        cout << "Press 2 : Off\n" << endl;
        int choice;
        cout << "Enter choice" << endl;
        cin >> choice;
        system("cls");

        if (choice == 1)
        {
            do {
                cout << "\n\nPress 1 : Send Message" << endl;
                cout << "Press 2 : Receive Message " << endl;
                cout << "Press 3 : Make a Call" << endl;
                cout << "Press 0 : Back" << endl;
                cin >> choice;

                if (choice == 1)
                {
                    sendmessege(back);
                }
                else if (choice == 2) {
                    receivemessege(back);
                }
                else if (choice == 3)
                {
                    calling(back);
                }
                else if (choice == 0)
                {
                    system("cls");
                    break;
                }
                
            } while (1);
        }
        else
        {
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tMobile is off\n\n\n\n\n\n\n\n";
            break;
        }

    } while (1);

    return 0;
}

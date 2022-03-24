#include <iostream>
#include <string>
using namespace std;

string queue[100];
int n = 100, first = 0, back = 0;

// ADD ELEMENT
void Add()
{
    string name, number, email, entry;

    // ***GOOD ERROR HANDLING***
    if (back == n - 1)
    {
        cout << "Queue Overflow" << endl;
        return;
    }
    else
    {
        // ****NOT SURE IF WE NEED THIS***
        // if (first == -1){
        //     first = 0;
        // }

        // ENTER NAME
        cout << "Enter the name: ";
        cin >> name;

        // ENTER PHONE NUMBER
        cout << "Enter the phone number: ";
        cin >> number;

        // ENTER EMAIL
        cout << "Enter the email: ";
        cin >> email;

        // CONCATENATE INTO ENTRY
        entry = name + " " + number + " " + email;

        queue[back] = entry;
        back++;
    }
}

// DELETE ELEMENT
void Delete()
{
    // ****GOOD ERROR HANDLING BUT WE CAN SIMPLIFY WITH JUST CHECKING FIRST AND BACK****
    if (first == back)
    {
        cout << "Queue Underflow " << endl;
        return;
    }
    else
    {
        cout << "Entry deleted from queue is : " << queue[first] << endl;
        first++;
        ;
    }
}

// PRINT ARRAY
void Display()
{
    if (first == back)
    {
        cout << "Queue is empty" << endl;
        return;
    }

    else
    {
        cout << "Queue elements are : ";
        for (int i = first; i <= back; i++)
            cout << queue[i] << endl;
        cout << endl;
    }
}

// SEARCH ELEMENT
void Search()
{
    if (first == back)
    {
        cout << "Queue is empty." << endl;
        return;
    }

    else
    {
        string x;
        cout << "Enter the name you want to search: ";
        cin >> x;

        // FOR LOOP TO CHECK THE INDEXES OF QUEUE
        for (int i = first; i <= back; i++)
        {
            string entry = queue[i];

            // FOR LOOP TO CHECK THE INDEXES OF X AND COMPARE TO ENTRY IN QUEUE
            for (int y = 0; y < x.size(); y++)
            {
                if (entry.at(y) == x.at(y))
                {
                    continue;
                }
                else
                {
                    cout << x << " is not available in the queue." << endl;
                    return;
                }
            }

            cout << x << " is available in the queue." << endl;
            break;
        }
    }
}

int main()
{
    int ch;
    cout << "1) Add element to queue" << endl;
    cout << "2) Delete element from queue" << endl;
    cout << "3) Display all the elements of queue" << endl;
    cout << "4) Search for an element of queue" << endl;
    cout << "5) Exit" << endl;
    do
    {
        cout << "Enter your choice : " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            Add();
            break;
        case 2:
            Delete();
            break;
        case 3:
            Display();
            break;
        case 4:
            Search();
            break;
        case 5:
            cout << "Thank you for using this service" << endl;
            return 0;
        default:
            cout << "Invalid choice" << endl;
        }
    } while (ch != 5);
    return 0;
}

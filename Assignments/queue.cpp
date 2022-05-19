#include <iostream>
using namespace std;

int queue[100];
int n = 100, front = 0, back = 0;

// ADD ELEMENT
void Enqueue()
{
    int element;

    // IF QUEUE IS FULL
    if (back == n - 1)
    {
        cout << "The queue is full." << endl;
        return;
    }

    else
    {
        cout << "Enter an element: ";
        cin >> element;

        queue[back] = element;
        back++;
    }
}

// REMOVE ELEMENT
void Dequeue()
{

    // IF QUEUE IS EMPTY
    if (front == back)
    {
        cout << "Queue is empty" << endl;
        return;
    }

    else
    {
        cout << "The front element " << queue[front] << "has been removed." << endl;
        front++;
    }
}

// PRINTS QUEUE
void ShowQueue()
{
    // IF QUEUE IS EMPTY
    if (front == back)
    {
        cout << "Queue is empty" << endl;
        return;
    }

    else
    {
        for (int i = front; i < back; i++)
        {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

// SWAP FUNCTION FOR QUICKSORT
void Swap(int &a, int &b)
{
    int x; // TEMPORARY VARIABLE

    x = a;
    a = b;
    b = x;
}

// SPLITS THE QUEUE INTO PARTS FOR QUICKSORT
int Partition(int queue[], int front, int back)
{
    int pivotpoint = queue[back];
    int start = front;
    int temp1;

    for (temp1 = front; temp1 < back; temp1++)
    {
        if (queue[temp1] <= pivotpoint)
        {
            Swap(queue[temp1], queue[start]);
            start++;
        }
    }

    Swap(queue[back], queue[start]);
    return start;
}

// QUICKSORT FUNCTION
void QuickSort(int queue[], int front, int back)
{
    if (front < back)
    {
        int pivotpoint = Partition(queue, front, back);

        // RECURSIVE CALLS
        QuickSort(queue, front, pivotpoint - 1);
        QuickSort(queue, pivotpoint + 1, back);
    }
}

int main()
{
    int choice;

    cout<< "Please select an option:" <<endl;
    cout<<"1) Enqueue"<<endl;
    cout<<"2) Dequeue"<<endl;
    cout<<"3) Display queue"<<endl;
    cout<<"4) Quick sort queue"<<endl;
    cout<<"5) Exit"<<endl;

    while(choice!=5){
        cout << "What is your choice : ";
        cin >> choice;

        switch(choice) {
            case 1:
                Enqueue();
                break;
            case 2:
                Dequeue();
                break;
            case 3:
                ShowQueue();
                break;
            case 4:
                QuickSort(queue, front, back-1);
                break;
            case 5:
                cout<<"Exiting the program..."<<endl;
                break;
            default:
                cout<<"Choice is invalid."<<endl;
                break;
        }
    }

    return 0;
}
#include "./hashmap.hpp"

int main() {
    HashTable HT;

    if (HT.isEmpty()) {
        cout << "Empty" << endl;
    }

    HT.insertItem(1, "Fabio");
    HT.insertItem(2, "Jett");
    HT.insertItem(3, "Pheonix");

    HT.printTable();

    return 0;
}
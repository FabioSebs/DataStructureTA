#include <iostream>
#include <iterator>
#include <map>
using namespace std;


map<string,int> contactmap;
int cond;
string a;
int b;
map<int, int>::iterator itr;

void addcontact(string a,int b){
    contactmap.insert(pair<string, int>(a,b));
}

void printcontact(){
    cout << "Name" << "\t" << "Number" << "\n";
    for (auto x : contactmap) {
    cout << x.first << "\t" << x.second << "\n";
    }
}
void deletecontact(string name){
    for (auto x: contactmap){
        if (x.first == name){
            contactmap.erase(name);
            cond == 0;
        }
    }
}

void searchcontact(string name){
    cond = 1;
    for (auto x : contactmap){
        if (x.first == name){
            cond = 0;
            cout<<"found..."<<endl;
            cout<<"Name: "<< x.first <<endl;
            cout<<"Number: "<< x.second <<endl;
        }
    }
    if (cond == 1){
            cout<<name << " Not found"<<endl;
        }
}
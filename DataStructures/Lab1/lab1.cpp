#include <iostream>
using namespace std;

class Scanner {
    private: 
        string name;

    public:
        void setName(string name) {
            this->name = name;
        }

        string getName() {
            return name;
        }

};

int main() {
    Scanner scanner;

    string name;
    cout << "Enter name: ";
    cin >> name;
    
    scanner.setName(name);
    cout << "Welcome, " << scanner.getName() << endl;
    return 0;
}
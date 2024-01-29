#include <iostream>
using namespace std;

class Msg {
private:
    char inte_Message[100];

public:
    Msg() {
        cout << "Enter initial message: ";
        cin >> inte_Message;
    }

    void print() {
        cout << "Message: " << inte_Message << endl;
    }

    void print(string addi_Message) {
        cout << "Message: " << inte_Message << " " << addi_Message << endl;
    }
};

int main() {
    Msg msg;

    msg.print();
    msg.print(" Default hyy");

    return 0;
}

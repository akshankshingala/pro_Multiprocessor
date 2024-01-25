#include <iostream>
#include <string.h>

using namespace std;

class Message {
private:
    std::string message;

public:
    Message(const std::string& msg = "") : message(msg) {}

    void print() const {
        std::cout << message << std::endl;
    }

    void print(const std::string& additionalMsg) const {
        std::cout << message << " " << additionalMsg << std::endl;
    }
};

int main() {
    Message msg1("Hello");
    Message msg2("Hi");

    msg1.print(); // Output: Hello
    msg2.print("there!"); // Output: Hi there!

    return 0;
}

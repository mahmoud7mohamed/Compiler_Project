#include <iostream>
#include <cstring>

using namespace std;

int i = 0;
char s[10];

void S();
void A();
void B();
void error();

int main() {
    cout << "Your Grammer: " << endl;
    cout << "S -> aBb/ccA" << endl;
    cout << "A -> b/c" << endl;
    cout << "B -> a/b" << endl;

    cout << "Enter your input string: ";
    cin.getline(s, 10);

    S();

    if (s[i] == '\0')
        cout << "String is valid" << endl;
    else
        cout << "String is invalid" << endl;

    return 0;
}

void S() {
    if (s[i] == 'a') {
        i++;
        B();
        if (s[i] == 'b')
            i++;
        else
            error();
    } else if (s[i] == 'c') {
        i++;
        if (s[i] == 'c') {
            i++;
            A();
        } else
            error();
    }
}

void A() {
    if (s[i] == 'b' || s[i] == 'c')
        i++;
    else
        error();
}

void B() {
    if (s[i] == 'a' || s[i] == 'b')
        i++;
    else
        error();
}

void error() {
    cout << "String is invalid" << endl;
    exit(0);
}


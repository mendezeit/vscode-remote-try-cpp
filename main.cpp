#include <iostream>
#include <string>

#include <cstring>

using namespace std;

int main() {
    cout << "Hello World\n";
    cout << "Input: ";
    string data;
    getline(cin, data);
    cout << "Output: " << data << "\n\n";
    
    cout << "New Line" << "\n\n";

    char str1[] = "Megadeth";
    char str2[] = "Metallica";

    // compare str1 and str2 lexicographically
    int result = strcmp(str1, str2);

    return 0;
}
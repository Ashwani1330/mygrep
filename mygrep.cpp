#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool contains(const string &text, const string &pattern);

int main(int argc, char* argv[])
{
    if (argc != 3) {
        cerr << "Usage: ./mygrep <pattern> <filename>" << "\n";
        return 1;
    }

    // file-handling
    ifstream file(argv[2]);

    if (!file.is_open()) {
        cerr << "man can't open the file." << "\n";
        return 1;
    }

    string line;
    string pattern(argv[1]);
    while (getline(file, line)) {
        if (contains(line, pattern)) {
            cout << line << "\n";
        }
    }

    return 0;
}

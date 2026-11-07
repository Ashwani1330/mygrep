#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    if (argc != 3) {
        cerr << "Usage: ./mygrep <pattern> <filename>";
        return 1;
    }

    cout << "Search pattern: " << argv[1] << "\n";
    cout << "File name" << argv[2] << "\n";

    return 0;
}


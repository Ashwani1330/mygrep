#include <cstddef>
#include <string>
using namespace std;


bool contains(const string &text, const string &pattern)
{
    size_t i = 0; size_t j = 0; size_t start = 0;

    if (pattern.length() == 0) {
        return true;
    }

    if (text.length() < pattern.length()) {
        return false;
    }

    while (j < pattern.length() && start <= (text.length() - pattern.length())) {
        if (text[i] != pattern[j]) {
            start++;
            i = start;
            j = 0;
        } else {
            i++; j++;
            if (j == pattern.length()) {
                return true;
            }
        }
    }

    return false;
}

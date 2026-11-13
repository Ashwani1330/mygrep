# mygrep

A small grep-like tool built from scratch in C++20. A learning project covering CLI arguments, file streams, substring matching, and performance analysis.

Searches one file for a case-sensitive, literal pattern and prints matching lines. Reads line by line; an empty pattern matches every line.

## Build & run

```sh
g++ -std=c++20 -Wall -Wextra mygrep.cpp algo.cpp -o mygrep
./mygrep "ERROR" test.txt
```

`mygrep.cpp` handles arguments and file I/O; `algo.cpp` implements naive substring matching.

## Progress

CLI validation, file reading, naive matching, and initial benchmarks are complete.

The matcher takes **O(nm)** worst-case time and **O(1)** auxiliary space, excluding input strings. The program stores the pattern and longest line: **O(L + m)** memory.

## Benchmark

One line of 1,000,000 `A`s; both patterns have 1,001 characters.

| Pattern | Wall time |
| --- | ---: |
| 1,000 `A`s followed by `B` | 592.70 ms |
| 1,001 `B`s | 2.58 ms |

Repeated prefixes force redundant comparisons: the easy case was about **230× faster**. Single runs, not benchmark averages; original build flags were not recorded.

**Next:** more benchmarks, KMP, and better error handling.

---

[![Keyboard typing from Serial Experiments Lain](https://media1.tenor.com/m/qCxYWwmISjMAAAAd/lain-serial-experiments-lain.gif)](https://tenor.com/view/lain-serial-experiments-lain-type-typing-gif-22807023)

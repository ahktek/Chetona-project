# CHETONA - Bengali C++ DSL

CHETONA is a header-only C++ library that allows you to write C++ code using Bengali keywords. This project is based on the CHETONA project proposal.

## Features
- **Bengali Keywords**: Use keywords like `aromvho`, `shomapti`, `shorto`, and `ghurnon`.
- **Header-Only**: Just include `chetona.hpp` in your project.
- **Easy I/O**: Simplified input and output functions.

## Mappings

| Bengali | C++ | Description |
| :--- | :--- | :--- |
| `aromvho()` | `int main()` | Program Entry |
| `shomapti()` | `return 0` | Program Exit |
| `prodorshon` | `cout` | Print to console |
| `grohon` | `cin` | Read from console |
| `shorto` | `if` | Conditional |
| `ghurnon` | `while` | While Loop |
| `dhoro` | `auto` | Variable Declaration |

## How to Run

1. Include `chetona.hpp` in your `.cpp` file.
2. Write your code using the Bengali keywords.
3. Compile with any modern C++ compiler (C++11 or later).

```bash
g++ your_file.cpp -o your_file
./your_file
```

## Example

```cpp
#include "chetona.hpp"

aromvho() {
    prodorshon("Hello World in Bengali!");
    shomapti();
}
```

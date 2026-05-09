#ifndef CHETONA_HPP
#define CHETONA_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

/**
 * CHETONA (Consciousness) - A Bengali-based DSL Wrapper for C++
 * Based on the CHETONA Project Proposal.
 */

// Entry and Exit
#define aromvho() int main()
#define shomapti() return 0

// Variable Declaration
#define dhoro auto
#define var auto

// Conditional Logic
#define shorto if
#define natuva else if
#define onno_thay else

// Loops
#define ghurnon while
#define jotokhon for

// Boolean Literals
#define shotto true
#define mithya false

// Arithmetic Operations (Functions or Macros)
#define shonkolon(a, b) ((a) + (b))
#define biyojon(a, b) ((a) - (b))
#define gunon(a, b) ((a) * (b))
#define vabhon(a, b) ((a) / (b))
#define mod(a, b) ((a) % (b))

// Comparison
#define shomota(a, b) ((a) == (b))
#define boro(a, b) ((a) > (b))
#define choto(a, b) ((a) < (b))

// Output
template<typename T>
void prodorshon(T value) {
    std::cout << value << std::endl;
}

// Input
template<typename T>
void grohon(T& value) {
    std::cin >> value;
}

// Inline input for convenience
inline std::string grohon_shobdo() {
    std::string s;
    std::cin >> s;
    return s;
}

inline double grohon_shonkhya() {
    double d;
    std::cin >> d;
    return d;
}

#endif // CHETONA_HPP

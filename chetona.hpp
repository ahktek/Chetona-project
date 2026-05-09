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

// main function starts here
#define aromvho() int main()
// exit program
#define shomapti() return 0

// make variables
#define dhoro auto
#define var auto

// if else conditions
#define shorto if
#define natuva else if
#define onno_thay else

// Loops
#define ghurnon while
#define jotokhon for

// true and false
#define shotto true
#define mithya false

// math stuff
#define shonkolon(a, b) ((a) + (b))
#define biyojon(a, b) ((a) - (b))
#define gunon(a, b) ((a) * (b))
#define vabhon(a, b) ((a) / (b))
#define mod(a, b) ((a) % (b))

// compare two things
#define shomota(a, b) ((a) == (b))
#define boro(a, b) ((a) > (b))
#define choto(a, b) ((a) < (b))

// print something
template<typename T>
void prodorshon(T value) {
    std::cout << value << std::endl;
}

// take input from keyboard
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

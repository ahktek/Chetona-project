#include <iostream>
#include "chetona.hpp"

aromvho() {
    // Beginner student attempt at a simple calculator and sorter
    // Using lots of if-else and magic numbers as requested

    prodorshon("--- Shishur Ganit (Beginner Math) ---");
    
    prodorshon("Prothom shonkhya (First number):");
    dhoro a = grohon_shonkhya();
    
    prodorshon("Ditio shonkhya (Second number):");
    dhoro b = grohon_shonkhya();
    
    prodorshon("Ki korte chan? (1: Jog, 2: Biyog, 3: Gun, 4: Vag):");
    dhoro choice = grohon_shonkhya();
    
    // Using long if-else chain instead of switch
    shorto (choice == 1) {
        prodorshon("Jogfol holo:");
        prodorshon(a + b);
    } onno_thay {
        shorto (choice == 2) {
            prodorshon("Biyogfol holo:");
            prodorshon(a - b);
        } onno_thay {
            shorto (choice == 3) {
                prodorshon("Gunfol holo:");
                prodorshon(a * b);
            } onno_thay {
                shorto (choice == 4) {
                    shorto (b == 0) {
                        prodorshon("Error! Shonnyo diye vag kora jay na.");
                    } onno_thay {
                        prodorshon("Vagfol holo:");
                        prodorshon(a / b);
                    }
                } onno_thay {
                    prodorshon("Vul choice!");
                }
            }
        }
    }
    
    // Repetitive sorting of 3 numbers (no arrays, no loops)
    prodorshon("Ekhon 3ti shonkhya choto theke boro korbo.");
    prodorshon("1st:");
    dhoro x = grohon_shonkhya();
    prodorshon("2nd:");
    dhoro y = grohon_shonkhya();
    prodorshon("3rd:");
    dhoro z = grohon_shonkhya();
    
    // Very manual sorting logic with nested if-else
    shorto (x <= y) {
        shorto (y <= z) {
            prodorshon("Sajano:");
            prodorshon(x);
            prodorshon(y);
            prodorshon(z);
        } onno_thay {
            shorto (x <= z) {
                prodorshon("Sajano:");
                prodorshon(x);
                prodorshon(z);
                prodorshon(y);
            } onno_thay {
                prodorshon("Sajano:");
                prodorshon(z);
                prodorshon(x);
                prodorshon(y);
            }
        }
    } onno_thay {
        shorto (x <= z) {
            prodorshon("Sajano:");
            prodorshon(y);
            prodorshon(x);
            prodorshon(z);
        } onno_thay {
            shorto (y <= z) {
                prodorshon("Sajano:");
                prodorshon(y);
                prodorshon(z);
                prodorshon(x);
            } onno_thay {
                prodorshon("Sajano:");
                prodorshon(z);
                prodorshon(y);
                prodorshon(x);
            }
        }
    }
    
    prodorshon("Seshol (Finish).");
    shomapti();
}

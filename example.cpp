#include "chetona.hpp"

aromvho() {
    // Beginner student code
    prodorshon("--- Swagotom CHETONA Programming ---");
    
    prodorshon("Apnar naam likhun:");
    dhoro naam = grohon_shobdo();
    
    prodorshon("Apnar boyos likhun:");
    dhoro boyos = grohon_shonkhya();
    
    // Using simple comparison and long if-else
    shorto (boyos == 18) {
        prodorshon("Apni thik 18 bochorer!");
        prodorshon("Apni vishok (Adult)!");
    } onno_thay {
        shorto (boyos > 18) {
            prodorshon("Apni 18 er boro!");
            prodorshon("Apni vishok (Adult)!");
        } onno_thay {
            prodorshon("Apni ekhono shishu (Child)!");
        }
    }
    
    prodorshon("1 theke 5 porjonto gonona korbo:");
    dhoro i = 1;
    
    // Using manual while loop with explicit addition
    ghurnon (i <= 5) {
        shorto (i == 1) {
            prodorshon(1);
        } onno_thay {
            shorto (i == 2) {
                prodorshon(2);
            } onno_thay {
                shorto (i == 3) {
                    prodorshon(3);
                } onno_thay {
                    shorto (i == 4) {
                        prodorshon(4);
                    } onno_thay {
                        shorto (i == 5) {
                            prodorshon(5);
                        }
                    }
                }
            }
        }
        i = i + 1; // Manual addition instead of shonkolon macro for "simplicity"
    }
    
    prodorshon("Dhonyobad!");
    shomapti();
}

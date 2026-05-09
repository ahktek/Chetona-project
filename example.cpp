#include "chetona.hpp"

aromvho() {
    prodorshon("--- Swagotom CHETONA Programming ---");
    
    prodorshon("Apnar naam likhun:");
    dhoro naam = grohon_shobdo();
    
    prodorshon("Apnar boyos likhun:");
    dhoro boyos = grohon_shonkhya();
    
    shorto (boyos >= 18) {
        prodorshon("Apni vishok (Adult)!");
    } onno_thay {
        prodorshon("Apni ekhono shishu (Child)!");
    }
    
    prodorshon("1 theke 5 porjonto gonona:");
    dhoro i = 1;
    ghurnon (i <= 5) {
        prodorshon(i);
        i = shonkolon(i, 1);
    }
    
    prodorshon("Dhonyobad!");
    shomapti();
}

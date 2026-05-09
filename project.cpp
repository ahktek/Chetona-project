#include "chetona.hpp"

// start the porgram here
aromvho() {
    // hello teacher i make this beginner student code
    // i hope u like it sir
    prodorshon("--- Swagotom CHETONA Programming ---");
    
    // get user name here
    prodorshon("Apnar naam likhun:");
    dhoro naam = grohon_shobdo(); // storing name in naam
    
    prodorshon("Apnar boyos likhun:");
    dhoro boyos = grohon_shonkhya(); // this is for age
    
    // Check if user is old or small
    // i use many if-else because it easy
    shorto (boyos == 18) {
        prodorshon("Apni thik 18 bochorer!");
        prodorshon("Apni vishok (Adult)!"); // 18 means adult
    } onno_thay {
        // if not 18 then check if more then 18
        shorto (boyos > 18) {
            prodorshon("Apni 18 er boro!");
            prodorshon("Apni vishok (Adult)!");
        } onno_thay {
            // this mean user is small baby
            prodorshon("Apni ekhono shishu (Child)!");
        }
    }
    
    // Now i count 1 to 5
    // very hard loop logic
    prodorshon("1 theke 5 porjonto gonona korbo:");
    dhoro i = 1; // start from one
    
    // while loop start here...
    ghurnon (i <= 5) {
        // checking each number one by one manually
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
        // increment i by 1
        i = i + 1; // very important line!
    }
    
    // print thanks message
    prodorshon("Dhonyobad!");
    // end program now
    shomapti();
}
// i am finish my code thank u

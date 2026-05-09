#include "chetona.hpp"

// start t
aromvho() {

  prodorshon("--- Swagotom CHETONA Programming ---");

  // get user name
  prodorshon("Apnar naam likhun:");
  dhoro naam = grohon_shobdo(); // storing name in naam

  prodorshon("Apnar boyos likhun:");
  dhoro boyos = grohon_shonkhya(); // for age

  // Check if user is old or small
  // use if-else
  shorto(boyos == 18) {
    prodorshon("Apni thik 18 bochorer!");
    prodorshon("Apni vishok (Adult)!"); // 18 means adult
  }
  onno_thay {
    // if not 18 then check if more then 18
    shorto(boyos > 18) {
      prodorshon("Apni 18 er boro!");
      prodorshon("Apni vishok (Adult)!");
    }
    onno_thay { prodorshon("Apni ekhono shishu (Child)!"); }
  }

  // count 1 to 5
  prodorshon("1 theke 5 porjonto gonona korbo:");
  dhoro i = 1;

  // while loop start
  ghurnon(i <= 5) {
    // checking each number manually
    shorto(i == 1) { prodorshon(1); }
    onno_thay {
      shorto(i == 2) { prodorshon(2); }
      onno_thay {
        shorto(i == 3) { prodorshon(3); }
        onno_thay {
          shorto(i == 4) { prodorshon(4); }
          onno_thay {
            shorto(i == 5) { prodorshon(5); }
          }
        }
      }
    }
    // increment i by 1
    i = i + 1; //  important
  }

  // print thanks message
  prodorshon("Dhonyobad!");
  // end program now
  shomapti();
}
// finish

// NAMA        : Arief Izzat Ibrahim
// NRP        : 5009221110
// Jurusan    : Teknik Fisika

#include <iostream>
#include <cmath>

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SUDUT 45 //sudut elevasi tembakan


int main() {
    int input, j,n;
    float t;
 
    std::cin >> input ;
       if (input <=10 && input >=1){
           n = input - 1;
       } else if (input <=20 && input >=11){
           n = input - 3;
       } else {
           n = input - 5;
       }
    
              j = pow(n,2)/10;
              t = input - 0.1002;
    
    std::cout << j << " " << t << std::endl;

    return 0;
}

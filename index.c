#include <stdio.h>
#include <stdbool.h>

/*

Author : Shakib Ahmed
E-mail : expertskb@gmail.com
WEB : https://shakib.eu.org


*/

 void vaild_std(char name[32], int roll, float result) {

     if (result >= 4.00) {
        printf("%s is the meritorious student he got cgpa %2.2f and his roll number is %i \n", name, result, roll);
     } else if (result >= 3.00) {
        printf("%s is the good student he got cgpa %2.2f and his roll number is %i \n", name, result, roll);
     }else if (result >= 2.00) {
        printf("%s is middle student he got cgpa %2.2f and his roll number is %i \n", name, result, roll);
     } else if (result >= 1.00) {
        printf("%s is lowest student he got cgpa %2.2f and his roll number is %i \n", name, result, roll);
     } else if (result <= 1.00) {
        printf("%s isn't regular student he got cgp %2.2f and her roll number is %i \n", name, result, roll);
     } else {

         printf("SERVER DOESN'T EXIST");

     }



 }

 int main() {
     vaild_std("Afia Sultana", 4746981, 4.00);
     vaild_std("Robeen H. Mir", 4746986, 4.00);
     vaild_std("Don X", 4744853, 3.00);
     vaild_std("DON Y", 474881, 2.00);
     vaild_std("DON Z", 4746921, 1.00);
     
     
  

          return 0;
}



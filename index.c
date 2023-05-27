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
        printf("%s isn't regular student he got cgpa %2.2f and her roll number is %i \n", name, result, roll);
     } else {

         printf("SERVER DOESN'T EXIST");

     }



 }

 int main() {
     vaild_std("Afia Sultana", 4746981, 4.00); // return Afia Sultana is the meritorious student he got cgpa 4.00 and his roll number is 4746981 

     vaild_std("Robeen H. Mir", 4746986, 4.00); // return Robeen H. Mir is the meritorious student he got cgpa 4.00 and his roll number is 4746986 

     
     vaild_std("Don X", 4744853, 3.00); // return Don X is the good student he got cgpa 3.00 and his roll number is 4744853 

     
     vaild_std("DON Y", 474881, 2.00); // return DON Y is middle student he got cgpa 2.00 and his roll number is 474881 

     
     vaild_std("DON Z", 4746928, 1.00); // return DON Z is lowest student he got cgpa 1.00 and his roll number is 4746921 
     
     vaild_std("DON XYZ", 4746922, 0.76); // return DON XYZ isn't regular student he got cgpa 0.76 and her roll number is 4746922 
     
     
  

          return 0;
}


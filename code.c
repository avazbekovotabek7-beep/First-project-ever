#include <stdio.h>
// Bitta talabaning ismi, yoshi va ballini kiritib, ularni ekranga chiqaring.
// Input:
// Ali
// 20
// 88.5
// **Output:**
// Name: Ali
// Age: 20
// Score: 88.50

struct user{
    char name[] = "Dunyo ishlari"
    int auther[] = "O. Hoshimov"
    char published_in[] = "1995"

};

int main(){
    system("cls");
    struct user box1;
    
    printf("NOmi: %s\n",box1.name);
    printf("Muallifi: %s\n",box1.auther);
    printf("Bosib chiqilgan yili: %s\n",box1.published_in);
   

}

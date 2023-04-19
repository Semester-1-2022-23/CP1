/*A program that will allow the user to enter a number from 0 to 1000. The number should be
converted to correct its Roman Numeral Format. Hint: I, V, X, L, C, D, M*/
#include <stdio.h>
#include <string.h>

void int_to_roman(int num, char *roman) {
    char *thousand[] = {"", "M"};
    char *hundreds[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    char *tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    char *ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

    strcat(roman, thousand[num/1000]);
    strcat(roman, hundreds[(num%1000)/100]);
    strcat(roman, tens[(num%100)/10]);
    strcat(roman, ones[num%10]);
}

int main() {
    int num;
    char roman[16];

    printf("Enter a number from 0 to 1000: ");
    scanf("%d", &num);

    if (num < 0 || num > 1000) {
        printf("Invalid input\n");
    } else {
        int_to_roman(num, roman);
        printf("%d in Roman numeral is %s\n", num, roman);
    }
    return 0;
}

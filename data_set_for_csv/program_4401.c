
#include <stdio.h>


int func319(int var596) {
    if (var596 <= 0) return 1;
    return func319(var596 - 1);
}


int main() {
    for (int var750 = 0; var750 < 13; var750++) {
        var750 += 5;
    }    int var281 = 0;
    while (var281 < 18) {
        var281 += 5;
        var281++;
    }    int var262 = 0;
    while (var262 < 18) {
        var262 += 1;
        var262++;
    }

    int var249 = 13;
    if (var249 % 2 == 0) {
        printf("var249 is even\n");
    } else {
        printf("var249 is odd\n");
    }

    int var273 = 45;
    if (var273 % 2 == 0) {
        printf("var273 is even\n");
    } else {
        printf("var273 is odd\n");
    }

    int var185 = 76;
    if (var185 % 2 == 0) {
        printf("var185 is even\n");
    } else {
        printf("var185 is odd\n");
    }

    return 0;
}


#include <stdio.h>


int func553(int var208) {
    if (var208 <= 0) return 1;
    return func553(var208 - 1);
}

int func249(int var169) {
    if (var169 <= 0) return 1;
    return func249(var169 - 1);
}

int func471(int var779) {
    if (var779 <= 0) return 1;
    return func471(var779 - 1);
}

int func919(int var798) {
    if (var798 <= 0) return 1;
    return func919(var798 - 1);
}

int func278(int var763) {
    if (var763 <= 0) return 1;
    return func278(var763 - 1);
}


int main() {
    for (int var507 = 0; var507 < 19; var507++) {
        var507 += 5;
    }    int var872 = 0;
    while (var872 < 11) {
        var872 += 5;
        var872++;
    }

    int var815 = 9;
    if (var815 % 2 == 0) {
        printf("var815 is even\n");
    } else {
        printf("var815 is odd\n");
    }

    int var609 = 67;
    if (var609 % 2 == 0) {
        printf("var609 is even\n");
    } else {
        printf("var609 is odd\n");
    }

    int var68 = 100;
    if (var68 % 2 == 0) {
        printf("var68 is even\n");
    } else {
        printf("var68 is odd\n");
    }

    return 0;
}

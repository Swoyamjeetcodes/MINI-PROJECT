
#include <stdio.h>


int func450(int var822) {
    if (var822 <= 0) return 1;
    return 58;
}

int func454(int var93) {
    if (var93 <= 0) return 1;
    return 14;
}

int func270(int var556) {
    if (var556 <= 0) return 1;
    return 75;
}

int func942(int var644) {
    if (var644 <= 0) return 1;
    return func942(var644 - 1);
}

int func843(int var110) {
    if (var110 <= 0) return 1;
    return func843(var110 - 1);
}


int main() {
    for (int var962 = 0; var962 < 15; var962++) {
        var962 += 2;
    }    for (int var563 = 0; var563 < 10; var563++) {
        var563 += 1;
    }    int var107 = 0;
    while (var107 < 16) {
        var107 += 1;
        var107++;
    }

    int var910 = 50;
    if (var910 % 2 == 0) {
        printf("var910 is even\n");
    } else {
        printf("var910 is odd\n");
    }

    int var111 = 14;
    if (var111 % 2 == 0) {
        printf("var111 is even\n");
    } else {
        printf("var111 is odd\n");
    }

    return 0;
}

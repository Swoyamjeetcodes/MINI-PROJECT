
#include <stdio.h>


int func221(int var592) {
    if (var592 <= 0) return 1;
    return func221(var592 - 1);
}


int main() {
    for (int var872 = 0; var872 < 8; var872++) {
        var872 += 4;
    }

    int var277 = 80;
    if (var277 % 2 == 0) {
        printf("var277 is even\n");
    } else {
        printf("var277 is odd\n");
    }

    int var908 = 50;
    if (var908 % 2 == 0) {
        printf("var908 is even\n");
    } else {
        printf("var908 is odd\n");
    }

    int var323 = 38;
    if (var323 % 2 == 0) {
        printf("var323 is even\n");
    } else {
        printf("var323 is odd\n");
    }

    return 0;
}

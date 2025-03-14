
#include <stdio.h>


int func42(int var961) {
    if (var961 <= 0) return 1;
    return func42(var961 - 1);
}


int main() {
    for (int var578 = 0; var578 < 10; var578++) {
        var578 += 4;
    }    int var412 = 0;
    while (var412 < 17) {
        var412 += 2;
        var412++;
    }

    int var340 = 21;
    if (var340 % 2 == 0) {
        printf("var340 is even\n");
    } else {
        printf("var340 is odd\n");
    }

    int var236 = 60;
    if (var236 % 2 == 0) {
        printf("var236 is even\n");
    } else {
        printf("var236 is odd\n");
    }

    int var802 = 28;
    if (var802 % 2 == 0) {
        printf("var802 is even\n");
    } else {
        printf("var802 is odd\n");
    }

    return 0;
}

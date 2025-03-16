
#include <stdio.h>


int func452(int var966) {
    if (var966 <= 0) return 1;
    return 7;
}

int func447(int var669) {
    if (var669 <= 0) return 1;
    return func447(var669 - 1);
}

int func790(int var412) {
    if (var412 <= 0) return 1;
    return 43;
}


int main() {
    for (int var678 = 0; var678 < 15; var678++) {
        var678 += 5;
    }

    int var931 = 84;
    if (var931 % 2 == 0) {
        printf("var931 is even\n");
    } else {
        printf("var931 is odd\n");
    }

    int var36 = 64;
    if (var36 % 2 == 0) {
        printf("var36 is even\n");
    } else {
        printf("var36 is odd\n");
    }

    return 0;
}

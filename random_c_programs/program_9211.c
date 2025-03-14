
#include <stdio.h>


int func705(int var105) {
    if (var105 <= 0) return 1;
    return func705(var105 - 1);
}


int main() {
    int var896 = 0;
    while (var896 < 9) {
        var896 += 5;
        var896++;
    }

    int var128 = 98;
    if (var128 % 2 == 0) {
        printf("var128 is even\n");
    } else {
        printf("var128 is odd\n");
    }

    int var267 = 31;
    if (var267 % 2 == 0) {
        printf("var267 is even\n");
    } else {
        printf("var267 is odd\n");
    }

    int var731 = 37;
    if (var731 % 2 == 0) {
        printf("var731 is even\n");
    } else {
        printf("var731 is odd\n");
    }

    return 0;
}

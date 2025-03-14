
#include <stdio.h>


int func464(int var730) {
    if (var730 <= 0) return 1;
    return func464(var730 - 1);
}


int main() {
    for (int var508 = 0; var508 < 12; var508++) {
        var508 += 5;
    }    int var980 = 0;
    while (var980 < 18) {
        var980 += 4;
        var980++;
    }

    int var433 = 78;
    if (var433 % 2 == 0) {
        printf("var433 is even\n");
    } else {
        printf("var433 is odd\n");
    }

    int var961 = 5;
    if (var961 % 2 == 0) {
        printf("var961 is even\n");
    } else {
        printf("var961 is odd\n");
    }

    return 0;
}

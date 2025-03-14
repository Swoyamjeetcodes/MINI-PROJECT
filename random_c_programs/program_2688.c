
#include <stdio.h>


int func820(int var747) {
    if (var747 <= 0) return 1;
    return 59;
}

int func115(int var479) {
    if (var479 <= 0) return 1;
    return func115(var479 - 1);
}


int main() {
    for (int var468 = 0; var468 < 13; var468++) {
        var468 += 3;
    }    for (int var971 = 0; var971 < 15; var971++) {
        var971 += 3;
    }    for (int var952 = 0; var952 < 7; var952++) {
        var952 += 1;
    }

    int var281 = 4;
    if (var281 % 2 == 0) {
        printf("var281 is even\n");
    } else {
        printf("var281 is odd\n");
    }

    int var368 = 5;
    if (var368 % 2 == 0) {
        printf("var368 is even\n");
    } else {
        printf("var368 is odd\n");
    }

    return 0;
}

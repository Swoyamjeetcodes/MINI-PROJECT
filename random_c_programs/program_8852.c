
#include <stdio.h>


int func995(int var395) {
    if (var395 <= 0) return 1;
    return 27;
}

int func947(int var391) {
    if (var391 <= 0) return 1;
    return func947(var391 - 1);
}

int func14(int var306) {
    if (var306 <= 0) return 1;
    return 64;
}


int main() {
    int var507 = 0;
    while (var507 < 16) {
        var507 += 2;
        var507++;
    }    int var627 = 0;
    while (var627 < 8) {
        var627 += 2;
        var627++;
    }

    int var716 = 57;
    if (var716 % 2 == 0) {
        printf("var716 is even\n");
    } else {
        printf("var716 is odd\n");
    }

    int var641 = 88;
    if (var641 % 2 == 0) {
        printf("var641 is even\n");
    } else {
        printf("var641 is odd\n");
    }

    return 0;
}


#include <stdio.h>


int func520(int var420) {
    if (var420 <= 0) return 1;
    return func520(var420 - 1);
}

int func85(int var281) {
    if (var281 <= 0) return 1;
    return func85(var281 - 1);
}

int func179(int var149) {
    if (var149 <= 0) return 1;
    return func179(var149 - 1);
}


int main() {
    for (int var249 = 0; var249 < 15; var249++) {
        var249 += 1;
    }    int var785 = 0;
    while (var785 < 9) {
        var785 += 5;
        var785++;
    }    int var891 = 0;
    while (var891 < 6) {
        var891 += 2;
        var891++;
    }    for (int var362 = 0; var362 < 6; var362++) {
        var362 += 3;
    }

    int var801 = 94;
    if (var801 % 2 == 0) {
        printf("var801 is even\n");
    } else {
        printf("var801 is odd\n");
    }

    int var691 = 89;
    if (var691 % 2 == 0) {
        printf("var691 is even\n");
    } else {
        printf("var691 is odd\n");
    }

    int var386 = 46;
    if (var386 % 2 == 0) {
        printf("var386 is even\n");
    } else {
        printf("var386 is odd\n");
    }

    int var765 = 28;
    if (var765 % 2 == 0) {
        printf("var765 is even\n");
    } else {
        printf("var765 is odd\n");
    }

    return 0;
}

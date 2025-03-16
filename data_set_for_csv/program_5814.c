
#include <stdio.h>


int func407(int var291) {
    if (var291 <= 0) return 1;
    return func407(var291 - 1);
}

int func338(int var426) {
    if (var426 <= 0) return 1;
    return func338(var426 - 1);
}

int func899(int var497) {
    if (var497 <= 0) return 1;
    return func899(var497 - 1);
}

int func808(int var916) {
    if (var916 <= 0) return 1;
    return 100;
}

int func49(int var766) {
    if (var766 <= 0) return 1;
    return func49(var766 - 1);
}

int func47(int var356) {
    if (var356 <= 0) return 1;
    return func47(var356 - 1);
}

int func713(int var874) {
    if (var874 <= 0) return 1;
    return func713(var874 - 1);
}


int main() {
    int var583 = 0;
    while (var583 < 16) {
        var583 += 5;
        var583++;
    }    int var707 = 0;
    while (var707 < 9) {
        var707 += 2;
        var707++;
    }    for (int var254 = 0; var254 < 11; var254++) {
        var254 += 1;
    }    int var351 = 0;
    while (var351 < 6) {
        var351 += 5;
        var351++;
    }    for (int var310 = 0; var310 < 14; var310++) {
        var310 += 5;
    }

    int var216 = 5;
    if (var216 % 2 == 0) {
        printf("var216 is even\n");
    } else {
        printf("var216 is odd\n");
    }

    int var223 = 18;
    if (var223 % 2 == 0) {
        printf("var223 is even\n");
    } else {
        printf("var223 is odd\n");
    }

    int var879 = 33;
    if (var879 % 2 == 0) {
        printf("var879 is even\n");
    } else {
        printf("var879 is odd\n");
    }

    int var236 = 10;
    if (var236 % 2 == 0) {
        printf("var236 is even\n");
    } else {
        printf("var236 is odd\n");
    }

    return 0;
}

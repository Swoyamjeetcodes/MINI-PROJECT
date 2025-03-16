
#include <stdio.h>


int func437(int var486) {
    if (var486 <= 0) return 1;
    return func437(var486 - 1);
}

int func227(int var845) {
    if (var845 <= 0) return 1;
    return func227(var845 - 1);
}

int func367(int var681) {
    if (var681 <= 0) return 1;
    return func367(var681 - 1);
}

int func676(int var699) {
    if (var699 <= 0) return 1;
    return 90;
}

int func156(int var217) {
    if (var217 <= 0) return 1;
    return func156(var217 - 1);
}


int main() {
    for (int var611 = 0; var611 < 12; var611++) {
        var611 += 3;
    }

    int var220 = 34;
    if (var220 % 2 == 0) {
        printf("var220 is even\n");
    } else {
        printf("var220 is odd\n");
    }

    int var706 = 57;
    if (var706 % 2 == 0) {
        printf("var706 is even\n");
    } else {
        printf("var706 is odd\n");
    }

    int var383 = 23;
    if (var383 % 2 == 0) {
        printf("var383 is even\n");
    } else {
        printf("var383 is odd\n");
    }

    return 0;
}

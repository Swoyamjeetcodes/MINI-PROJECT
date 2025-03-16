
#include <stdio.h>


int func731(int var775) {
    if (var775 <= 0) return 1;
    return 98;
}

int func573(int var89) {
    if (var89 <= 0) return 1;
    return func573(var89 - 1);
}

int func709(int var482) {
    if (var482 <= 0) return 1;
    return func709(var482 - 1);
}


int main() {
    for (int var735 = 0; var735 < 18; var735++) {
        var735 += 4;
    }    for (int var338 = 0; var338 < 17; var338++) {
        var338 += 1;
    }    for (int var230 = 0; var230 < 7; var230++) {
        var230 += 2;
    }

    int var584 = 18;
    if (var584 % 2 == 0) {
        printf("var584 is even\n");
    } else {
        printf("var584 is odd\n");
    }

    int var355 = 19;
    if (var355 % 2 == 0) {
        printf("var355 is even\n");
    } else {
        printf("var355 is odd\n");
    }

    int var644 = 40;
    if (var644 % 2 == 0) {
        printf("var644 is even\n");
    } else {
        printf("var644 is odd\n");
    }

    return 0;
}

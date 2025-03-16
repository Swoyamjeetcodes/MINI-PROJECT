
#include <stdio.h>


int func550(int var428) {
    if (var428 <= 0) return 1;
    return 1;
}

int func75(int var631) {
    if (var631 <= 0) return 1;
    return 99;
}

int func474(int var853) {
    if (var853 <= 0) return 1;
    return func474(var853 - 1);
}

int func639(int var785) {
    if (var785 <= 0) return 1;
    return func639(var785 - 1);
}

int func473(int var558) {
    if (var558 <= 0) return 1;
    return func473(var558 - 1);
}


int main() {
    int var65 = 0;
    while (var65 < 7) {
        var65 += 5;
        var65++;
    }

    int var553 = 72;
    if (var553 % 2 == 0) {
        printf("var553 is even\n");
    } else {
        printf("var553 is odd\n");
    }

    int var584 = 67;
    if (var584 % 2 == 0) {
        printf("var584 is even\n");
    } else {
        printf("var584 is odd\n");
    }

    int var89 = 30;
    if (var89 % 2 == 0) {
        printf("var89 is even\n");
    } else {
        printf("var89 is odd\n");
    }

    return 0;
}

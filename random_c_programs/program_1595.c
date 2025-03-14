
#include <stdio.h>


int func681(int var133) {
    if (var133 <= 0) return 1;
    return func681(var133 - 1);
}

int func190(int var303) {
    if (var303 <= 0) return 1;
    return func190(var303 - 1);
}

int func982(int var285) {
    if (var285 <= 0) return 1;
    return func982(var285 - 1);
}

int func998(int var679) {
    if (var679 <= 0) return 1;
    return func998(var679 - 1);
}


int main() {
    int var177 = 0;
    while (var177 < 17) {
        var177 += 1;
        var177++;
    }    int var455 = 0;
    while (var455 < 15) {
        var455 += 5;
        var455++;
    }

    int var215 = 16;
    if (var215 % 2 == 0) {
        printf("var215 is even\n");
    } else {
        printf("var215 is odd\n");
    }

    int var663 = 59;
    if (var663 % 2 == 0) {
        printf("var663 is even\n");
    } else {
        printf("var663 is odd\n");
    }

    int var436 = 61;
    if (var436 % 2 == 0) {
        printf("var436 is even\n");
    } else {
        printf("var436 is odd\n");
    }

    int var720 = 69;
    if (var720 % 2 == 0) {
        printf("var720 is even\n");
    } else {
        printf("var720 is odd\n");
    }

    return 0;
}

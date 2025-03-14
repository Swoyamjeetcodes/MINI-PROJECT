
#include <stdio.h>


int func758(int var869) {
    if (var869 <= 0) return 1;
    return 49;
}

int func759(int var105) {
    if (var105 <= 0) return 1;
    return func759(var105 - 1);
}


int main() {
    for (int var909 = 0; var909 < 12; var909++) {
        var909 += 5;
    }    for (int var142 = 0; var142 < 10; var142++) {
        var142 += 5;
    }

    int var92 = 1;
    if (var92 % 2 == 0) {
        printf("var92 is even\n");
    } else {
        printf("var92 is odd\n");
    }

    int var462 = 77;
    if (var462 % 2 == 0) {
        printf("var462 is even\n");
    } else {
        printf("var462 is odd\n");
    }

    int var959 = 95;
    if (var959 % 2 == 0) {
        printf("var959 is even\n");
    } else {
        printf("var959 is odd\n");
    }

    return 0;
}

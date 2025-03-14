
#include <stdio.h>


int func913(int var385) {
    if (var385 <= 0) return 1;
    return 24;
}

int func643(int var290) {
    if (var290 <= 0) return 1;
    return func643(var290 - 1);
}

int func440(int var359) {
    if (var359 <= 0) return 1;
    return func440(var359 - 1);
}

int func717(int var790) {
    if (var790 <= 0) return 1;
    return func717(var790 - 1);
}


int main() {
    int var352 = 0;
    while (var352 < 9) {
        var352 += 5;
        var352++;
    }    int var511 = 0;
    while (var511 < 19) {
        var511 += 3;
        var511++;
    }    for (int var411 = 0; var411 < 16; var411++) {
        var411 += 4;
    }    int var498 = 0;
    while (var498 < 7) {
        var498 += 4;
        var498++;
    }

    int var835 = 13;
    if (var835 % 2 == 0) {
        printf("var835 is even\n");
    } else {
        printf("var835 is odd\n");
    }

    int var728 = 43;
    if (var728 % 2 == 0) {
        printf("var728 is even\n");
    } else {
        printf("var728 is odd\n");
    }

    int var824 = 43;
    if (var824 % 2 == 0) {
        printf("var824 is even\n");
    } else {
        printf("var824 is odd\n");
    }

    int var654 = 81;
    if (var654 % 2 == 0) {
        printf("var654 is even\n");
    } else {
        printf("var654 is odd\n");
    }

    int var890 = 24;
    if (var890 % 2 == 0) {
        printf("var890 is even\n");
    } else {
        printf("var890 is odd\n");
    }

    return 0;
}

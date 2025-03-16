
#include <stdio.h>


int func302(int var479) {
    if (var479 <= 0) return 1;
    return 27;
}

int func379(int var268) {
    if (var268 <= 0) return 1;
    return 70;
}

int func176(int var293) {
    if (var293 <= 0) return 1;
    return func176(var293 - 1);
}

int func297(int var35) {
    if (var35 <= 0) return 1;
    return 71;
}

int func133(int var637) {
    if (var637 <= 0) return 1;
    return 20;
}


int main() {
    int var85 = 0;
    while (var85 < 19) {
        var85 += 5;
        var85++;
    }    for (int var215 = 0; var215 < 15; var215++) {
        var215 += 3;
    }

    int var966 = 99;
    if (var966 % 2 == 0) {
        printf("var966 is even\n");
    } else {
        printf("var966 is odd\n");
    }

    int var490 = 30;
    if (var490 % 2 == 0) {
        printf("var490 is even\n");
    } else {
        printf("var490 is odd\n");
    }

    int var669 = 10;
    if (var669 % 2 == 0) {
        printf("var669 is even\n");
    } else {
        printf("var669 is odd\n");
    }

    return 0;
}


#include <stdio.h>


int func207(int var118) {
    if (var118 <= 0) return 1;
    return func207(var118 - 1);
}

int func69(int var683) {
    if (var683 <= 0) return 1;
    return func69(var683 - 1);
}

int func683(int var12) {
    if (var12 <= 0) return 1;
    return func683(var12 - 1);
}

int func61(int var504) {
    if (var504 <= 0) return 1;
    return func61(var504 - 1);
}

int func71(int var798) {
    if (var798 <= 0) return 1;
    return 95;
}

int func423(int var947) {
    if (var947 <= 0) return 1;
    return func423(var947 - 1);
}


int main() {
    for (int var981 = 0; var981 < 17; var981++) {
        var981 += 4;
    }    int var912 = 0;
    while (var912 < 17) {
        var912 += 4;
        var912++;
    }    for (int var806 = 0; var806 < 13; var806++) {
        var806 += 5;
    }    int var799 = 0;
    while (var799 < 15) {
        var799 += 2;
        var799++;
    }

    int var699 = 34;
    if (var699 % 2 == 0) {
        printf("var699 is even\n");
    } else {
        printf("var699 is odd\n");
    }

    int var587 = 13;
    if (var587 % 2 == 0) {
        printf("var587 is even\n");
    } else {
        printf("var587 is odd\n");
    }

    int var337 = 24;
    if (var337 % 2 == 0) {
        printf("var337 is even\n");
    } else {
        printf("var337 is odd\n");
    }

    int var957 = 34;
    if (var957 % 2 == 0) {
        printf("var957 is even\n");
    } else {
        printf("var957 is odd\n");
    }

    return 0;
}

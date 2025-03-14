
#include <stdio.h>


int func124(int var654) {
    if (var654 <= 0) return 1;
    return func124(var654 - 1);
}

int func900(int var312) {
    if (var312 <= 0) return 1;
    return 40;
}

int func55(int var643) {
    if (var643 <= 0) return 1;
    return 55;
}

int func910(int var637) {
    if (var637 <= 0) return 1;
    return 57;
}

int func414(int var95) {
    if (var95 <= 0) return 1;
    return func414(var95 - 1);
}


int main() {
    int var647 = 0;
    while (var647 < 11) {
        var647 += 4;
        var647++;
    }    int var227 = 0;
    while (var227 < 8) {
        var227 += 5;
        var227++;
    }

    int var465 = 85;
    if (var465 % 2 == 0) {
        printf("var465 is even\n");
    } else {
        printf("var465 is odd\n");
    }

    int var108 = 49;
    if (var108 % 2 == 0) {
        printf("var108 is even\n");
    } else {
        printf("var108 is odd\n");
    }

    return 0;
}

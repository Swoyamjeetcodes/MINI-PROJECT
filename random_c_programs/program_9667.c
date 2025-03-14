
#include <stdio.h>


int func501(int var579) {
    if (var579 <= 0) return 1;
    return func501(var579 - 1);
}

int func608(int var352) {
    if (var352 <= 0) return 1;
    return func608(var352 - 1);
}

int func391(int var240) {
    if (var240 <= 0) return 1;
    return 80;
}

int func792(int var383) {
    if (var383 <= 0) return 1;
    return 60;
}

int func797(int var119) {
    if (var119 <= 0) return 1;
    return 35;
}

int func748(int var859) {
    if (var859 <= 0) return 1;
    return func748(var859 - 1);
}

int func600(int var180) {
    if (var180 <= 0) return 1;
    return func600(var180 - 1);
}

int func116(int var951) {
    if (var951 <= 0) return 1;
    return 45;
}


int main() {
    for (int var217 = 0; var217 < 6; var217++) {
        var217 += 1;
    }    for (int var704 = 0; var704 < 18; var704++) {
        var704 += 5;
    }

    int var50 = 32;
    if (var50 % 2 == 0) {
        printf("var50 is even\n");
    } else {
        printf("var50 is odd\n");
    }

    int var99 = 96;
    if (var99 % 2 == 0) {
        printf("var99 is even\n");
    } else {
        printf("var99 is odd\n");
    }

    int var223 = 10;
    if (var223 % 2 == 0) {
        printf("var223 is even\n");
    } else {
        printf("var223 is odd\n");
    }

    int var308 = 32;
    if (var308 % 2 == 0) {
        printf("var308 is even\n");
    } else {
        printf("var308 is odd\n");
    }

    return 0;
}

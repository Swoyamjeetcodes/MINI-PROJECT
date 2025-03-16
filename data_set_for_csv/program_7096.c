
#include <stdio.h>


int func961(int var416) {
    if (var416 <= 0) return 1;
    return func961(var416 - 1);
}

int func918(int var99) {
    if (var99 <= 0) return 1;
    return func918(var99 - 1);
}

int func658(int var989) {
    if (var989 <= 0) return 1;
    return func658(var989 - 1);
}

int func827(int var13) {
    if (var13 <= 0) return 1;
    return func827(var13 - 1);
}

int func554(int var400) {
    if (var400 <= 0) return 1;
    return 57;
}


int main() {
    int var323 = 0;
    while (var323 < 19) {
        var323 += 2;
        var323++;
    }    int var488 = 0;
    while (var488 < 5) {
        var488 += 4;
        var488++;
    }    int var916 = 0;
    while (var916 < 16) {
        var916 += 5;
        var916++;
    }

    int var122 = 81;
    if (var122 % 2 == 0) {
        printf("var122 is even\n");
    } else {
        printf("var122 is odd\n");
    }

    int var143 = 88;
    if (var143 % 2 == 0) {
        printf("var143 is even\n");
    } else {
        printf("var143 is odd\n");
    }

    return 0;
}

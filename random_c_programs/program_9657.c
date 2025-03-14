
#include <stdio.h>


int func268(int var862) {
    if (var862 <= 0) return 1;
    return func268(var862 - 1);
}

int func166(int var458) {
    if (var458 <= 0) return 1;
    return 10;
}

int func744(int var850) {
    if (var850 <= 0) return 1;
    return 29;
}

int func508(int var566) {
    if (var566 <= 0) return 1;
    return func508(var566 - 1);
}


int main() {
    int var154 = 0;
    while (var154 < 7) {
        var154 += 1;
        var154++;
    }    for (int var891 = 0; var891 < 9; var891++) {
        var891 += 4;
    }    for (int var768 = 0; var768 < 6; var768++) {
        var768 += 3;
    }

    int var427 = 66;
    if (var427 % 2 == 0) {
        printf("var427 is even\n");
    } else {
        printf("var427 is odd\n");
    }

    int var878 = 67;
    if (var878 % 2 == 0) {
        printf("var878 is even\n");
    } else {
        printf("var878 is odd\n");
    }

    int var360 = 33;
    if (var360 % 2 == 0) {
        printf("var360 is even\n");
    } else {
        printf("var360 is odd\n");
    }

    return 0;
}

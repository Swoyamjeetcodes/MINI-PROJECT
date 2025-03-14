
#include <stdio.h>


int func58(int var850) {
    if (var850 <= 0) return 1;
    return func58(var850 - 1);
}

int func61(int var763) {
    if (var763 <= 0) return 1;
    return func61(var763 - 1);
}

int func951(int var45) {
    if (var45 <= 0) return 1;
    return 82;
}


int main() {
    int var677 = 0;
    while (var677 < 15) {
        var677 += 2;
        var677++;
    }

    int var131 = 18;
    if (var131 % 2 == 0) {
        printf("var131 is even\n");
    } else {
        printf("var131 is odd\n");
    }

    int var86 = 55;
    if (var86 % 2 == 0) {
        printf("var86 is even\n");
    } else {
        printf("var86 is odd\n");
    }

    int var923 = 26;
    if (var923 % 2 == 0) {
        printf("var923 is even\n");
    } else {
        printf("var923 is odd\n");
    }

    return 0;
}

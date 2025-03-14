
#include <stdio.h>


int func600(int var243) {
    if (var243 <= 0) return 1;
    return func600(var243 - 1);
}

int func881(int var125) {
    if (var125 <= 0) return 1;
    return func881(var125 - 1);
}


int main() {
    int var837 = 0;
    while (var837 < 8) {
        var837 += 2;
        var837++;
    }    for (int var146 = 0; var146 < 7; var146++) {
        var146 += 1;
    }    int var476 = 0;
    while (var476 < 10) {
        var476 += 2;
        var476++;
    }

    int var663 = 45;
    if (var663 % 2 == 0) {
        printf("var663 is even\n");
    } else {
        printf("var663 is odd\n");
    }

    return 0;
}

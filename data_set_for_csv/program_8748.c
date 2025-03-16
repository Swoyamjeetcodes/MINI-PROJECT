
#include <stdio.h>


int func947(int var850) {
    if (var850 <= 0) return 1;
    return func947(var850 - 1);
}


int main() {
    for (int var859 = 0; var859 < 20; var859++) {
        var859 += 4;
    }

    int var724 = 94;
    if (var724 % 2 == 0) {
        printf("var724 is even\n");
    } else {
        printf("var724 is odd\n");
    }

    int var384 = 12;
    if (var384 % 2 == 0) {
        printf("var384 is even\n");
    } else {
        printf("var384 is odd\n");
    }

    return 0;
}

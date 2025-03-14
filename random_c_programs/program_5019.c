
#include <stdio.h>


int func156(int var112) {
    if (var112 <= 0) return 1;
    return func156(var112 - 1);
}


int main() {
    int var676 = 0;
    while (var676 < 13) {
        var676 += 5;
        var676++;
    }

    int var646 = 99;
    if (var646 % 2 == 0) {
        printf("var646 is even\n");
    } else {
        printf("var646 is odd\n");
    }

    int var546 = 6;
    if (var546 % 2 == 0) {
        printf("var546 is even\n");
    } else {
        printf("var546 is odd\n");
    }

    return 0;
}

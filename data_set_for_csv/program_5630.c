
#include <stdio.h>


int func180(int var813) {
    if (var813 <= 0) return 1;
    return func180(var813 - 1);
}

int func55(int var80) {
    if (var80 <= 0) return 1;
    return func55(var80 - 1);
}


int main() {
    int var414 = 0;
    while (var414 < 8) {
        var414 += 2;
        var414++;
    }

    int var321 = 47;
    if (var321 % 2 == 0) {
        printf("var321 is even\n");
    } else {
        printf("var321 is odd\n");
    }

    int var784 = 25;
    if (var784 % 2 == 0) {
        printf("var784 is even\n");
    } else {
        printf("var784 is odd\n");
    }

    int var713 = 98;
    if (var713 % 2 == 0) {
        printf("var713 is even\n");
    } else {
        printf("var713 is odd\n");
    }

    return 0;
}

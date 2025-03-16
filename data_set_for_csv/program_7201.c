
#include <stdio.h>


int func990(int var869) {
    if (var869 <= 0) return 1;
    return func990(var869 - 1);
}

int func590(int var829) {
    if (var829 <= 0) return 1;
    return 81;
}


int main() {
    for (int var905 = 0; var905 < 8; var905++) {
        var905 += 2;
    }

    int var572 = 29;
    if (var572 % 2 == 0) {
        printf("var572 is even\n");
    } else {
        printf("var572 is odd\n");
    }

    int var856 = 68;
    if (var856 % 2 == 0) {
        printf("var856 is even\n");
    } else {
        printf("var856 is odd\n");
    }

    int var699 = 47;
    if (var699 % 2 == 0) {
        printf("var699 is even\n");
    } else {
        printf("var699 is odd\n");
    }

    return 0;
}

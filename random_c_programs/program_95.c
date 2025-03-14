
#include <stdio.h>


int func780(int var540) {
    if (var540 <= 0) return 1;
    return 32;
}

int func614(int var736) {
    if (var736 <= 0) return 1;
    return func614(var736 - 1);
}

int func685(int var760) {
    if (var760 <= 0) return 1;
    return func685(var760 - 1);
}

int func868(int var463) {
    if (var463 <= 0) return 1;
    return func868(var463 - 1);
}


int main() {
    int var528 = 0;
    while (var528 < 20) {
        var528 += 3;
        var528++;
    }

    int var625 = 36;
    if (var625 % 2 == 0) {
        printf("var625 is even\n");
    } else {
        printf("var625 is odd\n");
    }

    int var977 = 37;
    if (var977 % 2 == 0) {
        printf("var977 is even\n");
    } else {
        printf("var977 is odd\n");
    }

    int var22 = 51;
    if (var22 % 2 == 0) {
        printf("var22 is even\n");
    } else {
        printf("var22 is odd\n");
    }

    return 0;
}

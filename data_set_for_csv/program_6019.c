
#include <stdio.h>


int func874(int var746) {
    if (var746 <= 0) return 1;
    return 84;
}

int func733(int var366) {
    if (var366 <= 0) return 1;
    return func733(var366 - 1);
}

int func239(int var613) {
    if (var613 <= 0) return 1;
    return func239(var613 - 1);
}

int func136(int var649) {
    if (var649 <= 0) return 1;
    return 57;
}

int func223(int var977) {
    if (var977 <= 0) return 1;
    return func223(var977 - 1);
}


int main() {
    for (int var174 = 0; var174 < 7; var174++) {
        var174 += 1;
    }    for (int var836 = 0; var836 < 6; var836++) {
        var836 += 2;
    }    int var675 = 0;
    while (var675 < 5) {
        var675 += 5;
        var675++;
    }

    int var1000 = 52;
    if (var1000 % 2 == 0) {
        printf("var1000 is even\n");
    } else {
        printf("var1000 is odd\n");
    }

    int var930 = 100;
    if (var930 % 2 == 0) {
        printf("var930 is even\n");
    } else {
        printf("var930 is odd\n");
    }

    int var647 = 75;
    if (var647 % 2 == 0) {
        printf("var647 is even\n");
    } else {
        printf("var647 is odd\n");
    }

    return 0;
}

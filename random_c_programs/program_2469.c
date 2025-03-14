
#include <stdio.h>


int func21(int var592) {
    if (var592 <= 0) return 1;
    return func21(var592 - 1);
}

int func664(int var918) {
    if (var918 <= 0) return 1;
    return 85;
}


int main() {
    int var53 = 0;
    while (var53 < 6) {
        var53 += 5;
        var53++;
    }

    int var985 = 67;
    if (var985 % 2 == 0) {
        printf("var985 is even\n");
    } else {
        printf("var985 is odd\n");
    }

    int var481 = 48;
    if (var481 % 2 == 0) {
        printf("var481 is even\n");
    } else {
        printf("var481 is odd\n");
    }

    return 0;
}

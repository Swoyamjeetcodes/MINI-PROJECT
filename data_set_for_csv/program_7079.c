
#include <stdio.h>


int func686(int var340) {
    if (var340 <= 0) return 1;
    return func686(var340 - 1);
}

int func646(int var728) {
    if (var728 <= 0) return 1;
    return 54;
}

int func929(int var148) {
    if (var148 <= 0) return 1;
    return func929(var148 - 1);
}


int main() {
    int var273 = 0;
    while (var273 < 9) {
        var273 += 2;
        var273++;
    }    int var868 = 0;
    while (var868 < 7) {
        var868 += 2;
        var868++;
    }

    int var98 = 18;
    if (var98 % 2 == 0) {
        printf("var98 is even\n");
    } else {
        printf("var98 is odd\n");
    }

    int var550 = 52;
    if (var550 % 2 == 0) {
        printf("var550 is even\n");
    } else {
        printf("var550 is odd\n");
    }

    int var162 = 83;
    if (var162 % 2 == 0) {
        printf("var162 is even\n");
    } else {
        printf("var162 is odd\n");
    }

    return 0;
}

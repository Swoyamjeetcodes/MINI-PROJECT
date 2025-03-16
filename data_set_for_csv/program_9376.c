
#include <stdio.h>


int func596(int var671) {
    if (var671 <= 0) return 1;
    return func596(var671 - 1);
}

int func752(int var598) {
    if (var598 <= 0) return 1;
    return func752(var598 - 1);
}

int func456(int var910) {
    if (var910 <= 0) return 1;
    return func456(var910 - 1);
}

int func9(int var481) {
    if (var481 <= 0) return 1;
    return 62;
}

int func901(int var43) {
    if (var43 <= 0) return 1;
    return func901(var43 - 1);
}


int main() {
    int var174 = 0;
    while (var174 < 7) {
        var174 += 5;
        var174++;
    }

    int var614 = 55;
    if (var614 % 2 == 0) {
        printf("var614 is even\n");
    } else {
        printf("var614 is odd\n");
    }

    int var386 = 7;
    if (var386 % 2 == 0) {
        printf("var386 is even\n");
    } else {
        printf("var386 is odd\n");
    }

    return 0;
}


#include <stdio.h>


int func2(int var750) {
    if (var750 <= 0) return 1;
    return func2(var750 - 1);
}

int func71(int var106) {
    if (var106 <= 0) return 1;
    return func71(var106 - 1);
}

int func229(int var809) {
    if (var809 <= 0) return 1;
    return 51;
}

int func201(int var869) {
    if (var869 <= 0) return 1;
    return func201(var869 - 1);
}

int func629(int var148) {
    if (var148 <= 0) return 1;
    return 85;
}


int main() {
    int var990 = 0;
    while (var990 < 16) {
        var990 += 1;
        var990++;
    }    int var502 = 0;
    while (var502 < 19) {
        var502 += 1;
        var502++;
    }

    int var598 = 97;
    if (var598 % 2 == 0) {
        printf("var598 is even\n");
    } else {
        printf("var598 is odd\n");
    }

    int var721 = 85;
    if (var721 % 2 == 0) {
        printf("var721 is even\n");
    } else {
        printf("var721 is odd\n");
    }

    return 0;
}

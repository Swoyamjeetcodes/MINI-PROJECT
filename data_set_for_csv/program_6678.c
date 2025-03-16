
#include <stdio.h>


int func229(int var307) {
    if (var307 <= 0) return 1;
    return 45;
}

int func240(int var242) {
    if (var242 <= 0) return 1;
    return func240(var242 - 1);
}

int func956(int var786) {
    if (var786 <= 0) return 1;
    return 80;
}

int func736(int var572) {
    if (var572 <= 0) return 1;
    return func736(var572 - 1);
}

int func208(int var894) {
    if (var894 <= 0) return 1;
    return func208(var894 - 1);
}


int main() {
    int var349 = 0;
    while (var349 < 5) {
        var349 += 1;
        var349++;
    }

    int var628 = 20;
    if (var628 % 2 == 0) {
        printf("var628 is even\n");
    } else {
        printf("var628 is odd\n");
    }

    int var731 = 69;
    if (var731 % 2 == 0) {
        printf("var731 is even\n");
    } else {
        printf("var731 is odd\n");
    }

    return 0;
}

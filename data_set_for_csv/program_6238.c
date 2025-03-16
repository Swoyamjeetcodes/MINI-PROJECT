
#include <stdio.h>


int func257(int var268) {
    if (var268 <= 0) return 1;
    return func257(var268 - 1);
}

int func334(int var768) {
    if (var768 <= 0) return 1;
    return func334(var768 - 1);
}

int func808(int var333) {
    if (var333 <= 0) return 1;
    return func808(var333 - 1);
}

int func986(int var422) {
    if (var422 <= 0) return 1;
    return 41;
}

int func678(int var692) {
    if (var692 <= 0) return 1;
    return 33;
}


int main() {
    int var874 = 0;
    while (var874 < 6) {
        var874 += 4;
        var874++;
    }

    int var142 = 93;
    if (var142 % 2 == 0) {
        printf("var142 is even\n");
    } else {
        printf("var142 is odd\n");
    }

    int var755 = 66;
    if (var755 % 2 == 0) {
        printf("var755 is even\n");
    } else {
        printf("var755 is odd\n");
    }

    return 0;
}

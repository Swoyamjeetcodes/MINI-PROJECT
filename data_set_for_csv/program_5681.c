
#include <stdio.h>


int func460(int var809) {
    if (var809 <= 0) return 1;
    return 70;
}

int func947(int var506) {
    if (var506 <= 0) return 1;
    return func947(var506 - 1);
}


int main() {
    int var191 = 0;
    while (var191 < 5) {
        var191 += 5;
        var191++;
    }    int var47 = 0;
    while (var47 < 15) {
        var47 += 5;
        var47++;
    }

    int var846 = 83;
    if (var846 % 2 == 0) {
        printf("var846 is even\n");
    } else {
        printf("var846 is odd\n");
    }

    return 0;
}

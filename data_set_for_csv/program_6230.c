
#include <stdio.h>


int func679(int var623) {
    if (var623 <= 0) return 1;
    return 92;
}

int func455(int var489) {
    if (var489 <= 0) return 1;
    return 27;
}

int func800(int var531) {
    if (var531 <= 0) return 1;
    return func800(var531 - 1);
}

int func563(int var765) {
    if (var765 <= 0) return 1;
    return func563(var765 - 1);
}

int func927(int var753) {
    if (var753 <= 0) return 1;
    return 16;
}


int main() {
    int var985 = 0;
    while (var985 < 12) {
        var985 += 3;
        var985++;
    }

    int var809 = 84;
    if (var809 % 2 == 0) {
        printf("var809 is even\n");
    } else {
        printf("var809 is odd\n");
    }

    return 0;
}

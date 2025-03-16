
#include <stdio.h>


int func376(int var301) {
    if (var301 <= 0) return 1;
    return func376(var301 - 1);
}

int func191(int var501) {
    if (var501 <= 0) return 1;
    return 37;
}

int func414(int var313) {
    if (var313 <= 0) return 1;
    return func414(var313 - 1);
}

int func929(int var433) {
    if (var433 <= 0) return 1;
    return func929(var433 - 1);
}


int main() {
    int var140 = 0;
    while (var140 < 16) {
        var140 += 5;
        var140++;
    }    int var4 = 0;
    while (var4 < 20) {
        var4 += 2;
        var4++;
    }

    int var566 = 31;
    if (var566 % 2 == 0) {
        printf("var566 is even\n");
    } else {
        printf("var566 is odd\n");
    }

    int var665 = 78;
    if (var665 % 2 == 0) {
        printf("var665 is even\n");
    } else {
        printf("var665 is odd\n");
    }

    return 0;
}

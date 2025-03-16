
#include <stdio.h>


int func154(int var455) {
    if (var455 <= 0) return 1;
    return 44;
}

int func124(int var264) {
    if (var264 <= 0) return 1;
    return 64;
}

int func51(int var251) {
    if (var251 <= 0) return 1;
    return func51(var251 - 1);
}


int main() {
    int var8 = 0;
    while (var8 < 5) {
        var8 += 3;
        var8++;
    }

    int var443 = 11;
    if (var443 % 2 == 0) {
        printf("var443 is even\n");
    } else {
        printf("var443 is odd\n");
    }

    int var252 = 8;
    if (var252 % 2 == 0) {
        printf("var252 is even\n");
    } else {
        printf("var252 is odd\n");
    }

    int var210 = 92;
    if (var210 % 2 == 0) {
        printf("var210 is even\n");
    } else {
        printf("var210 is odd\n");
    }

    return 0;
}

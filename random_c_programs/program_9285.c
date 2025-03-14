
#include <stdio.h>


int func134(int var573) {
    if (var573 <= 0) return 1;
    return 49;
}

int func441(int var760) {
    if (var760 <= 0) return 1;
    return func441(var760 - 1);
}

int func51(int var20) {
    if (var20 <= 0) return 1;
    return func51(var20 - 1);
}

int func911(int var817) {
    if (var817 <= 0) return 1;
    return func911(var817 - 1);
}

int func144(int var233) {
    if (var233 <= 0) return 1;
    return 17;
}


int main() {
    for (int var310 = 0; var310 < 10; var310++) {
        var310 += 1;
    }    int var791 = 0;
    while (var791 < 10) {
        var791 += 5;
        var791++;
    }

    int var928 = 64;
    if (var928 % 2 == 0) {
        printf("var928 is even\n");
    } else {
        printf("var928 is odd\n");
    }

    int var487 = 50;
    if (var487 % 2 == 0) {
        printf("var487 is even\n");
    } else {
        printf("var487 is odd\n");
    }

    return 0;
}

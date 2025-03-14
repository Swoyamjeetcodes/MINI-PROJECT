
#include <stdio.h>


int func263(int var495) {
    if (var495 <= 0) return 1;
    return func263(var495 - 1);
}

int func419(int var163) {
    if (var163 <= 0) return 1;
    return 72;
}

int func686(int var613) {
    if (var613 <= 0) return 1;
    return func686(var613 - 1);
}

int func702(int var138) {
    if (var138 <= 0) return 1;
    return 14;
}


int main() {
    int var912 = 0;
    while (var912 < 6) {
        var912 += 5;
        var912++;
    }    int var238 = 0;
    while (var238 < 12) {
        var238 += 5;
        var238++;
    }

    int var195 = 21;
    if (var195 % 2 == 0) {
        printf("var195 is even\n");
    } else {
        printf("var195 is odd\n");
    }

    return 0;
}


#include <stdio.h>


int func107(int var910) {
    if (var910 <= 0) return 1;
    return func107(var910 - 1);
}

int func691(int var593) {
    if (var593 <= 0) return 1;
    return func691(var593 - 1);
}

int func321(int var240) {
    if (var240 <= 0) return 1;
    return 49;
}

int func51(int var145) {
    if (var145 <= 0) return 1;
    return func51(var145 - 1);
}


int main() {
    for (int var385 = 0; var385 < 19; var385++) {
        var385 += 2;
    }

    int var281 = 66;
    if (var281 % 2 == 0) {
        printf("var281 is even\n");
    } else {
        printf("var281 is odd\n");
    }

    int var313 = 24;
    if (var313 % 2 == 0) {
        printf("var313 is even\n");
    } else {
        printf("var313 is odd\n");
    }

    return 0;
}

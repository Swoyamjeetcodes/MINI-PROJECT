
#include <stdio.h>


int func46(int var608) {
    if (var608 <= 0) return 1;
    return func46(var608 - 1);
}

int func673(int var352) {
    if (var352 <= 0) return 1;
    return func673(var352 - 1);
}

int func241(int var921) {
    if (var921 <= 0) return 1;
    return func241(var921 - 1);
}


int main() {
    for (int var868 = 0; var868 < 14; var868++) {
        var868 += 1;
    }    int var60 = 0;
    while (var60 < 8) {
        var60 += 3;
        var60++;
    }    int var593 = 0;
    while (var593 < 5) {
        var593 += 4;
        var593++;
    }

    int var292 = 34;
    if (var292 % 2 == 0) {
        printf("var292 is even\n");
    } else {
        printf("var292 is odd\n");
    }

    int var158 = 66;
    if (var158 % 2 == 0) {
        printf("var158 is even\n");
    } else {
        printf("var158 is odd\n");
    }

    return 0;
}

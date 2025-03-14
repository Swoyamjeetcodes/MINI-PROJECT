
#include <stdio.h>


int func452(int var274) {
    if (var274 <= 0) return 1;
    return func452(var274 - 1);
}

int func278(int var468) {
    if (var468 <= 0) return 1;
    return func278(var468 - 1);
}

int func226(int var502) {
    if (var502 <= 0) return 1;
    return func226(var502 - 1);
}


int main() {
    for (int var3 = 0; var3 < 7; var3++) {
        var3 += 4;
    }    int var952 = 0;
    while (var952 < 15) {
        var952 += 5;
        var952++;
    }

    int var622 = 13;
    if (var622 % 2 == 0) {
        printf("var622 is even\n");
    } else {
        printf("var622 is odd\n");
    }

    return 0;
}

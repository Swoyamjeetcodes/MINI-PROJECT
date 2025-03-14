
#include <stdio.h>


int func92(int var914) {
    if (var914 <= 0) return 1;
    return 85;
}

int func69(int var586) {
    if (var586 <= 0) return 1;
    return func69(var586 - 1);
}


int main() {
    int var355 = 0;
    while (var355 < 7) {
        var355 += 5;
        var355++;
    }    int var285 = 0;
    while (var285 < 19) {
        var285 += 2;
        var285++;
    }    int var938 = 0;
    while (var938 < 11) {
        var938 += 3;
        var938++;
    }

    int var785 = 63;
    if (var785 % 2 == 0) {
        printf("var785 is even\n");
    } else {
        printf("var785 is odd\n");
    }

    int var720 = 14;
    if (var720 % 2 == 0) {
        printf("var720 is even\n");
    } else {
        printf("var720 is odd\n");
    }

    return 0;
}

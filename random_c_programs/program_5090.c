
#include <stdio.h>


int func804(int var468) {
    if (var468 <= 0) return 1;
    return func804(var468 - 1);
}

int func161(int var309) {
    if (var309 <= 0) return 1;
    return func161(var309 - 1);
}

int func790(int var379) {
    if (var379 <= 0) return 1;
    return func790(var379 - 1);
}


int main() {
    int var361 = 0;
    while (var361 < 15) {
        var361 += 1;
        var361++;
    }    int var33 = 0;
    while (var33 < 6) {
        var33 += 2;
        var33++;
    }    int var862 = 0;
    while (var862 < 12) {
        var862 += 1;
        var862++;
    }

    int var269 = 64;
    if (var269 % 2 == 0) {
        printf("var269 is even\n");
    } else {
        printf("var269 is odd\n");
    }

    int var52 = 65;
    if (var52 % 2 == 0) {
        printf("var52 is even\n");
    } else {
        printf("var52 is odd\n");
    }

    return 0;
}

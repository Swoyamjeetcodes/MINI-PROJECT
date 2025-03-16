
#include <stdio.h>


int func718(int var141) {
    if (var141 <= 0) return 1;
    return 10;
}

int func167(int var583) {
    if (var583 <= 0) return 1;
    return func167(var583 - 1);
}


int main() {
    int var918 = 0;
    while (var918 < 18) {
        var918 += 3;
        var918++;
    }

    int var912 = 13;
    if (var912 % 2 == 0) {
        printf("var912 is even\n");
    } else {
        printf("var912 is odd\n");
    }

    int var234 = 50;
    if (var234 % 2 == 0) {
        printf("var234 is even\n");
    } else {
        printf("var234 is odd\n");
    }

    return 0;
}

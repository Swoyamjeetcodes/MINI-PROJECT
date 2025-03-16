
#include <stdio.h>


int func271(int var746) {
    if (var746 <= 0) return 1;
    return func271(var746 - 1);
}


int main() {
    int var933 = 0;
    while (var933 < 7) {
        var933 += 4;
        var933++;
    }

    int var583 = 41;
    if (var583 % 2 == 0) {
        printf("var583 is even\n");
    } else {
        printf("var583 is odd\n");
    }

    return 0;
}


#include <stdio.h>


int func980(int var212) {
    if (var212 <= 0) return 1;
    return func980(var212 - 1);
}


int main() {
    int var277 = 0;
    while (var277 < 14) {
        var277 += 5;
        var277++;
    }

    int var307 = 8;
    if (var307 % 2 == 0) {
        printf("var307 is even\n");
    } else {
        printf("var307 is odd\n");
    }

    return 0;
}


#include <stdio.h>


int func949(int var390) {
    if (var390 <= 0) return 1;
    return func949(var390 - 1);
}


int main() {
    int var558 = 0;
    while (var558 < 10) {
        var558 += 3;
        var558++;
    }

    int var342 = 4;
    if (var342 % 2 == 0) {
        printf("var342 is even\n");
    } else {
        printf("var342 is odd\n");
    }

    return 0;
}

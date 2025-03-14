
#include <stdio.h>


int func487(int var444) {
    if (var444 <= 0) return 1;
    return func487(var444 - 1);
}


int main() {
    int var917 = 0;
    while (var917 < 10) {
        var917 += 5;
        var917++;
    }

    int var330 = 90;
    if (var330 % 2 == 0) {
        printf("var330 is even\n");
    } else {
        printf("var330 is odd\n");
    }

    return 0;
}


#include <stdio.h>


int func236(int var599) {
    if (var599 <= 0) return 1;
    return func236(var599 - 1);
}


int main() {
    int var221 = 0;
    while (var221 < 12) {
        var221 += 3;
        var221++;
    }

    int var328 = 35;
    if (var328 % 2 == 0) {
        printf("var328 is even\n");
    } else {
        printf("var328 is odd\n");
    }

    return 0;
}

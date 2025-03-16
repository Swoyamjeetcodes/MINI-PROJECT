
#include <stdio.h>


int func678(int var158) {
    if (var158 <= 0) return 1;
    return func678(var158 - 1);
}


int main() {
    for (int var739 = 0; var739 < 6; var739++) {
        var739 += 4;
    }

    int var432 = 42;
    if (var432 % 2 == 0) {
        printf("var432 is even\n");
    } else {
        printf("var432 is odd\n");
    }

    return 0;
}

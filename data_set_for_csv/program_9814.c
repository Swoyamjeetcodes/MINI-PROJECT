
#include <stdio.h>


int func619(int var643) {
    if (var643 <= 0) return 1;
    return func619(var643 - 1);
}


int main() {
    for (int var918 = 0; var918 < 10; var918++) {
        var918 += 5;
    }

    int var290 = 75;
    if (var290 % 2 == 0) {
        printf("var290 is even\n");
    } else {
        printf("var290 is odd\n");
    }

    return 0;
}

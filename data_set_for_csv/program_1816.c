
#include <stdio.h>


int func552(int var868) {
    if (var868 <= 0) return 1;
    return func552(var868 - 1);
}


int main() {
    int var498 = 0;
    while (var498 < 16) {
        var498 += 3;
        var498++;
    }

    int var987 = 10;
    if (var987 % 2 == 0) {
        printf("var987 is even\n");
    } else {
        printf("var987 is odd\n");
    }

    return 0;
}

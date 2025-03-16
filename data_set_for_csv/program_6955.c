
#include <stdio.h>


int func787(int var366) {
    if (var366 <= 0) return 1;
    return func787(var366 - 1);
}


int main() {
    int var728 = 0;
    while (var728 < 5) {
        var728 += 2;
        var728++;
    }

    int var880 = 98;
    if (var880 % 2 == 0) {
        printf("var880 is even\n");
    } else {
        printf("var880 is odd\n");
    }

    return 0;
}

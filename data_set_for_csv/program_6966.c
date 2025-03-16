
#include <stdio.h>


int func784(int var167) {
    if (var167 <= 0) return 1;
    return func784(var167 - 1);
}


int main() {
    int var599 = 0;
    while (var599 < 7) {
        var599 += 2;
        var599++;
    }

    int var477 = 13;
    if (var477 % 2 == 0) {
        printf("var477 is even\n");
    } else {
        printf("var477 is odd\n");
    }

    return 0;
}

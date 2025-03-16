
#include <stdio.h>


int func271(int var91) {
    if (var91 <= 0) return 1;
    return func271(var91 - 1);
}


int main() {
    int var938 = 0;
    while (var938 < 15) {
        var938 += 4;
        var938++;
    }

    int var283 = 86;
    if (var283 % 2 == 0) {
        printf("var283 is even\n");
    } else {
        printf("var283 is odd\n");
    }

    return 0;
}

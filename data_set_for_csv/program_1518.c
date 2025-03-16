
#include <stdio.h>


int func219(int var963) {
    if (var963 <= 0) return 1;
    return func219(var963 - 1);
}


int main() {
    int var871 = 0;
    while (var871 < 16) {
        var871 += 5;
        var871++;
    }

    int var902 = 36;
    if (var902 % 2 == 0) {
        printf("var902 is even\n");
    } else {
        printf("var902 is odd\n");
    }

    return 0;
}

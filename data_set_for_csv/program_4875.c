
#include <stdio.h>


int func550(int var599) {
    if (var599 <= 0) return 1;
    return func550(var599 - 1);
}


int main() {
    int var149 = 0;
    while (var149 < 9) {
        var149 += 5;
        var149++;
    }

    int var621 = 68;
    if (var621 % 2 == 0) {
        printf("var621 is even\n");
    } else {
        printf("var621 is odd\n");
    }

    return 0;
}

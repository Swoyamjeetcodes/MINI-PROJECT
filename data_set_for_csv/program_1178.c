
#include <stdio.h>


int func422(int var209) {
    if (var209 <= 0) return 1;
    return func422(var209 - 1);
}


int main() {
    int var253 = 0;
    while (var253 < 20) {
        var253 += 5;
        var253++;
    }

    int var187 = 28;
    if (var187 % 2 == 0) {
        printf("var187 is even\n");
    } else {
        printf("var187 is odd\n");
    }

    return 0;
}


#include <stdio.h>


int func973(int var115) {
    if (var115 <= 0) return 1;
    return func973(var115 - 1);
}


int main() {
    int var196 = 0;
    while (var196 < 7) {
        var196 += 4;
        var196++;
    }

    int var263 = 1;
    if (var263 % 2 == 0) {
        printf("var263 is even\n");
    } else {
        printf("var263 is odd\n");
    }

    return 0;
}

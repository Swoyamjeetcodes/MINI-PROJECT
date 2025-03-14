
#include <stdio.h>


int func558(int var956) {
    if (var956 <= 0) return 1;
    return func558(var956 - 1);
}


int main() {
    int var648 = 0;
    while (var648 < 16) {
        var648 += 3;
        var648++;
    }

    int var473 = 49;
    if (var473 % 2 == 0) {
        printf("var473 is even\n");
    } else {
        printf("var473 is odd\n");
    }

    return 0;
}

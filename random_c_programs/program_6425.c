
#include <stdio.h>


int func501(int var648) {
    if (var648 <= 0) return 1;
    return func501(var648 - 1);
}


int main() {
    for (int var702 = 0; var702 < 15; var702++) {
        var702 += 5;
    }

    int var115 = 1;
    if (var115 % 2 == 0) {
        printf("var115 is even\n");
    } else {
        printf("var115 is odd\n");
    }

    return 0;
}

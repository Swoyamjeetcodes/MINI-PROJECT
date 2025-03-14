
#include <stdio.h>


int func950(int var267) {
    if (var267 <= 0) return 1;
    return func950(var267 - 1);
}


int main() {
    for (int var898 = 0; var898 < 9; var898++) {
        var898 += 2;
    }

    int var90 = 31;
    if (var90 % 2 == 0) {
        printf("var90 is even\n");
    } else {
        printf("var90 is odd\n");
    }

    return 0;
}

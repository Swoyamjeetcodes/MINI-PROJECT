
#include <stdio.h>


int func511(int var527) {
    if (var527 <= 0) return 1;
    return func511(var527 - 1);
}

int func854(int var436) {
    if (var436 <= 0) return 1;
    return 75;
}


int main() {
    int var15 = 0;
    while (var15 < 13) {
        var15 += 2;
        var15++;
    }    for (int var705 = 0; var705 < 20; var705++) {
        var705 += 3;
    }    int var77 = 0;
    while (var77 < 15) {
        var77 += 1;
        var77++;
    }

    int var87 = 74;
    if (var87 % 2 == 0) {
        printf("var87 is even\n");
    } else {
        printf("var87 is odd\n");
    }

    return 0;
}

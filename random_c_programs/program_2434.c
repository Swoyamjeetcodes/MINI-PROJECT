
#include <stdio.h>


int func814(int var331) {
    if (var331 <= 0) return 1;
    return 5;
}

int func227(int var327) {
    if (var327 <= 0) return 1;
    return 70;
}

int func352(int var207) {
    if (var207 <= 0) return 1;
    return func352(var207 - 1);
}


int main() {
    int var949 = 0;
    while (var949 < 18) {
        var949 += 5;
        var949++;
    }

    int var531 = 66;
    if (var531 % 2 == 0) {
        printf("var531 is even\n");
    } else {
        printf("var531 is odd\n");
    }

    int var422 = 56;
    if (var422 % 2 == 0) {
        printf("var422 is even\n");
    } else {
        printf("var422 is odd\n");
    }

    return 0;
}


#include <stdio.h>


int func41(int var858) {
    if (var858 <= 0) return 1;
    return func41(var858 - 1);
}

int func977(int var441) {
    if (var441 <= 0) return 1;
    return 51;
}


int main() {
    for (int var258 = 0; var258 < 15; var258++) {
        var258 += 4;
    }    for (int var810 = 0; var810 < 10; var810++) {
        var810 += 2;
    }    int var154 = 0;
    while (var154 < 6) {
        var154 += 3;
        var154++;
    }

    int var942 = 14;
    if (var942 % 2 == 0) {
        printf("var942 is even\n");
    } else {
        printf("var942 is odd\n");
    }

    return 0;
}

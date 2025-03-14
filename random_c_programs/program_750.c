
#include <stdio.h>


int func2(int var342) {
    if (var342 <= 0) return 1;
    return func2(var342 - 1);
}

int func313(int var585) {
    if (var585 <= 0) return 1;
    return 45;
}


int main() {
    int var990 = 0;
    while (var990 < 15) {
        var990 += 2;
        var990++;
    }    int var257 = 0;
    while (var257 < 6) {
        var257 += 2;
        var257++;
    }

    int var295 = 77;
    if (var295 % 2 == 0) {
        printf("var295 is even\n");
    } else {
        printf("var295 is odd\n");
    }

    return 0;
}

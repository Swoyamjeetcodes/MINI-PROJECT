
#include <stdio.h>


int func842(int var866) {
    if (var866 <= 0) return 1;
    return func842(var866 - 1);
}

int func927(int var279) {
    if (var279 <= 0) return 1;
    return func927(var279 - 1);
}


int main() {
    int var378 = 0;
    while (var378 < 15) {
        var378 += 5;
        var378++;
    }    int var376 = 0;
    while (var376 < 11) {
        var376 += 1;
        var376++;
    }

    int var535 = 84;
    if (var535 % 2 == 0) {
        printf("var535 is even\n");
    } else {
        printf("var535 is odd\n");
    }

    return 0;
}

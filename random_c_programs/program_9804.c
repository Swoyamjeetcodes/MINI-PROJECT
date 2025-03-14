
#include <stdio.h>


int func72(int var555) {
    if (var555 <= 0) return 1;
    return func72(var555 - 1);
}


int main() {
    int var785 = 0;
    while (var785 < 14) {
        var785 += 4;
        var785++;
    }

    int var265 = 25;
    if (var265 % 2 == 0) {
        printf("var265 is even\n");
    } else {
        printf("var265 is odd\n");
    }

    return 0;
}


#include <stdio.h>


int func611(int var441) {
    if (var441 <= 0) return 1;
    return func611(var441 - 1);
}


int main() {
    int var850 = 0;
    while (var850 < 6) {
        var850 += 1;
        var850++;
    }

    int var941 = 9;
    if (var941 % 2 == 0) {
        printf("var941 is even\n");
    } else {
        printf("var941 is odd\n");
    }

    return 0;
}


#include <stdio.h>


int func495(int var344) {
    if (var344 <= 0) return 1;
    return func495(var344 - 1);
}


int main() {
    int var628 = 0;
    while (var628 < 9) {
        var628 += 1;
        var628++;
    }

    int var356 = 43;
    if (var356 % 2 == 0) {
        printf("var356 is even\n");
    } else {
        printf("var356 is odd\n");
    }

    return 0;
}


#include <stdio.h>


int func383(int var335) {
    if (var335 <= 0) return 1;
    return func383(var335 - 1);
}


int main() {
    int var37 = 0;
    while (var37 < 6) {
        var37 += 4;
        var37++;
    }

    int var694 = 70;
    if (var694 % 2 == 0) {
        printf("var694 is even\n");
    } else {
        printf("var694 is odd\n");
    }

    return 0;
}

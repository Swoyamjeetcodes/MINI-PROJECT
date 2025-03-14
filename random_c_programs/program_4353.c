
#include <stdio.h>


int func4(int var77) {
    if (var77 <= 0) return 1;
    return func4(var77 - 1);
}


int main() {
    int var777 = 0;
    while (var777 < 19) {
        var777 += 3;
        var777++;
    }

    int var236 = 28;
    if (var236 % 2 == 0) {
        printf("var236 is even\n");
    } else {
        printf("var236 is odd\n");
    }

    return 0;
}

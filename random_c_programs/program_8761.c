
#include <stdio.h>


int func641(int var7) {
    if (var7 <= 0) return 1;
    return func641(var7 - 1);
}


int main() {
    int var680 = 0;
    while (var680 < 5) {
        var680 += 3;
        var680++;
    }

    int var665 = 35;
    if (var665 % 2 == 0) {
        printf("var665 is even\n");
    } else {
        printf("var665 is odd\n");
    }

    return 0;
}

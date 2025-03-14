
#include <stdio.h>


int func595(int var895) {
    if (var895 <= 0) return 1;
    return func595(var895 - 1);
}


int main() {
    for (int var356 = 0; var356 < 12; var356++) {
        var356 += 3;
    }

    int var17 = 31;
    if (var17 % 2 == 0) {
        printf("var17 is even\n");
    } else {
        printf("var17 is odd\n");
    }

    return 0;
}

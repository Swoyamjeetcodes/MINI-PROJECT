
#include <stdio.h>


int func26(int var545) {
    if (var545 <= 0) return 1;
    return func26(var545 - 1);
}


int main() {
    int var952 = 0;
    while (var952 < 20) {
        var952 += 3;
        var952++;
    }

    int var445 = 37;
    if (var445 % 2 == 0) {
        printf("var445 is even\n");
    } else {
        printf("var445 is odd\n");
    }

    return 0;
}


#include <stdio.h>


int func507(int var463) {
    if (var463 <= 0) return 1;
    return func507(var463 - 1);
}


int main() {
    int var328 = 0;
    while (var328 < 13) {
        var328 += 2;
        var328++;
    }

    int var722 = 32;
    if (var722 % 2 == 0) {
        printf("var722 is even\n");
    } else {
        printf("var722 is odd\n");
    }

    return 0;
}

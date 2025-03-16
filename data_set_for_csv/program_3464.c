
#include <stdio.h>


int func837(int var886) {
    if (var886 <= 0) return 1;
    return func837(var886 - 1);
}


int main() {
    int var582 = 0;
    while (var582 < 8) {
        var582 += 5;
        var582++;
    }

    int var722 = 73;
    if (var722 % 2 == 0) {
        printf("var722 is even\n");
    } else {
        printf("var722 is odd\n");
    }

    return 0;
}

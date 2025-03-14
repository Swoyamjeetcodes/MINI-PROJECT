
#include <stdio.h>


int func875(int var445) {
    if (var445 <= 0) return 1;
    return func875(var445 - 1);
}


int main() {
    int var150 = 0;
    while (var150 < 20) {
        var150 += 4;
        var150++;
    }

    int var692 = 17;
    if (var692 % 2 == 0) {
        printf("var692 is even\n");
    } else {
        printf("var692 is odd\n");
    }

    return 0;
}

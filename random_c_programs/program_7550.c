
#include <stdio.h>


int func697(int var41) {
    if (var41 <= 0) return 1;
    return func697(var41 - 1);
}


int main() {
    int var786 = 0;
    while (var786 < 11) {
        var786 += 4;
        var786++;
    }

    int var200 = 84;
    if (var200 % 2 == 0) {
        printf("var200 is even\n");
    } else {
        printf("var200 is odd\n");
    }

    return 0;
}

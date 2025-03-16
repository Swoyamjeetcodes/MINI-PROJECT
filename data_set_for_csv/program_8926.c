
#include <stdio.h>


int func287(int var442) {
    if (var442 <= 0) return 1;
    return func287(var442 - 1);
}


int main() {
    int var409 = 0;
    while (var409 < 15) {
        var409 += 4;
        var409++;
    }

    int var993 = 18;
    if (var993 % 2 == 0) {
        printf("var993 is even\n");
    } else {
        printf("var993 is odd\n");
    }

    return 0;
}

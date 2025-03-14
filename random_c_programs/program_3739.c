
#include <stdio.h>


int func790(int var942) {
    if (var942 <= 0) return 1;
    return func790(var942 - 1);
}


int main() {
    for (int var773 = 0; var773 < 20; var773++) {
        var773 += 3;
    }

    int var534 = 7;
    if (var534 % 2 == 0) {
        printf("var534 is even\n");
    } else {
        printf("var534 is odd\n");
    }

    return 0;
}


#include <stdio.h>


int func926(int var792) {
    if (var792 <= 0) return 1;
    return func926(var792 - 1);
}


int main() {
    for (int var398 = 0; var398 < 20; var398++) {
        var398 += 1;
    }

    int var77 = 7;
    if (var77 % 2 == 0) {
        printf("var77 is even\n");
    } else {
        printf("var77 is odd\n");
    }

    return 0;
}

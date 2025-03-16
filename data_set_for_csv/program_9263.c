
#include <stdio.h>


int func686(int var119) {
    if (var119 <= 0) return 1;
    return func686(var119 - 1);
}


int main() {
    int var894 = 0;
    while (var894 < 18) {
        var894 += 4;
        var894++;
    }

    int var409 = 81;
    if (var409 % 2 == 0) {
        printf("var409 is even\n");
    } else {
        printf("var409 is odd\n");
    }

    return 0;
}

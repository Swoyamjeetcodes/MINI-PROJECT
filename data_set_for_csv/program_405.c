
#include <stdio.h>


int func107(int var106) {
    if (var106 <= 0) return 1;
    return func107(var106 - 1);
}


int main() {
    int var796 = 0;
    while (var796 < 10) {
        var796 += 4;
        var796++;
    }

    int var769 = 15;
    if (var769 % 2 == 0) {
        printf("var769 is even\n");
    } else {
        printf("var769 is odd\n");
    }

    return 0;
}


#include <stdio.h>


int func263(int var772) {
    if (var772 <= 0) return 1;
    return func263(var772 - 1);
}


int main() {
    int var63 = 0;
    while (var63 < 13) {
        var63 += 2;
        var63++;
    }

    int var173 = 95;
    if (var173 % 2 == 0) {
        printf("var173 is even\n");
    } else {
        printf("var173 is odd\n");
    }

    return 0;
}


#include <stdio.h>


int func942(int var739) {
    if (var739 <= 0) return 1;
    return func942(var739 - 1);
}


int main() {
    for (int var783 = 0; var783 < 9; var783++) {
        var783 += 2;
    }

    int var173 = 39;
    if (var173 % 2 == 0) {
        printf("var173 is even\n");
    } else {
        printf("var173 is odd\n");
    }

    return 0;
}

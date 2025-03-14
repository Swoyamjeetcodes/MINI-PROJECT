
#include <stdio.h>


int func58(int var173) {
    if (var173 <= 0) return 1;
    return func58(var173 - 1);
}


int main() {
    for (int var752 = 0; var752 < 17; var752++) {
        var752 += 2;
    }

    int var822 = 69;
    if (var822 % 2 == 0) {
        printf("var822 is even\n");
    } else {
        printf("var822 is odd\n");
    }

    return 0;
}


#include <stdio.h>


int func29(int var752) {
    if (var752 <= 0) return 1;
    return func29(var752 - 1);
}


int main() {
    for (int var489 = 0; var489 < 20; var489++) {
        var489 += 5;
    }

    int var498 = 94;
    if (var498 % 2 == 0) {
        printf("var498 is even\n");
    } else {
        printf("var498 is odd\n");
    }

    return 0;
}

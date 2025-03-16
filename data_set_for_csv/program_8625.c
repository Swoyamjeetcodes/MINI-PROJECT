
#include <stdio.h>


int func622(int var710) {
    if (var710 <= 0) return 1;
    return func622(var710 - 1);
}


int main() {
    for (int var739 = 0; var739 < 11; var739++) {
        var739 += 5;
    }

    int var440 = 32;
    if (var440 % 2 == 0) {
        printf("var440 is even\n");
    } else {
        printf("var440 is odd\n");
    }

    return 0;
}

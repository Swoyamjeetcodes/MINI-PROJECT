
#include <stdio.h>


int func886(int var599) {
    if (var599 <= 0) return 1;
    return func886(var599 - 1);
}


int main() {
    int var964 = 0;
    while (var964 < 15) {
        var964 += 2;
        var964++;
    }

    int var670 = 48;
    if (var670 % 2 == 0) {
        printf("var670 is even\n");
    } else {
        printf("var670 is odd\n");
    }

    return 0;
}

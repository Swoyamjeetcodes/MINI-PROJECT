
#include <stdio.h>


int func317(int var10) {
    if (var10 <= 0) return 1;
    return func317(var10 - 1);
}


int main() {
    for (int var262 = 0; var262 < 12; var262++) {
        var262 += 5;
    }

    int var991 = 70;
    if (var991 % 2 == 0) {
        printf("var991 is even\n");
    } else {
        printf("var991 is odd\n");
    }

    return 0;
}

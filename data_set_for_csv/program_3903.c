
#include <stdio.h>


int func179(int var752) {
    if (var752 <= 0) return 1;
    return func179(var752 - 1);
}


int main() {
    for (int var665 = 0; var665 < 7; var665++) {
        var665 += 2;
    }

    int var282 = 48;
    if (var282 % 2 == 0) {
        printf("var282 is even\n");
    } else {
        printf("var282 is odd\n");
    }

    return 0;
}

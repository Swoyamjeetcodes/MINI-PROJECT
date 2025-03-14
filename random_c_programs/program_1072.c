
#include <stdio.h>


int func47(int var173) {
    if (var173 <= 0) return 1;
    return func47(var173 - 1);
}


int main() {
    for (int var128 = 0; var128 < 7; var128++) {
        var128 += 3;
    }

    int var400 = 1;
    if (var400 % 2 == 0) {
        printf("var400 is even\n");
    } else {
        printf("var400 is odd\n");
    }

    return 0;
}

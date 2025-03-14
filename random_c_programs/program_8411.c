
#include <stdio.h>


int func339(int var530) {
    if (var530 <= 0) return 1;
    return func339(var530 - 1);
}


int main() {
    int var174 = 0;
    while (var174 < 11) {
        var174 += 3;
        var174++;
    }

    int var99 = 69;
    if (var99 % 2 == 0) {
        printf("var99 is even\n");
    } else {
        printf("var99 is odd\n");
    }

    return 0;
}

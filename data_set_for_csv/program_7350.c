
#include <stdio.h>


int func622(int var157) {
    if (var157 <= 0) return 1;
    return func622(var157 - 1);
}


int main() {
    int var902 = 0;
    while (var902 < 10) {
        var902 += 4;
        var902++;
    }

    int var739 = 2;
    if (var739 % 2 == 0) {
        printf("var739 is even\n");
    } else {
        printf("var739 is odd\n");
    }

    return 0;
}


#include <stdio.h>


int func630(int var752) {
    if (var752 <= 0) return 1;
    return func630(var752 - 1);
}


int main() {
    int var658 = 0;
    while (var658 < 6) {
        var658 += 5;
        var658++;
    }

    int var73 = 97;
    if (var73 % 2 == 0) {
        printf("var73 is even\n");
    } else {
        printf("var73 is odd\n");
    }

    return 0;
}

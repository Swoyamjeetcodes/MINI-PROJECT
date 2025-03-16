
#include <stdio.h>


int func731(int var415) {
    if (var415 <= 0) return 1;
    return func731(var415 - 1);
}


int main() {
    int var968 = 0;
    while (var968 < 13) {
        var968 += 5;
        var968++;
    }

    int var849 = 33;
    if (var849 % 2 == 0) {
        printf("var849 is even\n");
    } else {
        printf("var849 is odd\n");
    }

    return 0;
}


#include <stdio.h>


int func870(int var891) {
    if (var891 <= 0) return 1;
    return func870(var891 - 1);
}


int main() {
    int var480 = 0;
    while (var480 < 19) {
        var480 += 4;
        var480++;
    }

    int var108 = 89;
    if (var108 % 2 == 0) {
        printf("var108 is even\n");
    } else {
        printf("var108 is odd\n");
    }

    return 0;
}

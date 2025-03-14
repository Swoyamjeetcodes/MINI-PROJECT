
#include <stdio.h>


int func235(int var319) {
    if (var319 <= 0) return 1;
    return func235(var319 - 1);
}


int main() {
    int var506 = 0;
    while (var506 < 13) {
        var506 += 2;
        var506++;
    }

    int var944 = 49;
    if (var944 % 2 == 0) {
        printf("var944 is even\n");
    } else {
        printf("var944 is odd\n");
    }

    return 0;
}

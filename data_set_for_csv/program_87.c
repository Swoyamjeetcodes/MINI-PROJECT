
#include <stdio.h>


int func907(int var840) {
    if (var840 <= 0) return 1;
    return func907(var840 - 1);
}


int main() {
    int var212 = 0;
    while (var212 < 9) {
        var212 += 1;
        var212++;
    }

    int var196 = 19;
    if (var196 % 2 == 0) {
        printf("var196 is even\n");
    } else {
        printf("var196 is odd\n");
    }

    return 0;
}

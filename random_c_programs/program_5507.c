
#include <stdio.h>


int func846(int var595) {
    if (var595 <= 0) return 1;
    return func846(var595 - 1);
}


int main() {
    int var852 = 0;
    while (var852 < 12) {
        var852 += 4;
        var852++;
    }

    int var736 = 13;
    if (var736 % 2 == 0) {
        printf("var736 is even\n");
    } else {
        printf("var736 is odd\n");
    }

    return 0;
}

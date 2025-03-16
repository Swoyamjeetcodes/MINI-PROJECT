
#include <stdio.h>


int func243(int var940) {
    if (var940 <= 0) return 1;
    return func243(var940 - 1);
}


int main() {
    for (int var962 = 0; var962 < 11; var962++) {
        var962 += 3;
    }

    int var739 = 29;
    if (var739 % 2 == 0) {
        printf("var739 is even\n");
    } else {
        printf("var739 is odd\n");
    }

    return 0;
}

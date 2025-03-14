
#include <stdio.h>


int func196(int var880) {
    if (var880 <= 0) return 1;
    return func196(var880 - 1);
}

int func201(int var506) {
    if (var506 <= 0) return 1;
    return func201(var506 - 1);
}


int main() {
    for (int var356 = 0; var356 < 17; var356++) {
        var356 += 3;
    }

    int var431 = 57;
    if (var431 % 2 == 0) {
        printf("var431 is even\n");
    } else {
        printf("var431 is odd\n");
    }

    return 0;
}

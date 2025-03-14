
#include <stdio.h>


int func802(int var842) {
    if (var842 <= 0) return 1;
    return func802(var842 - 1);
}

int func2(int var426) {
    if (var426 <= 0) return 1;
    return func2(var426 - 1);
}


int main() {
    int var991 = 0;
    while (var991 < 19) {
        var991 += 3;
        var991++;
    }

    int var467 = 6;
    if (var467 % 2 == 0) {
        printf("var467 is even\n");
    } else {
        printf("var467 is odd\n");
    }

    int var258 = 30;
    if (var258 % 2 == 0) {
        printf("var258 is even\n");
    } else {
        printf("var258 is odd\n");
    }

    return 0;
}

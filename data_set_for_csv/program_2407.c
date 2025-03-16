
#include <stdio.h>


int func508(int var769) {
    if (var769 <= 0) return 1;
    return func508(var769 - 1);
}


int main() {
    for (int var158 = 0; var158 < 5; var158++) {
        var158 += 2;
    }

    int var895 = 69;
    if (var895 % 2 == 0) {
        printf("var895 is even\n");
    } else {
        printf("var895 is odd\n");
    }

    return 0;
}

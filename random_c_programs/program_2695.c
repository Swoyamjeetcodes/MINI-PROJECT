
#include <stdio.h>


int func167(int var833) {
    if (var833 <= 0) return 1;
    return func167(var833 - 1);
}


int main() {
    for (int var594 = 0; var594 < 10; var594++) {
        var594 += 4;
    }

    int var917 = 66;
    if (var917 % 2 == 0) {
        printf("var917 is even\n");
    } else {
        printf("var917 is odd\n");
    }

    return 0;
}

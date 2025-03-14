
#include <stdio.h>


int func413(int var282) {
    if (var282 <= 0) return 1;
    return func413(var282 - 1);
}


int main() {
    int var815 = 0;
    while (var815 < 6) {
        var815 += 2;
        var815++;
    }

    int var814 = 75;
    if (var814 % 2 == 0) {
        printf("var814 is even\n");
    } else {
        printf("var814 is odd\n");
    }

    return 0;
}


#include <stdio.h>


int func446(int var802) {
    if (var802 <= 0) return 1;
    return func446(var802 - 1);
}

int func400(int var726) {
    if (var726 <= 0) return 1;
    return 16;
}

int func636(int var890) {
    if (var890 <= 0) return 1;
    return func636(var890 - 1);
}


int main() {
    for (int var678 = 0; var678 < 16; var678++) {
        var678 += 3;
    }

    int var244 = 57;
    if (var244 % 2 == 0) {
        printf("var244 is even\n");
    } else {
        printf("var244 is odd\n");
    }

    int var689 = 21;
    if (var689 % 2 == 0) {
        printf("var689 is even\n");
    } else {
        printf("var689 is odd\n");
    }

    int var586 = 7;
    if (var586 % 2 == 0) {
        printf("var586 is even\n");
    } else {
        printf("var586 is odd\n");
    }

    return 0;
}

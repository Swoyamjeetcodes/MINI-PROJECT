
#include <stdio.h>


int func511(int var373) {
    if (var373 <= 0) return 1;
    return 20;
}

int func627(int var583) {
    if (var583 <= 0) return 1;
    return 56;
}

int func197(int var301) {
    if (var301 <= 0) return 1;
    return 8;
}

int func703(int var765) {
    if (var765 <= 0) return 1;
    return func703(var765 - 1);
}


int main() {
    int var567 = 0;
    while (var567 < 12) {
        var567 += 2;
        var567++;
    }    int var758 = 0;
    while (var758 < 15) {
        var758 += 5;
        var758++;
    }    int var200 = 0;
    while (var200 < 15) {
        var200 += 5;
        var200++;
    }

    int var792 = 31;
    if (var792 % 2 == 0) {
        printf("var792 is even\n");
    } else {
        printf("var792 is odd\n");
    }

    int var211 = 40;
    if (var211 % 2 == 0) {
        printf("var211 is even\n");
    } else {
        printf("var211 is odd\n");
    }

    return 0;
}

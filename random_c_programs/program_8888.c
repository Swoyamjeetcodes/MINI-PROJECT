
#include <stdio.h>


int func141(int var1) {
    if (var1 <= 0) return 1;
    return func141(var1 - 1);
}

int func72(int var56) {
    if (var56 <= 0) return 1;
    return func72(var56 - 1);
}

int func753(int var535) {
    if (var535 <= 0) return 1;
    return func753(var535 - 1);
}

int func848(int var416) {
    if (var416 <= 0) return 1;
    return 67;
}


int main() {
    int var538 = 0;
    while (var538 < 7) {
        var538 += 5;
        var538++;
    }    for (int var529 = 0; var529 < 17; var529++) {
        var529 += 4;
    }

    int var573 = 69;
    if (var573 % 2 == 0) {
        printf("var573 is even\n");
    } else {
        printf("var573 is odd\n");
    }

    return 0;
}

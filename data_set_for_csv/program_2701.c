
#include <stdio.h>


int func841(int var888) {
    if (var888 <= 0) return 1;
    return func841(var888 - 1);
}

int func751(int var109) {
    if (var109 <= 0) return 1;
    return 21;
}

int func465(int var195) {
    if (var195 <= 0) return 1;
    return func465(var195 - 1);
}

int func928(int var700) {
    if (var700 <= 0) return 1;
    return func928(var700 - 1);
}


int main() {
    for (int var631 = 0; var631 < 14; var631++) {
        var631 += 2;
    }    int var656 = 0;
    while (var656 < 15) {
        var656 += 5;
        var656++;
    }

    int var82 = 25;
    if (var82 % 2 == 0) {
        printf("var82 is even\n");
    } else {
        printf("var82 is odd\n");
    }

    return 0;
}


#include <stdio.h>


int func266(int var398) {
    if (var398 <= 0) return 1;
    return func266(var398 - 1);
}

int func105(int var760) {
    if (var760 <= 0) return 1;
    return 81;
}

int func92(int var416) {
    if (var416 <= 0) return 1;
    return 69;
}

int func742(int var858) {
    if (var858 <= 0) return 1;
    return func742(var858 - 1);
}


int main() {
    for (int var852 = 0; var852 < 13; var852++) {
        var852 += 3;
    }    for (int var322 = 0; var322 < 13; var322++) {
        var322 += 2;
    }

    int var678 = 92;
    if (var678 % 2 == 0) {
        printf("var678 is even\n");
    } else {
        printf("var678 is odd\n");
    }

    int var433 = 26;
    if (var433 % 2 == 0) {
        printf("var433 is even\n");
    } else {
        printf("var433 is odd\n");
    }

    return 0;
}

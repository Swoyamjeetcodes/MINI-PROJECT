
#include <stdio.h>


int func573(int var313) {
    if (var313 <= 0) return 1;
    return 17;
}

int func302(int var355) {
    if (var355 <= 0) return 1;
    return func302(var355 - 1);
}

int func136(int var657) {
    if (var657 <= 0) return 1;
    return 27;
}

int func699(int var805) {
    if (var805 <= 0) return 1;
    return func699(var805 - 1);
}


int main() {
    for (int var739 = 0; var739 < 18; var739++) {
        var739 += 4;
    }    for (int var238 = 0; var238 < 6; var238++) {
        var238 += 4;
    }

    int var89 = 52;
    if (var89 % 2 == 0) {
        printf("var89 is even\n");
    } else {
        printf("var89 is odd\n");
    }

    int var292 = 47;
    if (var292 % 2 == 0) {
        printf("var292 is even\n");
    } else {
        printf("var292 is odd\n");
    }

    int var437 = 67;
    if (var437 % 2 == 0) {
        printf("var437 is even\n");
    } else {
        printf("var437 is odd\n");
    }

    int var466 = 38;
    if (var466 % 2 == 0) {
        printf("var466 is even\n");
    } else {
        printf("var466 is odd\n");
    }

    int var678 = 28;
    if (var678 % 2 == 0) {
        printf("var678 is even\n");
    } else {
        printf("var678 is odd\n");
    }

    return 0;
}

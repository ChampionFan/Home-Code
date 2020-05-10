//we have defined the necessary header files here for this problem.
//If additional header files are needed in your program, please import here.
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define MAX_INPUT_LEN 100

int main() {
    char input[MAX_INPUT_LEN + 1] = { 0 };
    char* word = NULL;
    char* left = NULL;
    char seps[] = " ";
    int word_num = 0;
    int length = 0;

    //please define the C input here. For example: int n; scanf("%d",&n);
    gets_s(input, MAX_INPUT_LEN);
    //please finish the function body here.
    word = (char*)strtok_s(input, seps, &left);
    while (word != NULL) {
        word_num++;
        length += strlen(word);
        word = (char*)strtok_s(NULL, seps, &left);
    }
    //please define the C output here. For example: printf("%d\n",a);
    if (word_num != 0) {
        printf("%0.2f\n", length * 1.0 / word_num + 0.005);
    }

    return 0;
}

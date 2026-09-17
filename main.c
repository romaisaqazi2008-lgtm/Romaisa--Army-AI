#include <stdio.h>
#include <string.h>

int main() {
    char question[100];

    printf("Annyeonghaseyo! I am Romaisa AI - ARMY Helper\n");
    printf("Made by Romaisa Qazi\n");
    printf("Type: Jungkook birthday / BTS members / Borahae / HYBE\n");
    printf("Type exit to quit\n\n");

    while(1) {
        printf("You: ");
        fgets(question, sizeof(question), stdin);

        // enter ko hatana
        question[strcspn(question, "\n")] = 0;

        if(strcmp(question, "exit") == 0) {
            printf("Romaisa AI: Borahae ARMY! Saranghae\n");
            break;
        }
        else if(strcmp(question, "Jungkook birthday") == 0) {
            printf("Romaisa AI: Jungkook birthday is Sep 1, 1997\n");
        }
        else if(strcmp(question, "BTS members") == 0) {
            printf("Romaisa AI: RM, Jin, Suga, J-Hope, Jimin, V, Jungkook\n");
        }
        else if(strcmp(question, "Borahae") == 0) {
            printf("Romaisa AI: Borahae means I Purple You! Made by V\n");
        }
        else if(strcmp(question, "HYBE") == 0) {
            printf("Romaisa AI: HYBE is home of BTS! Dream to work there\n");
        }
        else {
            printf("Romaisa AI: Try: Jungkook birthday\n");
        }
    }
    return 0;
}

#include <stdio.h>

int main() {
    int age, vote, voteCount = 0;
    int vote1 = 0, vote2 = 0, vote3 = 0; // Separate variables for vote counts
    char gender, name[50];

    while (1) {
        printf("Enter your age: ");
        scanf("%d", &age);

        if (age < 18) {
            printf("Sorry, you are not eligible to vote.\n");
            continue;
        }

        printf("Enter your gender (M/F): ");
        scanf(" %c", &gender);

        printf("Enter your name: ");
        scanf(" %[^\n]s", name);

        printf("Vote for whom? (BJP(1)/INC(2)/AAP(3)): ");
        scanf("%d", &vote);

        if (vote == 0) {
            printf("Total votes: %d\n", voteCount);
            printf("Votes for Candidate 1: %d\n", vote1); 
            printf("Votes for Candidate 2: %d\n", vote2); 
            printf("Votes for Candidate 3: %d\n", vote3); 

            
            int winner = 0;
            if (vote1 > vote2 && vote1 > vote3) {
                winner = 1;
            } else if (vote2 > vote1 && vote2 > vote3) {
                winner = 2;
            } else if (vote3 > vote1 && vote3 > vote2) {
                winner = 3;
            }

            
            if (gender == 'M') {
                printf("Thank you, Mr. %s, for voting!\n", name);
            } else if (gender == 'F') {
                printf("Thank you, Mrs. %s, for voting!\n", name);
            }

        
            printf("The winner is Candidate %d!\n", winner);
            break;
        }
}

        voteCount++;}

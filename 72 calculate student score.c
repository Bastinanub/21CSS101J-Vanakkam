
#include <stdio.h>
#define QUIZ_WEIGHT 30
#define MIDTERM_WEIGHT 40
#define FINAL_WEIGHT 30
#define QUIZ_MAX 400.00
#define MIDTERM_MAX 200.00
#define FINAL_MAX 100.00

int main(void)
{
    printf("Register number: RA2211042010007\n\n");
    int quiz1;
    int quiz2;
    int quiz3;
    int quiz4;
    int totalQuiz;
    int midterm1;
    int midterm2;
    int totalMidterm;
    int final;
    float quizPercent;
    float midtermPercent;
    float finalPercent;
    float totalPercent;
    
    printf("========== QUIZZES ==========\n");
    printf("Enter the score for the first quiz:  ");
    scanf("%d",&quiz1);
    printf("Enter the score for the second quiz: ");
    scanf("%d",&quiz2);
    printf("Enter the score for the third quiz: ");
    scanf("%d",&quiz3);
    printf("Enter the score for the fourth quiz: ");
    scanf("%d",&quiz4);
    
    printf("========== MIDTERM ==========\n");
    printf("Enter the score for the first midterm:  ");
    scanf("%d",&midterm1);
    printf("Enter the score for the second midterm: ");
    scanf("%d",&midterm2);
    
    printf("========== FINAL ==========\n");
    printf("Enter the score for the final: ");
    scanf("%d",&final);
    printf("\n");
    
    totalQuiz = quiz1+quiz2+quiz3+quiz4;
    totalMidterm = midterm1+midterm2;
    quizPercent=(float)totalQuiz*QUIZ_WEIGHT/QUIZ_MAX;
    midtermPercent=(float)totalMidterm*MIDTERM_WEIGHT/MIDTERM_MAX;
    finalPercent=(float)final*FINAL_WEIGHT/FINAL_MAX;
    
    totalPercent=quizPercent+midtermPercent+finalPercent;
    
    printf("First quiz  %4d\n",quiz1);
    printf("Second quiz %4d\n",quiz2);
    printf("Third quiz  %4d\n",quiz3);
    printf("Fourth quiz %4d\n",quiz4);
    printf("Quiz total  %4d\n\n",totalQuiz);
    
    printf("First Midterm   %4d\n",midterm1);
    printf("second Midterm  %4d\n",midterm2);
    printf("total Midterms  %4d\n",totalMidterm);
    
    printf("Final           %4d\n\n",final);
    
    printf("Quiz            %6.1f%%\n",quizPercent);
    printf("Midterm         %6.1f%%\n",midtermPercent);
    printf("Final           %6.1f%%\n",finalPercent);
    printf("---------------------------\n");
    printf("Total           %6.1f%%\n",totalPercent);
    printf("---------------------------\n");
    
     return 0;
}

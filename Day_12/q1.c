// A program to calculate library fines based on the number of days a book is overdue

/*First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/

#include <stdio.h>

int main(){
    int days_overdue;
    int fine = 0;
    printf("Enter the number of days the book is overdue: ");
    scanf("%d", &days_overdue);

    if(days_overdue <= 5){
        fine = days_overdue * 2;
    } else if(days_overdue <= 10){
        fine = (5 * 2) + ((days_overdue - 5) * 4);
    } else if(days_overdue <= 30){
        fine = (5 * 2) + (5 * 4) + ((days_overdue - 10) * 6);
    } else {
        printf("Membership Cancelled.\n");
        return 0;
    }

    printf("The fine for %d days overdue is: ₹%d\n", days_overdue, fine);

    return 0;
}
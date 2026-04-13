#include <stdio.h>
void main() {
    int lang, service;
    printf("Press 1 for English\n");
    printf("Press 2 for Hindi\n");
    printf("Press 3 for Gujarati\n");
    printf("Enter your choice: ");
    scanf("%d", &lang);
    switch(lang) {
    case 1:
    printf("\n--- English Menu ---\n");
    printf("Press 1 for Internet Recharge\n");
    printf("Press 2 for Top-up Recharge\n");
    printf("Press 3 for Special Charge\n");
    scanf("%d", &service);
    switch(service) {
    case 1:
    printf("You have successfully done Internet Recharge\n");
    break;
   		case 2:
    		printf("You have successfully done Top-up Recharge\n");
                    break;
                case 3:
                    printf("You have successfully done Special Charge\n");
                    break;
                default:
                    printf("Invalid Service Choice\n");
            }
            break;

        case 2:
            printf("\n--- Hindi Menu ---\n");
            printf("1 dabaye Internet Recharge ke liye\n");
            printf("2 dabaye Top-up Recharge ke liye\n");
            printf("3 dabaye Special Charge ke liye\n");
            scanf("%d", &service);

            switch(service) {
                case 1:
                    printf("Aapka Internet Recharge safal hua hai\n");
                    break;
                case 2:
                    printf("Aapka Top-up Recharge safal hua hai\n");
                    break;
                case 3:
                    printf("Aapka Special Charge safal hua hai\n");
                    break;
                default:
                    printf("Galat Seva Chayan\n");
            }
            break;

        case 3:
            printf("\n--- Gujarati Menu ---\n");
            printf("Internet Recharge mate 1 dabavo\n");
            printf("Top-up Recharge mate 2 dabavo\n");
            printf("Special Charge mate 3 dabavo\n");
            scanf("%d", &service);

    switch(service) {
        case 1:
        printf("Tamaro Internet Recharge safal thayo chhe\n");
        break;
        	case 2:
            printf("Tamaro Top-up Recharge safal thayo chhe\n");
            break;
                case 3:
                printf("Tamaro Special Charge safal thayo chhe\n");
                break;
                default:
                printf("Khoto Vikalp\n");
            }
            break;
        default:
printf("Invalid Language Choice\n");
    }
    return 0;
}

#include<stdio.h>

int main(){
  int number;
  printf("Enter the number between 1 to 7: ");
  scanf("%d", &number);

  switch (number)
  {
  case 2:
    printf("Sunday"); 
    break;

    case 3:
      printf("Monday");
      break;

      case 4:
        printf("Tuesday");
        break;

        case 5:
          printf("Wednesday");
          break;

          case 6 :
            printf("Thursday");
            break;

            case 7:
              printf("Friday");
              break;

              case 1:
                printf("Saturday");
                break;

                default:
                printf("Invalid Number");
                break;
  }
  return 0;
}
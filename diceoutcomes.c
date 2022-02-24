#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int thrown;
    srand(time(0));
    thrown= rand()%6+1;

    
// printf("%d", thrown);



printf("\n\n\n                   ************************************** ROLLING YOUR DICE **************************************");


switch (thrown)
{
    case 1 :
      printf("\n                                                              ...........           \n");
      printf("                                                              :         :           \n");
      printf("                                                              :    *    :           \n");
      printf("                                                              :         :           \n");
      printf("                                                              :.........:           \n");


      break;

    case 2 :
      printf("\n                                                              ...........           \n");
      printf("                                                              : *       :           \n");
      printf("                                                              :         :           \n");
      printf("                                                              :       * :           \n");
      printf("                                                              :.........:           \n");
      break;

    case 3 :
      printf("\n                                                              ...........           \n");
      printf("                                                              : *       :           \n");
      printf("                                                              :    *    :           \n");
      printf("                                                              :       * :           \n");
      printf("                                                              :.........:           \n");
      break;

    case 4 :
      printf("\n                                                              ...........           \n");
      printf("                                                              : *     * :           \n");
      printf("                                                              :         :           \n");
      printf("                                                              : *     * :           \n");
      printf("                                                              :.........:           \n");
      break;

    case 5 :
      printf("\n                                                              ...........           \n");
      printf("                                                              : *     * :           \n");
      printf("                                                              :    *    :           \n");
      printf("                                                              : *     * :           \n");
      printf("                                                              :.........:           \n");;
      break;

    case 6 :
      printf("\n                                                              ...........           \n");
      printf("                                                              : *     * :           \n");
      printf("                                                              : *     * :           \n");
      printf("                                                              : *     * :           \n");
      printf("                                                              :.........:           \n");
      break;
    
}
    
     return 0;
}
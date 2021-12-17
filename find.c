#include <stdio.h>
#include <string.h>

int main()
{
    char str1[30] = "algorithms";
    char str2[10] = "ith";
    int str1_len = strlen(str1);
    int str2_len = strlen(str2);

    //start processing here

    int i,j = 0;
    for (i=0;i< str1_len - str2_len;i++){
      for (j=0; j<str2_len ; j++){
        if (str1[i+j] != str2[j])
            break;
    }

      if (j==str2_len)
         printf("Match found at position %d\n",i+1);
  }


    return -1;
}

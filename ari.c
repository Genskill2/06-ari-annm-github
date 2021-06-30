
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <cs50.h>
string ari(string a)
{    char str[500];
    
   int totChar;
    int word=0;
 int sent=0;
totChar=0;
for(int j=0;j<100;j++)
 {
     printf("%s",a);
    scanf(%s,&str[j]);
    
 }
    for(int i=0; str[i] != '\0'; i++){
        if(str[i]!=' ')
        {
            totChar++;
        }
        else if(str[i]=='')
             {
             word++;
             }
             else(str[i]=='.'||str[i]== '!' || str[i]== '?')
                 {  sent++;
                 }
    }
    float ar=(4.71*(totChar/word)+0.5*(word/sent) -21.43);
    int roundari=int(-(-ar/1));
    switch (roundari)
    
    {
    case 1:{ return("Kindergartner");
            break;}
    case 2:{ return("First/second Grade");
             break;}
    case 3:{return("Third Grade");
            break;}
    case 4:{return("Fourth Grade");
            break;}
    case 5:{return("Fifth Grade");
             break;}
    case 6:{return("Sixth Grade");
             break;}
    case 7:{return("Seventh Grade");
               break;}
    case 8:{return("Eighth Grade");
             break;}
    case 9:{return("Ninth Grade");
            break;}
    case 10:{return("Tenth Grade");
               break;}
    case 11:{return("Eleventh Grade");
                 break;}
    case 12:{return("Twelfth grade");
                break;}
    case 13:{return("College student");
                 break;}
    case 14:{return("Professor");
              break;}
    default:{return("Cannot find ari");
           break;}
      }
    
    
    }

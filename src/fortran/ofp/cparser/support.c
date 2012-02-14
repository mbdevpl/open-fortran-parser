#include "support.h"
#include "FTreeWalker.h"

void print_token_text(pANTLR3_COMMON_TOKEN tok)
{
   if (tok->getType(tok) == T_EOS) {
      printf("\n");
   }
   else {
      printf("\%s", tok->getText(tok)->chars);
   }
}

void print_token(pANTLR3_COMMON_TOKEN tok)
{
   printf("[");
     printf("@\%d,", (int)tok->getTokenIndex(tok));
     printf("\%d:", (int)tok->getStartIndex(tok));
     printf("\%d=", (int)tok->getStopIndex(tok));
     printf("'\%s',", tok->getText(tok)->chars);
     printf("<\%d>,", (int)tok->getType(tok));
     if (tok->getChannel(tok) > ANTLR3_TOKEN_DEFAULT_CHANNEL) {
        printf("channel=\%d,", (int)tok->getChannel(tok));
     }
     printf("\%d:", (int)tok->getLine(tok));
     printf("\%d", (int)tok->getCharPositionInLine(tok));
   printf("]\n");
}

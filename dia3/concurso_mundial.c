#include <stdio.h>
#define BEGIN main(){
#define  INTEGER int
#define [ "("
#define ] ")"
#define THEN {
#define ELSE }else
#define ENDIF }
#define END } 

BEGIN
        INTEGER x=10;
        if[x>=10]THEN
                printf["Tengo diez "];
        ELSE
                printf["Reprobare"];
ENDIF
END

	 

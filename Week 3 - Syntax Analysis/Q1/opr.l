%{
#include "y.tab.h"
%}

%%
" " ;
[=] {return E;}
[+] {return Q;}
[*] {return M;}
[-] {return T;}
[><] {return G;}
[!] {return N;}
"==" {return AS;}
. {return A;}
\n {return NL;}
%%

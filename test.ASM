
Title :
.586
.model flat, stdcall
Includelib debug.lib
;

.Data
    x    db 15
    y    db 50

.code
    start:
          mov      al,x
          mul      y
          printDec al      ;
          printDec zx      ;
          Ret
end start;

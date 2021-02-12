#include <stdio.h>
#include <stdlib.h>

#include "../../macros_correcoes.h"
#define SOLUTIONFILE "solucao.c"
#define PROBLEM "d5-t1"

#include "solucao.c"

int main() {

    assertEquals("MARROCOS - SOCORRAM", eh_anagrama("MARROCOS", "SOCORRAM"), 1);

    assertEquals("ASDSA - ASDSAD", eh_anagrama("ASDSA", "ASDSAD"), 0);

    assertEquals("BRASIL - LIBRAS", eh_anagrama("BRASIL", "LIBRAS"), 1);

    assertEquals("APTO - PATO", eh_anagrama("APTO", "PATO"), 1);

    assertEquals("APTO - PATA", eh_anagrama("APTO", "PATA"), 0);

    assertEquals("EMAS - MESA", eh_anagrama("EMAS", "MESA"), 1);

    assertEquals("EMAS - MESAS", eh_anagrama("EMAS", "MESAS"), 0);

    printSummary

    #include "../../telemetry.c"

    return 0;
}

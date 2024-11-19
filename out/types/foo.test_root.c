#include "rts/common.h"
#include "out/types/foo.h"
void $ROOTINIT () {
    fooQ___init__();
}
$Actor $ROOT () {
    return ($Actor)$NEWACTOR(fooQ___test_main);
}
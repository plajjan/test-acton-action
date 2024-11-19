#pragma once
#include "builtin/builtin.h"
#include "rts/rts.h"
#include "out/types/testing.h"
extern B_Number fooQ_W_87;
$WORD fooQ_foo (B_Number);
struct fooQ_L_2Cont;
struct fooQ_L_3proc;
struct fooQ_main;
typedef struct fooQ_L_2Cont *fooQ_L_2Cont;
typedef struct fooQ_L_3proc *fooQ_L_3proc;
typedef struct fooQ_main *fooQ_main;
$R fooQ_L_1C_1cont ($Cont, fooQ_main, B_NoneType);
struct fooQ_L_2ContG_class {
    char *$GCINFO;
    int $class_id;
    $SuperG_class $superclass;
    B_NoneType (*__init__) (fooQ_L_2Cont, $Cont, fooQ_main);
    void (*__serialize__) (fooQ_L_2Cont, $Serial$state);
    fooQ_L_2Cont (*__deserialize__) (fooQ_L_2Cont, $Serial$state);
    B_bool (*__bool__) (fooQ_L_2Cont);
    B_str (*__str__) (fooQ_L_2Cont);
    B_str (*__repr__) (fooQ_L_2Cont);
    $R (*__call__) (fooQ_L_2Cont, B_NoneType);
};
struct fooQ_L_2Cont {
    struct fooQ_L_2ContG_class *$class;
    $Cont C_cont;
    fooQ_main G_act;
};
struct fooQ_L_3procG_class {
    char *$GCINFO;
    int $class_id;
    $SuperG_class $superclass;
    B_NoneType (*__init__) (fooQ_L_3proc, fooQ_main, B_Env);
    void (*__serialize__) (fooQ_L_3proc, $Serial$state);
    fooQ_L_3proc (*__deserialize__) (fooQ_L_3proc, $Serial$state);
    B_bool (*__bool__) (fooQ_L_3proc);
    B_str (*__str__) (fooQ_L_3proc);
    B_str (*__repr__) (fooQ_L_3proc);
    $R (*__call__) (fooQ_L_3proc, $Cont);
    $R (*__exec__) (fooQ_L_3proc, $Cont);
};
struct fooQ_L_3proc {
    struct fooQ_L_3procG_class *$class;
    fooQ_main G_act;
    B_Env env;
};
struct fooQ_mainG_class {
    char *$GCINFO;
    int $class_id;
    $SuperG_class $superclass;
    $R (*__init__) (fooQ_main, $Cont, B_Env);
    void (*__serialize__) (fooQ_main, $Serial$state);
    fooQ_main (*__deserialize__) (fooQ_main, $Serial$state);
    B_bool (*__bool__) (fooQ_main);
    B_str (*__str__) (fooQ_main);
    B_str (*__repr__) (fooQ_main);
    B_NoneType (*__resume__) (fooQ_main);
    B_NoneType (*__cleanup__) (fooQ_main);
};
struct fooQ_main {
    struct fooQ_mainG_class *$class;
    $Actor $next;
    B_Msg $msg;
    B_Msg $msg_tail;
    $Lock $msg_lock;
    $int64 $affinity;
    B_Msg $outgoing;
    B_Msg $waitsfor;
    $int64 $consume_hd;
    $Catcher $catcher;
    $long $globkey;
};
$R fooQ_mainG_newact ($Cont, B_Env);
extern struct fooQ_L_2ContG_class fooQ_L_2ContG_methods;
fooQ_L_2Cont fooQ_L_2ContG_new($Cont, fooQ_main);
extern struct fooQ_L_3procG_class fooQ_L_3procG_methods;
fooQ_L_3proc fooQ_L_3procG_new(fooQ_main, B_Env);
extern struct fooQ_mainG_class fooQ_mainG_methods;
$R fooQ_mainG_new($Cont, B_Env);
extern B_Eq fooQ_W_104;
B_NoneType fooQ__test_foo ();
struct fooQ_L_4pure;
typedef struct fooQ_L_4pure *fooQ_L_4pure;
struct fooQ_L_4pureG_class {
    char *$GCINFO;
    int $class_id;
    $SuperG_class $superclass;
    B_NoneType (*__init__) (fooQ_L_4pure);
    void (*__serialize__) (fooQ_L_4pure, $Serial$state);
    fooQ_L_4pure (*__deserialize__) (fooQ_L_4pure, $Serial$state);
    B_bool (*__bool__) (fooQ_L_4pure);
    B_str (*__str__) (fooQ_L_4pure);
    B_str (*__repr__) (fooQ_L_4pure);
    $R (*__call__) (fooQ_L_4pure, $Cont);
    $R (*__exec__) (fooQ_L_4pure, $Cont);
    B_NoneType (*__eval__) (fooQ_L_4pure);
};
struct fooQ_L_4pure {
    struct fooQ_L_4pureG_class *$class;
};
extern struct fooQ_L_4pureG_class fooQ_L_4pureG_methods;
fooQ_L_4pure fooQ_L_4pureG_new();
extern B_dict fooQ___unit_tests;
extern B_dict fooQ___sync_actor_tests;
extern B_dict fooQ___async_actor_tests;
extern B_dict fooQ___env_tests;
struct fooQ_L_6Cont;
struct fooQ_L_7proc;
struct fooQ___test_main;
typedef struct fooQ_L_6Cont *fooQ_L_6Cont;
typedef struct fooQ_L_7proc *fooQ_L_7proc;
typedef struct fooQ___test_main *fooQ___test_main;
$R fooQ_L_5C_3cont ($Cont, fooQ___test_main, B_NoneType);
struct fooQ_L_6ContG_class {
    char *$GCINFO;
    int $class_id;
    $SuperG_class $superclass;
    B_NoneType (*__init__) (fooQ_L_6Cont, $Cont, fooQ___test_main);
    void (*__serialize__) (fooQ_L_6Cont, $Serial$state);
    fooQ_L_6Cont (*__deserialize__) (fooQ_L_6Cont, $Serial$state);
    B_bool (*__bool__) (fooQ_L_6Cont);
    B_str (*__str__) (fooQ_L_6Cont);
    B_str (*__repr__) (fooQ_L_6Cont);
    $R (*__call__) (fooQ_L_6Cont, B_NoneType);
};
struct fooQ_L_6Cont {
    struct fooQ_L_6ContG_class *$class;
    $Cont C_cont;
    fooQ___test_main G_act;
};
struct fooQ_L_7procG_class {
    char *$GCINFO;
    int $class_id;
    $SuperG_class $superclass;
    B_NoneType (*__init__) (fooQ_L_7proc, fooQ___test_main, B_Env);
    void (*__serialize__) (fooQ_L_7proc, $Serial$state);
    fooQ_L_7proc (*__deserialize__) (fooQ_L_7proc, $Serial$state);
    B_bool (*__bool__) (fooQ_L_7proc);
    B_str (*__str__) (fooQ_L_7proc);
    B_str (*__repr__) (fooQ_L_7proc);
    $R (*__call__) (fooQ_L_7proc, $Cont);
    $R (*__exec__) (fooQ_L_7proc, $Cont);
};
struct fooQ_L_7proc {
    struct fooQ_L_7procG_class *$class;
    fooQ___test_main G_act;
    B_Env env;
};
struct fooQ___test_mainG_class {
    char *$GCINFO;
    int $class_id;
    $SuperG_class $superclass;
    $R (*__init__) (fooQ___test_main, $Cont, B_Env);
    void (*__serialize__) (fooQ___test_main, $Serial$state);
    fooQ___test_main (*__deserialize__) (fooQ___test_main, $Serial$state);
    B_bool (*__bool__) (fooQ___test_main);
    B_str (*__str__) (fooQ___test_main);
    B_str (*__repr__) (fooQ___test_main);
    B_NoneType (*__resume__) (fooQ___test_main);
    B_NoneType (*__cleanup__) (fooQ___test_main);
};
struct fooQ___test_main {
    struct fooQ___test_mainG_class *$class;
    $Actor $next;
    B_Msg $msg;
    B_Msg $msg_tail;
    $Lock $msg_lock;
    $int64 $affinity;
    B_Msg $outgoing;
    B_Msg $waitsfor;
    $int64 $consume_hd;
    $Catcher $catcher;
    $long $globkey;
};
$R fooQ___test_mainG_newact ($Cont, B_Env);
extern struct fooQ_L_6ContG_class fooQ_L_6ContG_methods;
fooQ_L_6Cont fooQ_L_6ContG_new($Cont, fooQ___test_main);
extern struct fooQ_L_7procG_class fooQ_L_7procG_methods;
fooQ_L_7proc fooQ_L_7procG_new(fooQ___test_main, B_Env);
extern struct fooQ___test_mainG_class fooQ___test_mainG_methods;
$R fooQ___test_mainG_new($Cont, B_Env);
void fooQ___init__ ();
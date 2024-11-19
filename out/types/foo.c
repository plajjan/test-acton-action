#include "rts/common.h"
#include "out/types/foo.h"
B_Number fooQ_W_87;
$WORD fooQ_foo (B_Number W_3) {
    $WORD N_tmp = (($WORD (*) (B_Number, B_atom))W_3->$class->__fromatom__)(W_3, ((B_atom)to$int(42)));
    return N_tmp;
}
$R fooQ_L_1C_1cont ($Cont C_cont, fooQ_main G_act, B_NoneType C_2res) {
    return $R_CONT(C_cont, G_act);
}
B_NoneType fooQ_L_2ContD___init__ (fooQ_L_2Cont L_self, $Cont C_cont, fooQ_main G_act) {
    L_self->C_cont = C_cont;
    L_self->G_act = G_act;
    return B_None;
}
$R fooQ_L_2ContD___call__ (fooQ_L_2Cont L_self, B_NoneType G_1) {
    $Cont C_cont = L_self->C_cont;
    fooQ_main G_act = L_self->G_act;
    return fooQ_L_1C_1cont(C_cont, G_act, G_1);
}
void fooQ_L_2ContD___serialize__ (fooQ_L_2Cont self, $Serial$state state) {
    $step_serialize(self->C_cont, state);
    $step_serialize(self->G_act, state);
}
fooQ_L_2Cont fooQ_L_2ContD___deserialize__ (fooQ_L_2Cont self, $Serial$state state) {
    if (!self) {
        if (!state) {
            self = acton_malloc(sizeof(struct fooQ_L_2Cont));
            self->$class = &fooQ_L_2ContG_methods;
            return self;
        }
        self = $DNEW(fooQ_L_2Cont, state);
    }
    self->C_cont = $step_deserialize(state);
    self->G_act = $step_deserialize(state);
    return self;
}
fooQ_L_2Cont fooQ_L_2ContG_new($Cont G_1, fooQ_main G_2) {
    fooQ_L_2Cont $tmp = acton_malloc(sizeof(struct fooQ_L_2Cont));
    $tmp->$class = &fooQ_L_2ContG_methods;
    fooQ_L_2ContG_methods.__init__($tmp, G_1, G_2);
    return $tmp;
}
struct fooQ_L_2ContG_class fooQ_L_2ContG_methods;
B_NoneType fooQ_L_3procD___init__ (fooQ_L_3proc L_self, fooQ_main G_act, B_Env env) {
    L_self->G_act = G_act;
    L_self->env = env;
    return B_None;
}
$R fooQ_L_3procD___call__ (fooQ_L_3proc L_self, $Cont C_cont) {
    fooQ_main G_act = L_self->G_act;
    B_Env env = L_self->env;
    return (($R (*) (fooQ_main, $Cont, B_Env))G_act->$class->__init__)(G_act, C_cont, env);
}
$R fooQ_L_3procD___exec__ (fooQ_L_3proc L_self, $Cont C_cont) {
    return (($R (*) (fooQ_L_3proc, $Cont))L_self->$class->__call__)(L_self, C_cont);
}
void fooQ_L_3procD___serialize__ (fooQ_L_3proc self, $Serial$state state) {
    $step_serialize(self->G_act, state);
    $step_serialize(self->env, state);
}
fooQ_L_3proc fooQ_L_3procD___deserialize__ (fooQ_L_3proc self, $Serial$state state) {
    if (!self) {
        if (!state) {
            self = acton_malloc(sizeof(struct fooQ_L_3proc));
            self->$class = &fooQ_L_3procG_methods;
            return self;
        }
        self = $DNEW(fooQ_L_3proc, state);
    }
    self->G_act = $step_deserialize(state);
    self->env = $step_deserialize(state);
    return self;
}
fooQ_L_3proc fooQ_L_3procG_new(fooQ_main G_1, B_Env G_2) {
    fooQ_L_3proc $tmp = acton_malloc(sizeof(struct fooQ_L_3proc));
    $tmp->$class = &fooQ_L_3procG_methods;
    fooQ_L_3procG_methods.__init__($tmp, G_1, G_2);
    return $tmp;
}
struct fooQ_L_3procG_class fooQ_L_3procG_methods;
$R fooQ_mainD___init__ (fooQ_main self, $Cont C_cont, B_Env env) {
    ((B_NoneType (*) (B_tuple, B_str, B_str, B_bool, B_bool))B_print)($NEWTUPLE(1, to$str("Hello World!")), B_None, B_None, B_None, B_None);
    ((B_Msg (*) (B_Env, B_int))env->$class->exit)(env, to$int(0));
    return $R_CONT(C_cont, B_None);
}
void fooQ_mainD___serialize__ (fooQ_main self, $Serial$state state) {
    $ActorG_methods.__serialize__(($Actor)self, state);
}
fooQ_main fooQ_mainD___deserialize__ (fooQ_main self, $Serial$state state) {
    if (!self) {
        if (!state) {
            self = acton_malloc(sizeof(struct fooQ_main));
            self->$class = &fooQ_mainG_methods;
            return self;
        }
        self = $DNEW(fooQ_main, state);
    }
    $ActorG_methods.__deserialize__(($Actor)self, state);
    return self;
}
void fooQ_mainD__GC_finalizer (void *obj, void *cdata) {
    fooQ_main self = (fooQ_main)obj;
    self->$class->__cleanup__(self);
}
$R fooQ_mainG_new($Cont G_1, B_Env G_2) {
    fooQ_main $tmp = acton_malloc(sizeof(struct fooQ_main));
    $tmp->$class = &fooQ_mainG_methods;
    return fooQ_mainG_methods.__init__($tmp, $CONSTCONT($tmp, G_1), G_2);
}
struct fooQ_mainG_class fooQ_mainG_methods;
$R fooQ_mainG_newact ($Cont C_cont, B_Env env) {
    fooQ_main G_act = $NEWACTOR(fooQ_main);
    if (G_act->$class->__cleanup__ != $ActorD___cleanup__) $GCfinalizer(G_act, fooQ_mainD__GC_finalizer);
    return $AWAIT((($Cont)fooQ_L_2ContG_new(C_cont, G_act)), $ASYNC((($Actor)G_act), (($Cont)fooQ_L_3procG_new(G_act, env))));
}
B_Eq fooQ_W_104;
B_NoneType fooQ__test_foo () {
    ((B_NoneType (*) (B_Eq, B_int, B_int, B_str))testingQ_assertEqual)(fooQ_W_104, ((B_int (*) (B_Number))fooQ_foo)(fooQ_W_87), to$int(42), B_None);
    return B_None;
}
B_NoneType fooQ_L_4pureD___init__ (fooQ_L_4pure L_self) {
    return B_None;
}
$R fooQ_L_4pureD___call__ (fooQ_L_4pure L_self, $Cont L_cont) {
    return $R_CONT(L_cont, ((B_NoneType (*) (fooQ_L_4pure))L_self->$class->__eval__)(L_self));
}
$R fooQ_L_4pureD___exec__ (fooQ_L_4pure L_self, $Cont L_cont) {
    return $R_CONT(L_cont, ((B_NoneType (*) (fooQ_L_4pure))L_self->$class->__eval__)(L_self));
}
B_NoneType fooQ_L_4pureD___eval__ (fooQ_L_4pure L_self) {
    return fooQ__test_foo();
}
void fooQ_L_4pureD___serialize__ (fooQ_L_4pure self, $Serial$state state) {
}
fooQ_L_4pure fooQ_L_4pureD___deserialize__ (fooQ_L_4pure self, $Serial$state state) {
    if (!self) {
        if (!state) {
            self = acton_malloc(sizeof(struct fooQ_L_4pure));
            self->$class = &fooQ_L_4pureG_methods;
            return self;
        }
        self = $DNEW(fooQ_L_4pure, state);
    }
    return self;
}
fooQ_L_4pure fooQ_L_4pureG_new() {
    fooQ_L_4pure $tmp = acton_malloc(sizeof(struct fooQ_L_4pure));
    $tmp->$class = &fooQ_L_4pureG_methods;
    fooQ_L_4pureG_methods.__init__($tmp);
    return $tmp;
}
struct fooQ_L_4pureG_class fooQ_L_4pureG_methods;
B_dict fooQ___unit_tests;
B_dict fooQ___sync_actor_tests;
B_dict fooQ___async_actor_tests;
B_dict fooQ___env_tests;
$R fooQ_L_5C_3cont ($Cont C_cont, fooQ___test_main G_act, B_NoneType C_4res) {
    return $R_CONT(C_cont, G_act);
}
B_NoneType fooQ_L_6ContD___init__ (fooQ_L_6Cont L_self, $Cont C_cont, fooQ___test_main G_act) {
    L_self->C_cont = C_cont;
    L_self->G_act = G_act;
    return B_None;
}
$R fooQ_L_6ContD___call__ (fooQ_L_6Cont L_self, B_NoneType G_1) {
    $Cont C_cont = L_self->C_cont;
    fooQ___test_main G_act = L_self->G_act;
    return fooQ_L_5C_3cont(C_cont, G_act, G_1);
}
void fooQ_L_6ContD___serialize__ (fooQ_L_6Cont self, $Serial$state state) {
    $step_serialize(self->C_cont, state);
    $step_serialize(self->G_act, state);
}
fooQ_L_6Cont fooQ_L_6ContD___deserialize__ (fooQ_L_6Cont self, $Serial$state state) {
    if (!self) {
        if (!state) {
            self = acton_malloc(sizeof(struct fooQ_L_6Cont));
            self->$class = &fooQ_L_6ContG_methods;
            return self;
        }
        self = $DNEW(fooQ_L_6Cont, state);
    }
    self->C_cont = $step_deserialize(state);
    self->G_act = $step_deserialize(state);
    return self;
}
fooQ_L_6Cont fooQ_L_6ContG_new($Cont G_1, fooQ___test_main G_2) {
    fooQ_L_6Cont $tmp = acton_malloc(sizeof(struct fooQ_L_6Cont));
    $tmp->$class = &fooQ_L_6ContG_methods;
    fooQ_L_6ContG_methods.__init__($tmp, G_1, G_2);
    return $tmp;
}
struct fooQ_L_6ContG_class fooQ_L_6ContG_methods;
B_NoneType fooQ_L_7procD___init__ (fooQ_L_7proc L_self, fooQ___test_main G_act, B_Env env) {
    L_self->G_act = G_act;
    L_self->env = env;
    return B_None;
}
$R fooQ_L_7procD___call__ (fooQ_L_7proc L_self, $Cont C_cont) {
    fooQ___test_main G_act = L_self->G_act;
    B_Env env = L_self->env;
    return (($R (*) (fooQ___test_main, $Cont, B_Env))G_act->$class->__init__)(G_act, C_cont, env);
}
$R fooQ_L_7procD___exec__ (fooQ_L_7proc L_self, $Cont C_cont) {
    return (($R (*) (fooQ_L_7proc, $Cont))L_self->$class->__call__)(L_self, C_cont);
}
void fooQ_L_7procD___serialize__ (fooQ_L_7proc self, $Serial$state state) {
    $step_serialize(self->G_act, state);
    $step_serialize(self->env, state);
}
fooQ_L_7proc fooQ_L_7procD___deserialize__ (fooQ_L_7proc self, $Serial$state state) {
    if (!self) {
        if (!state) {
            self = acton_malloc(sizeof(struct fooQ_L_7proc));
            self->$class = &fooQ_L_7procG_methods;
            return self;
        }
        self = $DNEW(fooQ_L_7proc, state);
    }
    self->G_act = $step_deserialize(state);
    self->env = $step_deserialize(state);
    return self;
}
fooQ_L_7proc fooQ_L_7procG_new(fooQ___test_main G_1, B_Env G_2) {
    fooQ_L_7proc $tmp = acton_malloc(sizeof(struct fooQ_L_7proc));
    $tmp->$class = &fooQ_L_7procG_methods;
    fooQ_L_7procG_methods.__init__($tmp, G_1, G_2);
    return $tmp;
}
struct fooQ_L_7procG_class fooQ_L_7procG_methods;
$R fooQ___test_mainD___init__ (fooQ___test_main self, $Cont C_cont, B_Env env) {
    return testingQ_test_runnerG_newact($SKIPRES(C_cont), env, fooQ___unit_tests, fooQ___sync_actor_tests, fooQ___async_actor_tests, fooQ___env_tests);
}
void fooQ___test_mainD___serialize__ (fooQ___test_main self, $Serial$state state) {
    $ActorG_methods.__serialize__(($Actor)self, state);
}
fooQ___test_main fooQ___test_mainD___deserialize__ (fooQ___test_main self, $Serial$state state) {
    if (!self) {
        if (!state) {
            self = acton_malloc(sizeof(struct fooQ___test_main));
            self->$class = &fooQ___test_mainG_methods;
            return self;
        }
        self = $DNEW(fooQ___test_main, state);
    }
    $ActorG_methods.__deserialize__(($Actor)self, state);
    return self;
}
void fooQ___test_mainD__GC_finalizer (void *obj, void *cdata) {
    fooQ___test_main self = (fooQ___test_main)obj;
    self->$class->__cleanup__(self);
}
$R fooQ___test_mainG_new($Cont G_1, B_Env G_2) {
    fooQ___test_main $tmp = acton_malloc(sizeof(struct fooQ___test_main));
    $tmp->$class = &fooQ___test_mainG_methods;
    return fooQ___test_mainG_methods.__init__($tmp, $CONSTCONT($tmp, G_1), G_2);
}
struct fooQ___test_mainG_class fooQ___test_mainG_methods;
$R fooQ___test_mainG_newact ($Cont C_cont, B_Env env) {
    fooQ___test_main G_act = $NEWACTOR(fooQ___test_main);
    if (G_act->$class->__cleanup__ != $ActorD___cleanup__) $GCfinalizer(G_act, fooQ___test_mainD__GC_finalizer);
    return $AWAIT((($Cont)fooQ_L_6ContG_new(C_cont, G_act)), $ASYNC((($Actor)G_act), (($Cont)fooQ_L_7procG_new(G_act, env))));
}
int fooQ_done$ = 0;
void fooQ___init__ () {
    if (fooQ_done$) return;
    fooQ_done$ = 1;
    testingQ___init__();
    B_Number W_87 = (B_Number)B_IntegralD_intG_witness;
    fooQ_W_87 = W_87;
    {
        fooQ_L_2ContG_methods.$GCINFO = "fooQ_L_2Cont";
        fooQ_L_2ContG_methods.$superclass = ($SuperG_class)&$ContG_methods;
        fooQ_L_2ContG_methods.__bool__ = (B_bool (*) (fooQ_L_2Cont))B_valueG_methods.__bool__;
        fooQ_L_2ContG_methods.__str__ = (B_str (*) (fooQ_L_2Cont))B_valueG_methods.__str__;
        fooQ_L_2ContG_methods.__repr__ = (B_str (*) (fooQ_L_2Cont))B_valueG_methods.__repr__;
        fooQ_L_2ContG_methods.__init__ = fooQ_L_2ContD___init__;
        fooQ_L_2ContG_methods.__call__ = fooQ_L_2ContD___call__;
        fooQ_L_2ContG_methods.__serialize__ = fooQ_L_2ContD___serialize__;
        fooQ_L_2ContG_methods.__deserialize__ = fooQ_L_2ContD___deserialize__;
        $register(&fooQ_L_2ContG_methods);
    }
    {
        fooQ_L_3procG_methods.$GCINFO = "fooQ_L_3proc";
        fooQ_L_3procG_methods.$superclass = ($SuperG_class)&$procG_methods;
        fooQ_L_3procG_methods.__bool__ = (B_bool (*) (fooQ_L_3proc))B_valueG_methods.__bool__;
        fooQ_L_3procG_methods.__str__ = (B_str (*) (fooQ_L_3proc))B_valueG_methods.__str__;
        fooQ_L_3procG_methods.__repr__ = (B_str (*) (fooQ_L_3proc))B_valueG_methods.__repr__;
        fooQ_L_3procG_methods.__init__ = fooQ_L_3procD___init__;
        fooQ_L_3procG_methods.__call__ = fooQ_L_3procD___call__;
        fooQ_L_3procG_methods.__exec__ = fooQ_L_3procD___exec__;
        fooQ_L_3procG_methods.__serialize__ = fooQ_L_3procD___serialize__;
        fooQ_L_3procG_methods.__deserialize__ = fooQ_L_3procD___deserialize__;
        $register(&fooQ_L_3procG_methods);
    }
    {
        fooQ_mainG_methods.$GCINFO = "fooQ_main";
        fooQ_mainG_methods.$superclass = ($SuperG_class)&$ActorG_methods;
        fooQ_mainG_methods.__bool__ = (B_bool (*) (fooQ_main))$ActorG_methods.__bool__;
        fooQ_mainG_methods.__str__ = (B_str (*) (fooQ_main))$ActorG_methods.__str__;
        fooQ_mainG_methods.__repr__ = (B_str (*) (fooQ_main))$ActorG_methods.__repr__;
        fooQ_mainG_methods.__resume__ = (B_NoneType (*) (fooQ_main))$ActorG_methods.__resume__;
        fooQ_mainG_methods.__cleanup__ = (B_NoneType (*) (fooQ_main))$ActorG_methods.__cleanup__;
        fooQ_mainG_methods.__init__ = fooQ_mainD___init__;
        fooQ_mainG_methods.__serialize__ = fooQ_mainD___serialize__;
        fooQ_mainG_methods.__deserialize__ = fooQ_mainD___deserialize__;
        $register(&fooQ_mainG_methods);
    }
    B_Eq W_104 = (B_Eq)B_OrdD_intG_witness;
    fooQ_W_104 = W_104;
    {
        fooQ_L_4pureG_methods.$GCINFO = "fooQ_L_4pure";
        fooQ_L_4pureG_methods.$superclass = ($SuperG_class)&$pureG_methods;
        fooQ_L_4pureG_methods.__bool__ = (B_bool (*) (fooQ_L_4pure))B_valueG_methods.__bool__;
        fooQ_L_4pureG_methods.__str__ = (B_str (*) (fooQ_L_4pure))B_valueG_methods.__str__;
        fooQ_L_4pureG_methods.__repr__ = (B_str (*) (fooQ_L_4pure))B_valueG_methods.__repr__;
        fooQ_L_4pureG_methods.__init__ = fooQ_L_4pureD___init__;
        fooQ_L_4pureG_methods.__call__ = fooQ_L_4pureD___call__;
        fooQ_L_4pureG_methods.__exec__ = fooQ_L_4pureD___exec__;
        fooQ_L_4pureG_methods.__eval__ = fooQ_L_4pureD___eval__;
        fooQ_L_4pureG_methods.__serialize__ = fooQ_L_4pureD___serialize__;
        fooQ_L_4pureG_methods.__deserialize__ = fooQ_L_4pureD___deserialize__;
        $register(&fooQ_L_4pureG_methods);
    }
    B_dict __unit_tests = B_mk_dict(1, ((B_Hashable)B_HashableD_strG_new()), $NEWTUPLE(2, to$str("_test_foo"), testingQ_UnitTestG_new((($mut)fooQ_L_4pureG_new()), to$str("foo"), to$str(""))));
    fooQ___unit_tests = __unit_tests;
    B_dict __sync_actor_tests = B_mk_dict(0, ((B_Hashable)B_HashableD_strG_new()));
    fooQ___sync_actor_tests = __sync_actor_tests;
    B_dict __async_actor_tests = B_mk_dict(0, ((B_Hashable)B_HashableD_strG_new()));
    fooQ___async_actor_tests = __async_actor_tests;
    B_dict __env_tests = B_mk_dict(0, ((B_Hashable)B_HashableD_strG_new()));
    fooQ___env_tests = __env_tests;
    {
        fooQ_L_6ContG_methods.$GCINFO = "fooQ_L_6Cont";
        fooQ_L_6ContG_methods.$superclass = ($SuperG_class)&$ContG_methods;
        fooQ_L_6ContG_methods.__bool__ = (B_bool (*) (fooQ_L_6Cont))B_valueG_methods.__bool__;
        fooQ_L_6ContG_methods.__str__ = (B_str (*) (fooQ_L_6Cont))B_valueG_methods.__str__;
        fooQ_L_6ContG_methods.__repr__ = (B_str (*) (fooQ_L_6Cont))B_valueG_methods.__repr__;
        fooQ_L_6ContG_methods.__init__ = fooQ_L_6ContD___init__;
        fooQ_L_6ContG_methods.__call__ = fooQ_L_6ContD___call__;
        fooQ_L_6ContG_methods.__serialize__ = fooQ_L_6ContD___serialize__;
        fooQ_L_6ContG_methods.__deserialize__ = fooQ_L_6ContD___deserialize__;
        $register(&fooQ_L_6ContG_methods);
    }
    {
        fooQ_L_7procG_methods.$GCINFO = "fooQ_L_7proc";
        fooQ_L_7procG_methods.$superclass = ($SuperG_class)&$procG_methods;
        fooQ_L_7procG_methods.__bool__ = (B_bool (*) (fooQ_L_7proc))B_valueG_methods.__bool__;
        fooQ_L_7procG_methods.__str__ = (B_str (*) (fooQ_L_7proc))B_valueG_methods.__str__;
        fooQ_L_7procG_methods.__repr__ = (B_str (*) (fooQ_L_7proc))B_valueG_methods.__repr__;
        fooQ_L_7procG_methods.__init__ = fooQ_L_7procD___init__;
        fooQ_L_7procG_methods.__call__ = fooQ_L_7procD___call__;
        fooQ_L_7procG_methods.__exec__ = fooQ_L_7procD___exec__;
        fooQ_L_7procG_methods.__serialize__ = fooQ_L_7procD___serialize__;
        fooQ_L_7procG_methods.__deserialize__ = fooQ_L_7procD___deserialize__;
        $register(&fooQ_L_7procG_methods);
    }
    {
        fooQ___test_mainG_methods.$GCINFO = "fooQ___test_main";
        fooQ___test_mainG_methods.$superclass = ($SuperG_class)&$ActorG_methods;
        fooQ___test_mainG_methods.__bool__ = (B_bool (*) (fooQ___test_main))$ActorG_methods.__bool__;
        fooQ___test_mainG_methods.__str__ = (B_str (*) (fooQ___test_main))$ActorG_methods.__str__;
        fooQ___test_mainG_methods.__repr__ = (B_str (*) (fooQ___test_main))$ActorG_methods.__repr__;
        fooQ___test_mainG_methods.__resume__ = (B_NoneType (*) (fooQ___test_main))$ActorG_methods.__resume__;
        fooQ___test_mainG_methods.__cleanup__ = (B_NoneType (*) (fooQ___test_main))$ActorG_methods.__cleanup__;
        fooQ___test_mainG_methods.__init__ = fooQ___test_mainD___init__;
        fooQ___test_mainG_methods.__serialize__ = fooQ___test_mainD___serialize__;
        fooQ___test_mainG_methods.__deserialize__ = fooQ___test_mainD___deserialize__;
        $register(&fooQ___test_mainG_methods);
    }
}
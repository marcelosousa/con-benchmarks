/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is true */

#line 1 "poet_pthread.h"
typedef unsigned long pthread_t;
#line 3 "poet_pthread.h"
struct __anonstruct_pthread_mutex_t_1 {
   int volatile   value ;
};
#line 3 "poet_pthread.h"
typedef struct __anonstruct_pthread_mutex_t_1 pthread_mutex_t;
#line 18 "poet_pthread.h"
typedef unsigned long pthread_mutexattr_t;
#line 19 "poet_pthread.h"
union __anonunion_pthread_attr_t_2 {
   char __size[56] ;
   long __align ;
};
#line 19 "poet_pthread.h"
typedef union __anonunion_pthread_attr_t_2 pthread_attr_t;
#line 23
extern int pthread_create(pthread_t *thread , pthread_attr_t const   *attr , void *(*start_routine)(void * ) ,
                          void *arg ) ;
#line 24
extern int pthread_join(pthread_t thread , void **arg ) ;
#line 25
extern int pthread_mutex_init(pthread_mutex_t *lock , pthread_mutexattr_t const   *a ) ;
#line 27
extern int pthread_mutex_lock(pthread_mutex_t *lock ) ;
#line 28
extern int pthread_mutex_unlock(pthread_mutex_t *lock ) ;
#line 9 "verifier-poet.h"
extern void __VERIFIER_error() ;
#line 10
extern int __VERIFIER_nondet_int(int  , int  ) ;
#line 9 "findmax_4q_4i.c"
int q[4]  ;
#line 10 "findmax_4q_4i.c"
int qsiz  ;
#line 11 "findmax_4q_4i.c"
pthread_mutex_t mq  ;
#line 89 "findmax_4q_4i.c"
int source[4]  ;
#line 134
void *thread(void *arg ) ;
#line 141
int main(void) ;
#line 141 "findmax_4q_4i.c"
int main(void) 
{ 
  int _cil11 ;
  int _cil9 ;
  int _cil7 ;
  int _cil5 ;
  pthread_t t ;
  int i ;

  {
#line 149
  i = 0;
#line 149
  while (i < 4) {
#line 151
    source[i] = __VERIFIER_nondet_int(0, 20);
#line 154
    if (! (source[i] >= 0)) {
#line 154
      __VERIFIER_error();
    }
#line 149
    i ++;
  }
#line 15
  pthread_mutex_init(& mq, (pthread_mutexattr_t const   *)((void *)0));
#line 16
  qsiz = 0;
#line 161
  pthread_create(& t, (pthread_attr_t const   *)((void *)0), & thread, (void *)0);
#line 113
  _cil11 = 0;
#line 113
  while (_cil11 < 4) {
#line 41
    _cil9 = 0;
#line 42
    _cil7 = -1;
#line 42
    _cil5 = 0;
#line 44
    while (_cil9 == 0) {
#line 47
      pthread_mutex_lock(& mq);
#line 48
      if (qsiz > 0) {
#line 50
        _cil9 = 1;
#line 51
        _cil7 = q[0];
#line 53
        qsiz --;
#line 54
        _cil5 = 0;
#line 54
        while (_cil5 < qsiz) {
#line 54
          q[_cil5] = q[_cil5 + 1];
#line 54
          _cil5 ++;
        }
#line 55
        if (! (qsiz < 4)) {
#line 55
          __VERIFIER_error();
        }
#line 56
        q[qsiz] = 0;
      }
#line 58
      pthread_mutex_unlock(& mq);
    }

#line 121
    if (! (_cil7 >= 0)) {
#line 121
      __VERIFIER_error();
    }
#line 125
    if (! (_cil7 < 4)) {
#line 125
      __VERIFIER_error();
    }
#line 113
    _cil11 ++;
  }
#line 165
  pthread_join(t, (void **)((void *)0));
#line 166
  return (0);
}
}
#line 134 "findmax_4q_4i.c"
void *thread(void *arg ) 
{ 
  int _cil16 ;
  int _cil10 ;
  int _cil8 ;
  int _cil2 ;

  {
#line 96
  _cil16 = 0;
#line 96
  while (_cil16 < 4) {
#line 74
    _cil8 = 0;
#line 75
    _cil10 = 1;
#line 75
    while (_cil10 < 4) {
#line 77
      if (source[_cil10] > source[_cil8]) {
#line 77
        _cil8 = _cil10;
      }
#line 75
      _cil10 ++;
    }
#line 80
    if (! (_cil8 >= 0)) {
#line 80
      __VERIFIER_error();
    }
#line 83
    if (! (_cil8 < 4)) {
#line 83
      __VERIFIER_error();
    }
#line 85
    source[_cil8] = - source[_cil8];

#line 101
    if (! (_cil8 >= 0)) {
#line 101
      __VERIFIER_error();
    }
#line 104
    if (! (_cil8 < 4)) {
#line 104
      __VERIFIER_error();
    }
#line 21
    _cil2 = 0;
#line 24
    while (_cil2 == 0) {
#line 27
      pthread_mutex_lock(& mq);
#line 28
      if (qsiz < 4) {
#line 31
        _cil2 = 1;
#line 32
        q[qsiz] = _cil8;
#line 33
        qsiz ++;
      }
#line 35
      pthread_mutex_unlock(& mq);
    }

#line 96
    _cil16 ++;
  }

#line 138
  return ((void *)0);
}
}

/* done: 21 globals */


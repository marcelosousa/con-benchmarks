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
#line 25
extern int pthread_mutex_init(pthread_mutex_t *lock , pthread_mutexattr_t const   *a ) ;
#line 26
extern int pthread_mutex_lock(pthread_mutex_t *lock ) ;
#line 27
extern int pthread_mutex_unlock(pthread_mutex_t *lock ) ;
#line 9 "verifier-poet.h"
extern void __VERIFIER_error() ;
#line 10
extern int __VERIFIER_nondet_int(int  , int  ) ;
#line 9 "findmax.c"
int q[1]  ;
#line 10 "findmax.c"
int qsiz  ;
#line 11 "findmax.c"
pthread_mutex_t mq  ;
#line 12 "findmax.c"
pthread_mutex_t mutexdone  ;
#line 13 "findmax.c"
int donecount  =    0;
#line 93 "findmax.c"
int source[1]  ;
#line 140
void *thread(void *arg ) ;
#line 153
int main(void) ;
#line 153 "findmax.c"
int main(void) 
{ 
  int _cil11 ;
  int _cil9 ;
  int _cil7 ;
  int _cil5 ;
  pthread_t t ;
  int i ;

  {
#line 161
  i = 0;
#line 161
  while (i < 1) {
#line 163
    source[i] = __VERIFIER_nondet_int(0, 20);
#line 165
    if (! (source[i] >= 0)) {
#line 165
      __VERIFIER_error();
    }
#line 161
    i ++;
  }
#line 17
  pthread_mutex_init(& mq, (pthread_mutexattr_t const   *)((void *)0));
#line 18
  qsiz = 0;
#line 171
  pthread_mutex_init(& mutexdone, (pthread_mutexattr_t const   *)((void *)0));
#line 174
  pthread_create(& t, (pthread_attr_t const   *)((void *)0), & thread, (void *)0);
#line 119
  _cil11 = 0;
#line 119
  while (_cil11 < 1) {
#line 43
    _cil9 = 0;
#line 44
    _cil7 = -1;
#line 44
    _cil5 = 0;
#line 46
    while (_cil9 == 0) {
#line 49
      pthread_mutex_lock(& mq);
#line 50
      if (qsiz > 0) {
#line 52
        _cil9 = 1;
#line 53
        _cil7 = q[0];
#line 55
        qsiz --;
#line 56
        _cil5 = 0;
#line 56
        while (_cil5 < qsiz) {
#line 56
          q[_cil5] = q[_cil5 + 1];
#line 56
          _cil5 ++;
        }
#line 57
        if (! (qsiz < 1)) {
#line 57
          __VERIFIER_error();
        }
#line 58
        q[qsiz] = 0;
      }
#line 60
      pthread_mutex_unlock(& mq);
    }

#line 126
    if (! (_cil7 >= 0)) {
#line 126
      __VERIFIER_error();
    }
#line 130
    if (! (_cil7 < 1)) {
#line 130
      __VERIFIER_error();
    }
#line 119
    _cil11 ++;
  }
#line 181
  pthread_mutex_lock(& mutexdone);
#line 182
  if (donecount != 1) {
#line 182
    return (0);
  }
#line 183
  pthread_mutex_unlock(& mutexdone);
#line 185
  return (0);
}
}
#line 140 "findmax.c"
void *thread(void *arg ) 
{ 
  int _cil16 ;
  int *_cil14 ;
  int _cil10 ;
  int _cil8 ;
  int _cil2 ;

  {
#line 100
  _cil16 = 0;
#line 100
  while (_cil16 < 1) {
#line 76
    _cil8 = 0;
#line 77
    _cil10 = 1;
#line 77
    while (_cil10 < 1) {
#line 79
      if (source[_cil10] > source[_cil8]) {
#line 79
        _cil8 = _cil10;
      }
#line 77
      _cil10 ++;
    }
#line 82
    if (! (_cil8 >= 0)) {
#line 82
      __VERIFIER_error();
    }
#line 86
    if (! (_cil8 < 1)) {
#line 86
      __VERIFIER_error();
    }
#line 89
    source[_cil8] = - source[_cil8];

#line 105
    if (! (_cil8 >= 0)) {
#line 105
      __VERIFIER_error();
    }
#line 109
    if (! (_cil8 < 1)) {
#line 109
      __VERIFIER_error();
    }
#line 23
    _cil2 = 0;
#line 26
    while (_cil2 == 0) {
#line 29
      pthread_mutex_lock(& mq);
#line 30
      if (qsiz < 1) {
#line 33
        _cil2 = 1;
#line 34
        q[qsiz] = _cil8;
#line 35
        qsiz ++;
      }
#line 37
      pthread_mutex_unlock(& mq);
    }

#line 100
    _cil16 ++;
  }
#line 146
  pthread_mutex_lock(& mutexdone);
#line 147
  donecount ++;
#line 148
  pthread_mutex_unlock(& mutexdone);
#line 150
  return ((void *)0);
}
}

/* done: 22 globals */

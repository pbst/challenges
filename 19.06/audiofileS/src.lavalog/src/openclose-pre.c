#ifdef LAVA_LOGGING
#define LAVALOG(bugid, x, trigger)  ({(trigger && fprintf(stderr, "\nLAVALOG: %d: %s:%d\n", bugid, __FILE__, __LINE__)), (x);})
#endif
#ifdef FULL_LAVA_LOGGING
#define LAVALOG(bugid, x, trigger)  ({(trigger && fprintf(stderr, "\nLAVALOG: %d: %s:%d\n", bugid, __FILE__, __LINE__), (!trigger && fprintf(stderr, "\nLAVALOG_MISS: %d: %s:%d\n", bugid, __FILE__, __LINE__))) && fflush(0), (x);})
#endif
#ifndef LAVALOG
#define LAVALOG(y,x,z)  (x)
#endif
#ifdef DUA_LOGGING
#define DFLOG(idx, val)  ({fprintf(stderr, "\nDFLOG:%d=%d: %s:%d\n", idx, val, __FILE__, __LINE__) && fflush(0), data_flow[idx]=val;})
#else
#define DFLOG(idx, val) {data_flow[idx]=val;}
#endif












typedef unsigned int size_t;



typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;




__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;







__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;


__extension__ typedef __u_quad_t __dev_t;
__extension__ typedef unsigned int __uid_t;
__extension__ typedef unsigned int __gid_t;
__extension__ typedef unsigned long int __ino_t;
__extension__ typedef __u_quad_t __ino64_t;
__extension__ typedef unsigned int __mode_t;
__extension__ typedef unsigned int __nlink_t;
__extension__ typedef long int __off_t;
__extension__ typedef __quad_t __off64_t;
__extension__ typedef int __pid_t;
__extension__ typedef struct { int __val[2]; } __fsid_t;
__extension__ typedef long int __clock_t;
__extension__ typedef unsigned long int __rlim_t;
__extension__ typedef __u_quad_t __rlim64_t;
__extension__ typedef unsigned int __id_t;
__extension__ typedef long int __time_t;
__extension__ typedef unsigned int __useconds_t;
__extension__ typedef long int __suseconds_t;

__extension__ typedef int __daddr_t;
__extension__ typedef int __key_t;


__extension__ typedef int __clockid_t;


__extension__ typedef void * __timer_t;


__extension__ typedef long int __blksize_t;




__extension__ typedef long int __blkcnt_t;
__extension__ typedef __quad_t __blkcnt64_t;


__extension__ typedef unsigned long int __fsblkcnt_t;
__extension__ typedef __u_quad_t __fsblkcnt64_t;


__extension__ typedef unsigned long int __fsfilcnt_t;
__extension__ typedef __u_quad_t __fsfilcnt64_t;


__extension__ typedef int __fsword_t;

__extension__ typedef int __ssize_t;


__extension__ typedef long int __syscall_slong_t;

__extension__ typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


__extension__ typedef int __intptr_t;


__extension__ typedef unsigned int __socklen_t;
struct _IO_FILE;



typedef struct _IO_FILE FILE;





typedef struct _IO_FILE __FILE;




typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
typedef __builtin_va_list __gnuc_va_list;
struct _IO_jump_t; struct _IO_FILE;





typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
  __off64_t _offset;







  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;

  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) ;
extern int _IO_ferror (_IO_FILE *__fp) ;

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) ;
extern void _IO_funlockfile (_IO_FILE *) ;
extern int _IO_ftrylockfile (_IO_FILE *) ;
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) ;




typedef __gnuc_va_list va_list;
typedef __off_t off_t;
typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;







extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) ;

extern int rename (const char *__old, const char *__new) ;




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) ;








extern FILE *tmpfile (void) ;
extern char *tmpnam (char *__s) ;





extern char *tmpnam_r (char *__s) ;
extern char *tempnam (const char *__dir, const char *__pfx)
     ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

extern int fflush_unlocked (FILE *__stream);






extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;

extern FILE *fdopen (int __fd, const char *__modes) ;
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) ;



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) ;





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) ;


extern void setlinebuf (FILE *__stream) ;








extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) ;





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) ;





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     ;

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     ;

extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     ;
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     ;








extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) ;
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf")

                      ;








extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     ;
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf")



     ;









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;

extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);



extern void clearerr (FILE *__stream) ;

extern int feof (FILE *__stream) ;

extern int ferror (FILE *__stream) ;




extern void clearerr_unlocked (FILE *__stream) ;
extern int feof_unlocked (FILE *__stream) ;
extern int ferror_unlocked (FILE *__stream) ;








extern void perror (const char *__s);






extern int sys_nerr;
extern const char *const sys_errlist[];




extern int fileno (FILE *__stream) ;




extern int fileno_unlocked (FILE *__stream) ;
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) ;
extern void flockfile (FILE *__stream) ;



extern int ftrylockfile (FILE *__stream) ;


extern void funlockfile (FILE *__stream) ;



typedef long int wchar_t;








typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


extern size_t __ctype_get_mb_cur_max (void) ;




extern double atof (const char *__nptr)
     ;

extern int atoi (const char *__nptr)
     ;

extern long int atol (const char *__nptr)
     ;





__extension__ extern long long int atoll (const char *__nptr)
     ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     ;





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) ;

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     ;





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     ;

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     ;




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     ;

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     ;





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     ;

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     ;

extern char *l64a (long int __n) ;


extern long int a64l (const char *__s)
     ;










typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
typedef __pid_t pid_t;





typedef __id_t id_t;
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;


typedef __clock_t clock_t;





typedef __time_t time_t;



typedef __clockid_t clockid_t;
typedef __timer_t timer_t;



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef int int8_t ;
typedef int int16_t ;
typedef int int32_t ;
typedef int int64_t ;


typedef unsigned int u_int8_t ;
typedef unsigned int u_int16_t ;
typedef unsigned int u_int32_t ;
typedef unsigned int u_int64_t ;

typedef int register_t ;






static __inline unsigned int
__bswap_32 (int *data_flow, unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
static __inline __uint64_t
__bswap_64 (int *data_flow, __uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}




typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;



typedef __sigset_t sigset_t;







struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };

struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;

extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);





__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     ;
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     ;
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     ;






typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[36];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;
typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;





typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;





    int __kind;
    unsigned int __nusers;
    __extension__ union
    {
      struct
      {
 short __espins;
 short __elision;



      } __elision_data;
      __pthread_slist_t __list;
    };

  } __data;
  char __size[24];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{
  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;


    unsigned char __flags;
    unsigned char __shared;
    signed char __rwelision;

    unsigned char __pad2;
    int __writer;
  } __data;

  char __size[32];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[20];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;









extern long int random (void) ;


extern void srandom (unsigned int __seed) ;





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) ;



extern char *setstate (char *__statebuf) ;







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) ;

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     ;

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     ;

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     ;






extern int rand (void) ;

extern void srand (unsigned int __seed) ;




extern int rand_r (unsigned int *__seed) ;







extern double drand48 (void) ;
extern double erand48 (unsigned short int __xsubi[3]) ;


extern long int lrand48 (void) ;
extern long int nrand48 (unsigned short int __xsubi[3])
     ;


extern long int mrand48 (void) ;
extern long int jrand48 (unsigned short int __xsubi[3])
     ;


extern void srand48 (long int __seedval) ;
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     ;
extern void lcong48 (unsigned short int __param[7]) ;





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) ;
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) ;


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     ;
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     ;


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     ;
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     ;


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     ;

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) ;

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     ;









extern void *malloc (size_t __size) ;

extern void *calloc (size_t __nmemb, size_t __size)
     ;










extern void *realloc (void *__ptr, size_t __size)
     ;

extern void free (void *__ptr) ;




extern void cfree (void *__ptr) ;










extern void *alloca (size_t __size) ;











extern void *valloc (size_t __size) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     ;




extern void abort (void) ;



extern int atexit (void (*__func) (int *data_flow)) ;







extern int at_quick_exit (void (*__func) (int *data_flow)) ;







extern int on_exit (void (*__func) (int *data_flow, int __status, void *__arg), void *__arg)
     ;






extern void exit (int __status) ;





extern void quick_exit (int __status) ;







extern void _Exit (int __status) ;






extern char *getenv (const char *__name) ;

extern int putenv (char *__string) ;





extern int setenv (const char *__name, const char *__value, int __replace)
     ;


extern int unsetenv (const char *__name) ;






extern int clearenv (void) ;
extern char *mktemp (char *__template) ;
extern int mkstemp (char *__template) ;
extern int mkstemps (char *__template, int __suffixlen) ;
extern char *mkdtemp (char *__template) ;





extern int system (const char *__command) ;

extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) ;






typedef int (*__compar_fn_t) (int *data_flow, const void *, const void *);



extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) ;
extern int abs (int __x) ;
extern long int labs (long int __x) ;



__extension__ extern long long int llabs (long long int __x)
     ;







extern div_t div (int __numer, int __denom)
     ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     ;

extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) ;
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) ;

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     ;
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     ;






extern int mblen (const char *__s, size_t __n) ;


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) ;


extern int wctomb (char *__s, wchar_t __wchar) ;



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) ;

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     ;








extern int rpmatch (const char *__response) ;
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     ;
extern int getloadavg (double __loadavg[], int __nelem)
     ;




extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     ;


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     ;




extern void __assert (const char *__assertion, const char *__file, int __line)
     ;

















extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) ;


extern void *memmove (void *__dest, const void *__src, size_t __n)
     ;






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     ;





extern void *memset (void *__s, int __c, size_t __n) ;


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     ;
extern void *memchr (const void *__s, int __c, size_t __n)
      ;




extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     ;

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     ;


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     ;

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) ;


extern int strcmp (const char *__s1, const char *__s2)
     ;

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     ;


extern int strcoll (const char *__s1, const char *__s2)
     ;

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     ;






typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;


extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     ;

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) ;




extern char *strdup (const char *__s)
     ;






extern char *strndup (const char *__string, size_t __n)
     ;

extern char *strchr (const char *__s, int __c)
     ;
extern char *strrchr (const char *__s, int __c)
     ;





extern size_t strcspn (const char *__s, const char *__reject)
     ;


extern size_t strspn (const char *__s, const char *__accept)
     ;
extern char *strpbrk (const char *__s, const char *__accept)
     ;
extern char *strstr (const char *__haystack, const char *__needle)
     ;




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     ;




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     ;

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     ;


extern size_t strlen (const char *__s)
     ;





extern size_t strnlen (const char *__string, size_t __maxlen)
     ;





extern char *strerror (int __errnum) ;

extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r")

                                       ;
extern char *strerror_l (int __errnum, __locale_t __l) ;





extern void __bzero (void *__s, size_t __n) ;



extern void bcopy (const void *__src, void *__dest, size_t __n)
     ;


extern void bzero (void *__s, size_t __n) ;


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     ;
extern char *index (const char *__s, int __c)
     ;
extern char *rindex (const char *__s, int __c)
     ;




extern int ffs (int __i) ;
extern int strcasecmp (const char *__s1, const char *__s2)
     ;


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     ;
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     ;




extern char *strsignal (int __sig) ;


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     ;
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     ;



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     ;
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     ;







typedef __useconds_t useconds_t;
typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
extern int access (const char *__name, int __type) ;
extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     ;
extern __off_t lseek (int __fd, __off_t __offset, int __whence) ;
extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, const void *__buf, size_t __n) ;
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset) ;
extern int pipe (int __pipedes[2]) ;
extern unsigned int alarm (unsigned int __seconds) ;
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     ;






extern int usleep (__useconds_t __useconds);
extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
     ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) ;




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     ;






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     ;



extern int chdir (const char *__path) ;



extern int fchdir (int __fd) ;
extern char *getcwd (char *__buf, size_t __size) ;
extern char *getwd (char *__buf)
     ;




extern int dup (int __fd) ;


extern int dup2 (int __fd, int __fd2) ;
extern char **__environ;







extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) ;




extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
     ;




extern int execv (const char *__path, char *const __argv[])
     ;



extern int execle (const char *__path, const char *__arg, ...)
     ;



extern int execl (const char *__path, const char *__arg, ...)
     ;



extern int execvp (const char *__file, char *const __argv[])
     ;




extern int execlp (const char *__file, const char *__arg, ...)
     ;
extern int nice (int __inc) ;




extern void _exit (int __status) ;





enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };


extern long int pathconf (const char *__path, int __name)
     ;


extern long int fpathconf (int __fd, int __name) ;


extern long int sysconf (int __name) ;



extern size_t confstr (int __name, char *__buf, size_t __len) ;




extern __pid_t getpid (void) ;


extern __pid_t getppid (void) ;


extern __pid_t getpgrp (void) ;


extern __pid_t __getpgid (__pid_t __pid) ;

extern __pid_t getpgid (__pid_t __pid) ;






extern int setpgid (__pid_t __pid, __pid_t __pgid) ;
extern int setpgrp (void) ;






extern __pid_t setsid (void) ;



extern __pid_t getsid (__pid_t __pid) ;



extern __uid_t getuid (void) ;


extern __uid_t geteuid (void) ;


extern __gid_t getgid (void) ;


extern __gid_t getegid (void) ;




extern int getgroups (int __size, __gid_t __list[]) ;
extern int setuid (__uid_t __uid) ;




extern int setreuid (__uid_t __ruid, __uid_t __euid) ;




extern int seteuid (__uid_t __uid) ;






extern int setgid (__gid_t __gid) ;




extern int setregid (__gid_t __rgid, __gid_t __egid) ;




extern int setegid (__gid_t __gid) ;
extern __pid_t fork (void) ;







extern __pid_t vfork (void) ;





extern char *ttyname (int __fd) ;



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     ;



extern int isatty (int __fd) ;




extern int ttyslot (void) ;




extern int link (const char *__from, const char *__to)
     ;




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     ;




extern int symlink (const char *__from, const char *__to)
     ;




extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     ;




extern int symlinkat (const char *__from, int __tofd,
        const char *__to) ;


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     ;



extern int unlink (const char *__name) ;



extern int unlinkat (int __fd, const char *__name, int __flag)
     ;



extern int rmdir (const char *__path) ;



extern __pid_t tcgetpgrp (int __fd) ;


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) ;






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) ;




extern int setlogin (const char *__name) ;
extern char *optarg;
extern int optind;




extern int opterr;



extern int optopt;
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       ;







extern int gethostname (char *__name, size_t __len) ;






extern int sethostname (const char *__name, size_t __len)
     ;



extern int sethostid (long int __id) ;





extern int getdomainname (char *__name, size_t __len)
     ;
extern int setdomainname (const char *__name, size_t __len)
     ;





extern int vhangup (void) ;


extern int revoke (const char *__file) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     ;





extern int acct (const char *__name) ;



extern char *getusershell (void) ;
extern void endusershell (void) ;
extern void setusershell (void) ;





extern int daemon (int __nochdir, int __noclose) ;






extern int chroot (const char *__path) ;



extern char *getpass (const char *__prompt) ;







extern int fsync (int __fd);
extern long int gethostid (void);


extern void sync (void) ;





extern int getpagesize (void) ;




extern int getdtablesize (void) ;
extern int truncate (const char *__file, __off_t __length)
     ;
extern int ftruncate (int __fd, __off_t __length) ;
extern int brk (void *__addr) ;





extern void *sbrk (intptr_t __delta) ;
extern long int syscall (long int __sysno, ...) ;
extern int lockf (int __fd, int __cmd, __off_t __len) ;
extern int fdatasync (int __fildes);




enum
{
 AU_PVTYPE_LONG = 1,
 AU_PVTYPE_DOUBLE = 2,
 AU_PVTYPE_PTR = 3
};

typedef struct _AUpvlist *AUpvlist;



AUpvlist AUpvnew (int *data_flow, int maxItems);
int AUpvgetmaxitems (int *data_flow, AUpvlist);
int AUpvfree (int *data_flow, AUpvlist);
int AUpvsetparam (int *data_flow, AUpvlist, int item, int param);
int AUpvsetvaltype (int *data_flow, AUpvlist, int item, int type);
int AUpvsetval (int *data_flow, AUpvlist, int item, void *val);
int AUpvgetparam (int *data_flow, AUpvlist, int item, int *param);
int AUpvgetvaltype (int *data_flow, AUpvlist, int item, int *type);
int AUpvgetval (int *data_flow, AUpvlist, int item, void *val);
typedef struct _AFvirtualfile AFvirtualfile;

typedef struct _AFfilesetup *AFfilesetup;
typedef struct _AFfilehandle *AFfilehandle;
typedef void (*AFerrfunc)(int *data_flow, long, const char *);

typedef off_t AFframecount;
typedef off_t AFfileoffset;






enum
{
 AF_DEFAULT_TRACK = 1001
};

enum
{
 AF_DEFAULT_INST = 2001
};

enum
{
 AF_NUM_UNLIMITED = 99999
};

enum
{
 AF_BYTEORDER_BIGENDIAN = 501,
 AF_BYTEORDER_LITTLEENDIAN = 502
};

enum
{
 AF_FILE_UNKNOWN = -1,
 AF_FILE_RAWDATA = 0,
 AF_FILE_AIFFC = 1,
 AF_FILE_AIFF = 2,
 AF_FILE_NEXTSND = 3,
 AF_FILE_WAVE = 4,
 AF_FILE_BICSF = 5,
 AF_FILE_IRCAM = AF_FILE_BICSF,
 AF_FILE_MPEG1BITSTREAM = 6,
 AF_FILE_SOUNDDESIGNER1 = 7,
 AF_FILE_SOUNDDESIGNER2 = 8,
 AF_FILE_AVR = 9,
 AF_FILE_IFF_8SVX = 10,
 AF_FILE_SAMPLEVISION = 11,
 AF_FILE_VOC = 12,
 AF_FILE_NIST_SPHERE = 13,
 AF_FILE_SOUNDFONT2 = 14
};

enum
{
 AF_LOOP_MODE_NOLOOP = 0,
 AF_LOOP_MODE_FORW = 1,
 AF_LOOP_MODE_FORWBAKW = 2
};

enum
{
 AF_SAMPFMT_TWOSCOMP = 401,
 AF_SAMPFMT_UNSIGNED = 402,
 AF_SAMPFMT_FLOAT = 403,
 AF_SAMPFMT_DOUBLE = 404
};

enum
{
 AF_INST_LOOP_OFF = 0,
 AF_INST_LOOP_CONTINUOUS = 1,
 AF_INST_LOOP_SUSTAIN = 3
};

enum
{
 AF_INST_MIDI_BASENOTE = 301,
 AF_INST_NUMCENTS_DETUNE = 302,
 AF_INST_MIDI_LONOTE = 303,
 AF_INST_MIDI_HINOTE = 304,
 AF_INST_MIDI_LOVELOCITY = 305,
 AF_INST_MIDI_HIVELOCITY = 306,
 AF_INST_NUMDBS_GAIN = 307,
 AF_INST_SUSLOOPID = 308,
 AF_INST_RELLOOPID = 309,
 AF_INST_SAMP_STARTFRAME = 310,
 AF_INST_SAMP_ENDFRAME = 311,
 AF_INST_SAMP_MODE = 312,
 AF_INST_TRACKID = 313,
 AF_INST_NAME = 314,
 AF_INST_SAMP_RATE = 315,
 AF_INST_PRESETID = 316,
 AF_INST_PRESET_NAME = 317
};

enum
{
 AF_MISC_UNRECOGNIZED = 0,
 AF_MISC_COPY = 201,
 AF_MISC_AUTH = 202,
 AF_MISC_NAME = 203,
 AF_MISC_ANNO = 204,
 AF_MISC_APPL = 205,
 AF_MISC_MIDI = 206,
 AF_MISC_PCMMAP = 207,
 AF_MISC_NeXT = 208,
 AF_MISC_IRCAM_PEAKAMP = 209,
 AF_MISC_IRCAM_COMMENT = 210,
 AF_MISC_COMMENT = 210,

 AF_MISC_ICMT = AF_MISC_COMMENT,
 AF_MISC_ICRD = 211,
 AF_MISC_ISFT = 212
};

enum
{

 AF_COMPRESSION_UNKNOWN = -1,
 AF_COMPRESSION_NONE = 0,
 AF_COMPRESSION_G722 = 501,
 AF_COMPRESSION_G711_ULAW = 502,
 AF_COMPRESSION_G711_ALAW = 503,


 AF_COMPRESSION_APPLE_ACE2 = 504,
 AF_COMPRESSION_APPLE_ACE8 = 505,
 AF_COMPRESSION_APPLE_MAC3 = 506,
 AF_COMPRESSION_APPLE_MAC6 = 507,

 AF_COMPRESSION_G726 = 517,
 AF_COMPRESSION_G728 = 518,
 AF_COMPRESSION_DVI_AUDIO = 519,
 AF_COMPRESSION_IMA = AF_COMPRESSION_DVI_AUDIO,
 AF_COMPRESSION_GSM = 520,
 AF_COMPRESSION_FS1016 = 521,
 AF_COMPRESSION_DV = 522,
 AF_COMPRESSION_MS_ADPCM = 523
};



enum
{
 AF_QUERYTYPE_INSTPARAM = 500,
 AF_QUERYTYPE_FILEFMT = 501,
 AF_QUERYTYPE_COMPRESSION = 502,
 AF_QUERYTYPE_COMPRESSIONPARAM = 503,
 AF_QUERYTYPE_MISC = 504,
 AF_QUERYTYPE_INST = 505,
 AF_QUERYTYPE_MARK = 506,
 AF_QUERYTYPE_LOOP = 507
};


enum
{
 AF_QUERY_NAME = 600,
 AF_QUERY_DESC = 601,
 AF_QUERY_LABEL = 602,
 AF_QUERY_TYPE = 603,
 AF_QUERY_DEFAULT = 604,
 AF_QUERY_ID_COUNT = 605,
 AF_QUERY_IDS = 606,
 AF_QUERY_IMPLEMENTED = 613,
 AF_QUERY_TYPE_COUNT = 607,
 AF_QUERY_TYPES = 608,
 AF_QUERY_NATIVE_SAMPFMT = 609,
 AF_QUERY_NATIVE_SAMPWIDTH = 610,
 AF_QUERY_SQUISHFAC = 611,
 AF_QUERY_MAX_NUMBER = 612,
 AF_QUERY_SUPPORTED = 613
};


enum
{
 AF_QUERY_TRACKS = 620,
 AF_QUERY_CHANNELS = 621,
 AF_QUERY_SAMPLE_SIZES = 622,
 AF_QUERY_SAMPLE_FORMATS = 623,
 AF_QUERY_COMPRESSION_TYPES = 624
};


enum
{
 AF_QUERY_VALUE_COUNT = 650,
 AF_QUERY_VALUES = 651
};
enum
{
 AF_BAD_NOT_IMPLEMENTED = 0,
 AF_BAD_FILEHANDLE = 1,
 AF_BAD_OPEN = 3,
 AF_BAD_CLOSE = 4,
 AF_BAD_READ = 5,
 AF_BAD_WRITE = 6,
 AF_BAD_LSEEK = 7,
 AF_BAD_NO_FILEHANDLE = 8,
 AF_BAD_ACCMODE = 10,
 AF_BAD_NOWRITEACC = 11,
 AF_BAD_NOREADACC = 12,
 AF_BAD_FILEFMT = 13,
 AF_BAD_RATE = 14,
 AF_BAD_CHANNELS = 15,
 AF_BAD_SAMPCNT = 16,
 AF_BAD_WIDTH = 17,
 AF_BAD_SEEKMODE = 18,
 AF_BAD_NO_LOOPDATA = 19,
 AF_BAD_MALLOC = 20,
 AF_BAD_LOOPID = 21,
 AF_BAD_SAMPFMT = 22,
 AF_BAD_FILESETUP = 23,
 AF_BAD_TRACKID = 24,
 AF_BAD_NUMTRACKS = 25,
 AF_BAD_NO_FILESETUP = 26,
 AF_BAD_LOOPMODE = 27,
 AF_BAD_INSTID = 28,
 AF_BAD_NUMLOOPS = 29,
 AF_BAD_NUMMARKS = 30,
 AF_BAD_MARKID = 31,
 AF_BAD_MARKPOS = 32,
 AF_BAD_NUMINSTS = 33,
 AF_BAD_NOAESDATA = 34,
 AF_BAD_MISCID = 35,
 AF_BAD_NUMMISC = 36,
 AF_BAD_MISCSIZE = 37,
 AF_BAD_MISCTYPE = 38,
 AF_BAD_MISCSEEK = 39,
 AF_BAD_STRLEN = 40,
 AF_BAD_RATECONV = 45,
 AF_BAD_SYNCFILE = 46,
 AF_BAD_CODEC_CONFIG = 47,
 AF_BAD_CODEC_STATE = 48,
 AF_BAD_CODEC_LICENSE = 49,
 AF_BAD_CODEC_TYPE = 50,
 AF_BAD_COMPRESSION = AF_BAD_CODEC_CONFIG,
 AF_BAD_COMPTYPE = AF_BAD_CODEC_TYPE,

 AF_BAD_INSTPTYPE = 51,
 AF_BAD_INSTPID = 52,
 AF_BAD_BYTEORDER = 53,
 AF_BAD_FILEFMT_PARAM = 54,
 AF_BAD_COMP_PARAM = 55,
 AF_BAD_DATAOFFSET = 56,
 AF_BAD_FRAMECNT = 57,
 AF_BAD_QUERYTYPE = 58,
 AF_BAD_QUERY = 59,
 AF_WARNING_CODEC_RATE = 60,
 AF_WARNING_RATECVT = 61,

 AF_BAD_HEADER = 62,
 AF_BAD_FRAME = 63,
 AF_BAD_LOOPCOUNT = 64,
 AF_BAD_DMEDIA_CALL = 65,


 AF_BAD_AIFF_HEADER = 108,
 AF_BAD_AIFF_FORM = 109,
 AF_BAD_AIFF_SSND = 110,
 AF_BAD_AIFF_CHUNKID = 111,
 AF_BAD_AIFF_COMM = 112,
 AF_BAD_AIFF_INST = 113,
 AF_BAD_AIFF_MARK = 114,
 AF_BAD_AIFF_SKIP = 115,
 AF_BAD_AIFF_LOOPMODE = 116
};





enum
{
 AF_ERR_NOT_IMPLEMENTED = 0+3000,
 AF_ERR_BAD_FILEHANDLE = 1+3000,
 AF_ERR_BAD_READ = 5+3000,
 AF_ERR_BAD_WRITE = 6+3000,
 AF_ERR_BAD_LSEEK = 7+3000,
 AF_ERR_BAD_ACCMODE = 10+3000,
 AF_ERR_NO_WRITEACC = 11+3000,
 AF_ERR_NO_READACC = 12+3000,
 AF_ERR_BAD_FILEFMT = 13+3000,
 AF_ERR_BAD_RATE = 14+3000,
 AF_ERR_BAD_CHANNELS = 15+3000,
 AF_ERR_BAD_SAMPCNT = 16+3000,
 AF_ERR_BAD_WIDTH = 17+3000,
 AF_ERR_BAD_SEEKMODE = 18+3000,
 AF_ERR_BAD_LOOPID = 21+3000,
 AF_ERR_BAD_SAMPFMT = 22+3000,
 AF_ERR_BAD_FILESETUP = 23+3000,
 AF_ERR_BAD_TRACKID = 24+3000,
 AF_ERR_BAD_NUMTRACKS = 25+3000,
 AF_ERR_BAD_LOOPMODE = 27+3000,
 AF_ERR_BAD_INSTID = 28+3000,
 AF_ERR_BAD_NUMLOOPS = 29+3000,
 AF_ERR_BAD_NUMMARKS = 30+3000,
 AF_ERR_BAD_MARKID = 31+3000,
 AF_ERR_BAD_MARKPOS = 32+3000,
 AF_ERR_BAD_NUMINSTS = 33+3000,
 AF_ERR_BAD_NOAESDATA = 34+3000,
 AF_ERR_BAD_MISCID = 35+3000,
 AF_ERR_BAD_NUMMISC = 36+3000,
 AF_ERR_BAD_MISCSIZE = 37+3000,
 AF_ERR_BAD_MISCTYPE = 38+3000,
 AF_ERR_BAD_MISCSEEK = 39+3000,
 AF_ERR_BAD_STRLEN = 40+3000,
 AF_ERR_BAD_RATECONV = 45+3000,
 AF_ERR_BAD_SYNCFILE = 46+3000,
 AF_ERR_BAD_CODEC_CONFIG = 47+3000,
 AF_ERR_BAD_CODEC_TYPE = 50+3000,
 AF_ERR_BAD_INSTPTYPE = 51+3000,
 AF_ERR_BAD_INSTPID = 52+3000,

 AF_ERR_BAD_BYTEORDER = 53+3000,
 AF_ERR_BAD_FILEFMT_PARAM = 54+3000,
 AF_ERR_BAD_COMP_PARAM = 55+3000,
 AF_ERR_BAD_DATAOFFSET = 56+3000,
 AF_ERR_BAD_FRAMECNT = 57+3000,

 AF_ERR_BAD_QUERYTYPE = 58+3000,
 AF_ERR_BAD_QUERY = 59+3000,
 AF_ERR_BAD_HEADER = 62+3000,
 AF_ERR_BAD_FRAME = 63+3000,
 AF_ERR_BAD_LOOPCOUNT = 64+3000,



 AF_ERR_BAD_AIFF_HEADER = 66+3000,
 AF_ERR_BAD_AIFF_FORM = 67+3000,
 AF_ERR_BAD_AIFF_SSND = 68+3000,
 AF_ERR_BAD_AIFF_CHUNKID = 69+3000,
 AF_ERR_BAD_AIFF_COMM = 70+3000,
 AF_ERR_BAD_AIFF_INST = 71+3000,
 AF_ERR_BAD_AIFF_MARK = 72+3000,
 AF_ERR_BAD_AIFF_SKIP = 73+3000,
 AF_ERR_BAD_AIFF_LOOPMODE = 74+3000
};



AFerrfunc afSetErrorHandler (int *data_flow, AFerrfunc efunc);


AUpvlist afQuery (int *data_flow, int querytype, int arg1, int arg2, int arg3, int arg4);
long afQueryLong (int *data_flow, int querytype, int arg1, int arg2, int arg3, int arg4);
double afQueryDouble (int *data_flow, int querytype, int arg1, int arg2, int arg3, int arg4);
void *afQueryPointer (int *data_flow, int querytype, int arg1, int arg2, int arg3, int arg4);


AFfilesetup afNewFileSetup (int *data_flow);
void afFreeFileSetup (int *data_flow, AFfilesetup);
int afIdentifyFD (int *data_flow, int);
int afIdentifyNamedFD (int *data_flow, int, const char *filename, int *implemented);

AFfilehandle afOpenFile (int *data_flow, const char *filename, const char *mode,
 AFfilesetup setup);
AFfilehandle afOpenVirtualFile (int *data_flow, AFvirtualfile *vfile, const char *mode,
 AFfilesetup setup);
AFfilehandle afOpenFD (int *data_flow, int fd, const char *mode, AFfilesetup setup);
AFfilehandle afOpenNamedFD (int *data_flow, int fd, const char *mode, AFfilesetup setup,
 const char *filename);

void afSaveFilePosition (AFfilehandle file);
void afRestoreFilePosition (AFfilehandle file);
int afSyncFile (int *data_flow, AFfilehandle file);
int afCloseFile (int *data_flow, AFfilehandle file);

void afInitFileFormat (int *data_flow, AFfilesetup, int format);
int afGetFileFormat (int *data_flow, AFfilehandle, int *version);


void afInitTrackIDs (int *data_flow, AFfilesetup, int *trackids, int trackCount);
int afGetTrackIDs (int *data_flow, AFfilehandle, int *trackids);


int afReadFrames (int *data_flow, AFfilehandle, int track, void *buffer, int frameCount);
int afWriteFrames (int *data_flow, AFfilehandle, int track, const void *buffer, int frameCount);
AFframecount afSeekFrame (int *data_flow, AFfilehandle, int track, AFframecount frameoffset);
AFframecount afTellFrame (int *data_flow, AFfilehandle, int track);
AFfileoffset afGetTrackBytes (int *data_flow, AFfilehandle, int track);
float afGetFrameSize (int *data_flow, AFfilehandle, int track, int expand3to4);
float afGetVirtualFrameSize (int *data_flow, AFfilehandle, int track, int expand3to4);



void afInitAESChannelData (int *data_flow, AFfilesetup, int track);
void afInitAESChannelDataTo (int *data_flow, AFfilesetup, int track, int willBeData);
int afGetAESChannelData (int *data_flow, AFfilehandle, int track, unsigned char buf[24]);
void afSetAESChannelData (int *data_flow, AFfilehandle, int track, unsigned char buf[24]);
void afInitByteOrder (int *data_flow, AFfilesetup, int track, int byteOrder);
int afGetByteOrder (int *data_flow, AFfilehandle, int track);
int afSetVirtualByteOrder (int *data_flow, AFfilehandle, int track, int byteOrder);
int afGetVirtualByteOrder (int *data_flow, AFfilehandle, int track);


void afInitChannels (int *data_flow, AFfilesetup, int track, int nchannels);
int afGetChannels (int *data_flow, AFfilehandle, int track);
int afSetVirtualChannels (int *data_flow, AFfilehandle, int track, int channelCount);
int afGetVirtualChannels (int *data_flow, AFfilehandle, int track);
void afSetChannelMatrix (int *data_flow, AFfilehandle, int track, double *matrix);


void afInitSampleFormat (int *data_flow, AFfilesetup, int track, int sampleFormat,
 int sampleWidth);
void afGetSampleFormat (int *data_flow, AFfilehandle file, int track, int *sampfmt,
 int *sampwidth);
void afGetVirtualSampleFormat (int *data_flow, AFfilehandle file, int track, int *sampfmt,
 int *sampwidth);
int afSetVirtualSampleFormat (int *data_flow, AFfilehandle, int track,
 int sampleFormat, int sampleWidth);
void afGetVirtualSampleFormat (int *data_flow, AFfilehandle, int track,
 int *sampleFormat, int *sampleWidth);


void afInitRate (int *data_flow, AFfilesetup, int track, double rate);
double afGetRate (int *data_flow, AFfilehandle, int track);







void afInitCompression (int *data_flow, AFfilesetup, int track, int compression);





int afGetCompression (int *data_flow, AFfilehandle, int track);
void afInitPCMMapping (int *data_flow, AFfilesetup filesetup, int track,
 double slope, double intercept, double minClip, double maxClip);
void afGetPCMMapping (int *data_flow, AFfilehandle file, int track,
 double *slope, double *intercept, double *minClip, double *maxClip);


int afSetTrackPCMMapping (int *data_flow, AFfilehandle file, int track,
 double slope, double intercept, double minClip, double maxClip);


int afSetVirtualPCMMapping (int *data_flow, AFfilehandle file, int track,
 double slope, double intercept, double minClip, double maxClip);
void afGetVirtualPCMMapping (int *data_flow, AFfilehandle file, int track,
 double *slope, double *intercept, double *minClip, double *maxClip);



void afInitDataOffset(int *data_flow, AFfilesetup, int track, AFfileoffset offset);
AFfileoffset afGetDataOffset (int *data_flow, AFfilehandle, int track);


void afInitFrameCount (int *data_flow, AFfilesetup, int track, AFframecount frameCount);
AFframecount afGetFrameCount (int *data_flow, AFfilehandle file, int track);


void afInitLoopIDs (int *data_flow, AFfilesetup, int instid, int ids[], int nids);
int afGetLoopIDs (int *data_flow, AFfilehandle, int instid, int loopids[]);
void afSetLoopMode (int *data_flow, AFfilehandle, int instid, int loop, int mode);
int afGetLoopMode (int *data_flow, AFfilehandle, int instid, int loopid);
int afSetLoopCount (int *data_flow, AFfilehandle, int instid, int loop, int count);
int afGetLoopCount (int *data_flow, AFfilehandle, int instid, int loopid);
void afSetLoopStart (int *data_flow, AFfilehandle, int instid, int loopid, int markerid);
int afGetLoopStart (int *data_flow, AFfilehandle, int instid, int loopid);
void afSetLoopEnd (int *data_flow, AFfilehandle, int instid, int loopid, int markerid);
int afGetLoopEnd (int *data_flow, AFfilehandle, int instid, int loopid);

int afSetLoopStartFrame (int *data_flow, AFfilehandle, int instid, int loop,
 AFframecount startFrame);
AFframecount afGetLoopStartFrame (int *data_flow, AFfilehandle, int instid, int loop);
int afSetLoopEndFrame (int *data_flow, AFfilehandle, int instid, int loop,
 AFframecount startFrame);
AFframecount afGetLoopEndFrame (int *data_flow, AFfilehandle, int instid, int loop);

void afSetLoopTrack (int *data_flow, AFfilehandle, int instid, int loopid, int trackid);
int afGetLoopTrack (int *data_flow, AFfilehandle, int instid, int loopid);


void afInitMarkIDs (int *data_flow, AFfilesetup, int trackid, int *ids, int nids);
int afGetMarkIDs (int *data_flow, AFfilehandle file, int trackid, int markids[]);
void afSetMarkPosition (int *data_flow, AFfilehandle file, int trackid, int markid,
 AFframecount markpos);
AFframecount afGetMarkPosition (int *data_flow, AFfilehandle file, int trackid, int markid);
void afInitMarkName (int *data_flow, AFfilesetup, int trackid, int marker, const char *name);
void afInitMarkComment (int *data_flow, AFfilesetup, int trackid, int marker,
 const char *comment);
char *afGetMarkName (int *data_flow, AFfilehandle file, int trackid, int markid);
char *afGetMarkComment (int *data_flow, AFfilehandle file, int trackid, int markid);


void afInitInstIDs (int *data_flow, AFfilesetup, int *ids, int nids);
int afGetInstIDs (int *data_flow, AFfilehandle file, int *instids);
void afGetInstParams (int *data_flow, AFfilehandle file, int instid, AUpvlist pvlist,
 int nparams);
void afSetInstParams (int *data_flow, AFfilehandle file, int instid, AUpvlist pvlist,
 int nparams);
long afGetInstParamLong (int *data_flow, AFfilehandle file, int instid, int param);
void afSetInstParamLong (int *data_flow, AFfilehandle file, int instid, int param, long value);


void afInitMiscIDs (int *data_flow, AFfilesetup, int *ids, int nids);
int afGetMiscIDs (int *data_flow, AFfilehandle, int *ids);
void afInitMiscType (int *data_flow, AFfilesetup, int miscellaneousid, int type);
int afGetMiscType (int *data_flow, AFfilehandle, int miscellaneousid);
void afInitMiscSize (int *data_flow, AFfilesetup, int miscellaneousid, int size);
int afGetMiscSize (int *data_flow, AFfilehandle, int miscellaneousid);
int afWriteMisc (int *data_flow, AFfilehandle, int miscellaneousid, void *buf, int bytes);
int afReadMisc (int *data_flow, AFfilehandle, int miscellaneousid, void *buf, int bytes);
int afSeekMisc (int *data_flow, AFfilehandle, int miscellaneousid, int offset);




struct _AFvirtualfile
{
  ssize_t (*read) (int *data_flow, AFvirtualfile *vfile, void *data, size_t nbytes);
  long (*length) (int *data_flow, AFvirtualfile *vfile);
  ssize_t (*write) (int *data_flow, AFvirtualfile *vfile, const void *data, size_t nbytes);
  void (*destroy)(int *data_flow, AFvirtualfile *vfile);
  long (*seek) (int *data_flow, AFvirtualfile *vfile, long offset, int is_relative);
  long (*tell) (int *data_flow, AFvirtualfile *vfile);

  void *closure;
};

AFvirtualfile *af_virtual_file_new (int *data_flow);
AFvirtualfile *af_virtual_file_new_for_file (int *data_flow, FILE *fh);
void af_virtual_file_destroy (int *data_flow, AFvirtualfile *vfile);

size_t af_fread (int *data_flow, void *data, size_t size, size_t nmemb, AFvirtualfile *vfile);
size_t af_fwrite (int *data_flow, const void *data, size_t size, size_t nmemb, AFvirtualfile *vfile);
int af_fclose (int *data_flow, AFvirtualfile *vfile);
long af_flength (int *data_flow, AFvirtualfile *vfile);
int af_fseek (int *data_flow, AFvirtualfile *vfile, long offset, int whence);
long af_ftell (int *data_flow, AFvirtualfile *vfile);
void _af_error (int *data_flow, int errorCode, const char *fmt, ...);

typedef int status;



typedef union AFPVu
{
 long l;
 double d;
 void *v;
} AFPVu;

typedef struct _SuppMiscInfo
{
 int type;
 int count;
} _SuppMiscInfo;

typedef struct _InstParamInfo
{
 int id;
 int type;
 char *name;
 AFPVu defaultValue;
} _InstParamInfo;

typedef struct _MarkerSetup
{
 int id;
 char *name, *comment;
} _MarkerSetup;

typedef struct _Marker
{
 short id;
 unsigned long position;
 char *name, *comment;
} _Marker;

typedef struct _Loop
{
 int id;
 int mode;
 int count;
 int beginMarker, endMarker;
 int trackid;
} _Loop;

typedef struct _PCMInfo
{
 double slope, intercept, minClip, maxClip;
} _PCMInfo;

typedef struct _AudioFormat
{
 double sampleRate;
 int sampleFormat;
 int sampleWidth;
 int byteOrder;

 _PCMInfo pcm;

 int channelCount;

 int compressionType;
 void *compressionParams;
} _AudioFormat;


struct _AFmoduleinst;
struct _AFchunk;

typedef void (*_AFfnpmod) (int *data_flow, struct _AFmoduleinst *i);
typedef void (*_AFfnpsimplemod) (int *data_flow, struct _AFchunk *inc,
 struct _AFchunk *outc, void *modspec);

typedef struct _AFmodule
{
 char *name;
 _AFfnpmod describe;
 _AFfnpmod max_pull;
 _AFfnpmod max_push;
 _AFfnpmod run_pull;
 _AFfnpmod reset1;
 _AFfnpmod reset2;
 _AFfnpmod run_push;
 _AFfnpmod sync1;
 _AFfnpmod sync2;
 _AFfnpsimplemod run;
 _AFfnpmod free;
} _AFmodule;

typedef struct _AFchunk
{
 void *buf;
 AFframecount nframes;
 _AudioFormat f;
} _AFchunk;

typedef struct _AFmoduleinst
{
 _AFchunk *inc, *outc;
 void *modspec;
 union
 {
  struct { struct _AFmoduleinst *source; } pull;
  struct { struct _AFmoduleinst *sink; } push;
 } u;
 const _AFmodule *mod;
 
_Bool 
     free_on_close;
 
_Bool 
     valid;




} _AFmoduleinst;


typedef struct _AFmodulestate
{
 
_Bool 
     modulesdirty;
 int nmodules;


 
_Bool 
     mustuseatomicnvframes;


 double old_f_rate, old_v_rate;

 _AFchunk *chunk;
 _AFmoduleinst *module;


 void **buffer;




 _AFmoduleinst filemodinst;


 _AFmoduleinst filemod_rebufferinst;


 _AFmoduleinst rateconvertinst;


 double rateconvert_inrate, rateconvert_outrate;


 _AFmoduleinst rateconvert_rebufferinst;
} _AFmodulestate;

typedef struct _Track
{
 int id;

 _AudioFormat f, v;

 double *channelMatrix;

 int markerCount;
 _Marker *markers;

 
_Bool 
      hasAESData;
 unsigned char aesData[24];

 AFframecount totalfframes;
 AFframecount nextfframe;
 AFframecount frames2ignore;
 AFfileoffset fpos_first_frame;
 AFfileoffset fpos_next_frame;
 AFfileoffset fpos_after_data;
 AFframecount totalvframes;
 AFframecount nextvframe;
 AFfileoffset data_size;

 _AFmodulestate ms;

 double taper, dynamic_range;
 
_Bool 
     ratecvt_filter_params_set;

 
_Bool 
     filemodhappy;
} _Track;

typedef struct _TrackSetup
{
 int id;

 _AudioFormat f;

 
_Bool 
     rateSet, sampleFormatSet, sampleWidthSet, byteOrderSet,
  channelCountSet, compressionSet, aesDataSet, markersSet,
  dataOffsetSet, frameCountSet;

 int markerCount;
 _MarkerSetup *markers;

 AFfileoffset dataOffset;
 AFframecount frameCount;
} _TrackSetup;

typedef struct _LoopSetup
{
 int id;
} _LoopSetup;

typedef struct _InstrumentSetup
{
 int id;

 int loopCount;
 _LoopSetup *loops;
 
_Bool 
      loopSet;
} _InstrumentSetup;

typedef struct _Instrument
{
 int id;

 int loopCount;
 _Loop *loops;

 AFPVu *values;
} _Instrument;

typedef struct _Miscellaneous
{
 int id;
 int type;
 int size;

 void *buffer;

 AFfileoffset position;
} _Miscellaneous;

typedef struct _MiscellaneousSetup
{
 int id;
 int type;
 int size;
} _MiscellaneousSetup;

typedef struct _AFfilesetup
{
 int valid;

 int fileFormat;

 
_Bool 
     trackSet, instrumentSet, miscellaneousSet;

 int trackCount;
 _TrackSetup *tracks;

 int instrumentCount;
 _InstrumentSetup *instruments;

 int miscellaneousCount;
 _MiscellaneousSetup *miscellaneous;
} _AFfilesetup;

typedef struct _AFfilehandle
{
 int valid;
 int access;

 
_Bool 
     seekok;

 AFvirtualfile *fh;

 char *fileName;

 int fileFormat;

 int trackCount;
 _Track *tracks;

 int instrumentCount;
 _Instrument *instruments;

 int miscellaneousCount;
 _Miscellaneous *miscellaneous;

 void *formatSpecific;
} _AFfilehandle;

enum
{
 _AF_VALID_FILEHANDLE = 38212,
 _AF_VALID_FILESETUP = 38213
};

enum
{
 _AF_READ_ACCESS = 1,
 _AF_WRITE_ACCESS = 2
};


enum
{
 _AF_FRAMES_PER_BLOCK = 700,
 _AF_BLOCK_SIZE = 701,
 _AF_MS_ADPCM_NUM_COEFFICIENTS = 800,
 _AF_MS_ADPCM_COEFFICIENTS = 801
};





typedef struct _Unit
{
 int fileFormat;
 char *name;
 char *description;
 char *label;
 
_Bool 
     implemented;

 int (*getversion) (int *data_flow, AFfilehandle handle);
 AFfilesetup (*completesetup) (int *data_flow, AFfilesetup setup);

 struct
 {
  
 _Bool 
      (*recognize) (int *data_flow, AFvirtualfile *fh);
  status (*init) (int *data_flow, AFfilesetup, AFfilehandle);
 } read;

 struct
 {
  status (*init) (int *data_flow, AFfilesetup, AFfilehandle);
  
 _Bool 
      (*instparamvalid) (int *data_flow, AFfilehandle, AUpvlist, int);
  status (*update) (int *data_flow, AFfilehandle);
 } write;

 int defaultSampleFormat;
 int defaultSampleWidth;

 int compressionTypeCount;
 int *compressionTypes;

 int markerCount;

 int instrumentCount;
 int loopPerInstrumentCount;

 int instrumentParameterCount;
 _InstParamInfo *instrumentParameters;
} _Unit;

typedef struct _CompressionUnit
{
 int compressionID;
 
_Bool 
     implemented;
 char *label;
 char *shortname;
 char *name;
 double squishFactor;
 int nativeSampleFormat;
 int nativeSampleWidth;
 
_Bool 
     needsRebuffer;
 
_Bool 
     multiple_of;
 
_Bool 
     (*fmtok) (int *data_flow, _AudioFormat *format);

 _AFmoduleinst (*initcompress) (int *data_flow, _Track *track, AFvirtualfile *fh,
  
 _Bool 
      seekok, 
              _Bool 
                   headerless, AFframecount *chunkframes);
 _AFmoduleinst (*initdecompress) (int *data_flow, _Track *track, AFvirtualfile *fh,
  
 _Bool 
      seekok, 
              _Bool 
                   headerless, AFframecount *chunkframes);
} _CompressionUnit;

typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;





__extension__
typedef unsigned long long int uint64_t;






typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;



__extension__
typedef long long int int_least64_t;



typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;



__extension__
typedef unsigned long long int uint_least64_t;






typedef signed char int_fast8_t;





typedef int int_fast16_t;
typedef int int_fast32_t;
__extension__
typedef long long int int_fast64_t;



typedef unsigned char uint_fast8_t;





typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
__extension__
typedef unsigned long long int uint_fast64_t;
typedef unsigned int uintptr_t;
__extension__
typedef long long int intmax_t;
__extension__
typedef unsigned long long int uintmax_t;





_Bool 
    _af_filesetup_ok (int *data_flow, AFfilesetup setup);

_Bool 
    _af_filehandle_ok (int *data_flow, AFfilehandle file);


_Bool 
    _af_filehandle_can_read (int *data_flow, AFfilehandle file);

void *_af_malloc (int *data_flow, size_t size);
void *_af_realloc (int *data_flow, void *ptr, size_t size);
void *_af_calloc (int *data_flow, size_t nmemb, size_t size);
char *_af_strdup (int *data_flow, char *s);

AUpvlist _af_pv_long (int *data_flow, long val);
AUpvlist _af_pv_double (int *data_flow, double val);
AUpvlist _af_pv_pointer (int *data_flow, void *val);


_Bool 
    _af_pv_getlong (int *data_flow, AUpvlist pvlist, int param, long *l);

_Bool 
    _af_pv_getdouble (int *data_flow, AUpvlist pvlist, int param, double *d);

_Bool 
    _af_pv_getptr (int *data_flow, AUpvlist pvlist, int param, void **v);

_TrackSetup *_af_filesetup_get_tracksetup (int *data_flow, AFfilesetup setup, int trackid);
_Track *_af_filehandle_get_track (int *data_flow, AFfilehandle file, int trackid);


_Bool 
    _af_unique_ids (int *data_flow, int *ids, int nids, char *idname, int iderr);

float _af_format_frame_size (int *data_flow, _AudioFormat *format, 
                                                  _Bool 
                                                       stretch3to4);
int _af_format_frame_size_uncompressed (int *data_flow, _AudioFormat *format, 
                                                             _Bool 
                                                                  stretch3to4);
float _af_format_sample_size (int *data_flow, _AudioFormat *format, 
                                                   _Bool 
                                                        stretch3to4);
int _af_format_sample_size_uncompressed (int *data_flow, _AudioFormat *format, 
                                                              _Bool 
                                                                   stretch3to4);

status _af_set_sample_format (int *data_flow, _AudioFormat *f, int sampleFormat, int sampleWidth);


_Bool 
    _af_filehandle_can_read (int *data_flow, AFfilehandle file);

_Bool 
    _af_filehandle_can_write (int *data_flow, AFfilehandle file);

status af_read_uint32_be (int *data_flow, uint32_t *value, AFvirtualfile *vf);
status af_read_uint32_le (int *data_flow, uint32_t *value, AFvirtualfile *vf);
status af_read_uint16_be (int *data_flow, uint16_t *value, AFvirtualfile *vf);
status af_read_uint16_le (int *data_flow, uint16_t *value, AFvirtualfile *vf);
status af_read_uint8 (int *data_flow, uint8_t *value, AFvirtualfile *vf);

status af_write_uint32_be (int *data_flow, const uint32_t *value, AFvirtualfile *vf);
status af_write_uint32_le (int *data_flow, const uint32_t *value, AFvirtualfile *vf);
status af_write_uint16_be (int *data_flow, const uint16_t *value, AFvirtualfile *vf);
status af_write_uint16_le (int *data_flow, const uint16_t *value, AFvirtualfile *vf);
status af_write_uint8 (int *data_flow, const uint8_t *value, AFvirtualfile *vf);

status af_read_pstring (int *data_flow, char value[256], AFvirtualfile *vf);
status af_write_pstring (int *data_flow, const char *value, AFvirtualfile *vf);







typedef uint8_t uchar1;
typedef uint16_t uchar2;
typedef uint32_t uchar3;
typedef uint32_t uchar4;

typedef int8_t schar1;
typedef int16_t schar2;
typedef int32_t schar3;
typedef int32_t schar4;

typedef struct real_char3 { uchar1 c0; uchar1 c1; uchar1 c2; } real_char3;
typedef union char3u
{
 struct { schar4 i; } schar4;
 struct { uchar4 i; } uchar4;
 struct { schar3 i; } schar3;
 struct { uchar3 i; } uchar3;
 struct { real_char3 c3; schar1 pad; } real_char3_high;
 struct { schar1 pad; real_char3 c3; } real_char3_low;
 struct { uchar2 s0; uchar2 s1; } uchar2;
 struct { schar2 s0; schar2 s1; } schar2;
 struct { uchar1 c0; uchar1 c1; uchar1 c2; uchar1 c3; } uchar1;
 struct { schar1 c0; schar1 c1; schar1 c2; schar1 c3; } schar1;
} char3u;

typedef struct real_char8
{
 uchar1 c0, c1, c2, c3, c4, c5, c6, c7;
} real_char8;

typedef union char8u
{
 struct { schar4 i0, i1; } schar4;
 struct { uchar4 i0, i1; } uchar4;
 struct { schar2 s0, s1, s2, s3; } schar2;
 struct { uchar2 s0, s1, s2, s3; } uchar2;
 struct { schar1 c0, c1, c2, c3, c4, c5, c6, c7; } schar1;
 struct { uchar1 c0, c1, c2, c3, c4, c5, c6, c7; } uchar1;
} char8u;
AFframecount _AFpull (int *data_flow, _AFmoduleinst *i, AFframecount nframes2pull);
void _AFpush (int *data_flow, _AFmoduleinst *i, AFframecount nframes2push);
void _AFpushat (int *data_flow, _AFmoduleinst *i, AFframecount startframe, 
                                                          _Bool 
                                                               stretchint,
 AFframecount nframes2push);
void _AFsimplemodrun_pull (int *data_flow, _AFmoduleinst *i);
void _AFsimplemodrun_push (int *data_flow, _AFmoduleinst *i);
void _AFfreemodspec (int *data_flow, _AFmoduleinst *i);


_AFmoduleinst _AFnewmodinst (int *data_flow, const _AFmodule *mod);

status _AFinitmodules (int *data_flow, AFfilehandle h, _Track *trk);
status _AFsetupmodules (int *data_flow, AFfilehandle h, _Track *trk);
status _AFsyncmodules (int *data_flow, AFfilehandle h, _Track *trk);
void _AFfreemodules (int *data_flow, _Track *trk);
extern const _Unit _af_units[];

static void freeFileHandle (int *data_flow, AFfilehandle filehandle);
static void freeInstParams (int *data_flow, AFPVu *values, int fileFormat);
static status _afOpenFile (int *data_flow, int access, AFvirtualfile *vf, const char *filename,
 AFfilehandle *file, AFfilesetup filesetup);

int _af_identify (int *data_flow, AFvirtualfile *vf, int *implemented)
{
 AFfileoffset curpos={0};
 int i={0};

 curpos = af_ftell(data_flow, vf);

 for (i=0; i<15; i++)
 {
  if (_af_units[i].read.recognize &&
   _af_units[i].read.recognize(data_flow, vf))
  {
   if (implemented != 
                     ((void *)0)
                         )
    *implemented = _af_units[i].implemented;
   af_fseek(data_flow, vf, curpos, 
                       0
                               );
   return _af_units[i].fileFormat;
  }
 }

 af_fseek(data_flow, vf, curpos, 
                     0
                             );

 if (implemented != 
                   ((void *)0)
                       )
  *implemented = 
                0
                     ;

 return AF_FILE_UNKNOWN;
}

int afIdentifyFD (int *data_flow, int fd)
{
 FILE *fp={0};
 AFvirtualfile *vf={0};
 int result={0};






 fd = dup(fd);

 fp = fdopen(fd, "r");
 if (fp == 
          ((void *)0)
              )
 {
  _af_error(data_flow, AF_BAD_OPEN, "could not open file");
  return AF_FILE_UNKNOWN;
 }

 ;

 vf = af_virtual_file_new_for_file(data_flow, fp);
 if (vf == 
          ((void *)0)
              )
 {
  _af_error(data_flow, AF_BAD_OPEN, "could not open file");
  return AF_FILE_UNKNOWN;
 }

 result = _af_identify(data_flow, vf, 
                          ((void *)0)
                              );

 af_fclose(data_flow, vf);

 return result;
}

int afIdentifyNamedFD (int *data_flow, int fd, const char *filename, int *implemented)
{
 FILE *fp={0};
 AFvirtualfile *vf={0};
 int result={0};






 fd = dup(fd);

 fp = fdopen(fd, "r");
 if (fp == 
          ((void *)0)
              )
 {
  _af_error(data_flow, AF_BAD_OPEN, "could not open file '%s'", filename);
  return AF_FILE_UNKNOWN;
 }

 ;

 vf = af_virtual_file_new_for_file(data_flow, fp);
 if (vf == 
          ((void *)0)
              )
 {
  _af_error(data_flow, AF_BAD_OPEN, "could not open file '%s'", filename);
  return AF_FILE_UNKNOWN;
 }

 result = _af_identify(data_flow, vf, implemented);

 af_fclose(data_flow, vf);

 return result;
}

AFfilehandle afOpenFD (int *data_flow, int fd, const char *mode, AFfilesetup setup)
{
 FILE *fp={0};
 AFvirtualfile *vf={0};
 AFfilehandle filehandle={0};
 int access={0};

 if (mode == 
            ((void *)0)
                )
 {
  _af_error(data_flow, AF_BAD_ACCMODE, "null access mode");
  return ((struct _AFfilehandle *) 0);
 }

 if (mode[0] == 'r')
  access = _AF_READ_ACCESS;
 else if (mode[0] == 'w')
  access = _AF_WRITE_ACCESS;
 else
 {
  _af_error(data_flow, AF_BAD_ACCMODE, "unrecognized access mode '%s'", mode);
  return ((struct _AFfilehandle *) 0);
 }

 if ((fp = fdopen(fd, mode)) == 
                               ((void *)0)
                                   )
 {
  _af_error(data_flow, AF_BAD_OPEN, "could not open file");
  return ((struct _AFfilehandle *) 0);
 }

 ;

 vf = af_virtual_file_new_for_file(data_flow, fp);

 if (_afOpenFile(data_flow, access, vf, 
                            ((void *)0)
                                , &filehandle, setup) != (0))
  af_fclose(data_flow, vf);

 return filehandle;
}

AFfilehandle afOpenNamedFD (int *data_flow, int fd, const char *mode, AFfilesetup setup,
 const char *filename)
{
 FILE *fp={0};
 AFvirtualfile *vf={0};
 AFfilehandle filehandle={0};
 int access={0};

 if (mode == 
            ((void *)0)
                )
 {
  _af_error(data_flow, AF_BAD_ACCMODE, "null access mode");
  return ((struct _AFfilehandle *) 0);
 }

 if (mode[0] == 'r')
  access = _AF_READ_ACCESS;
 else if (mode[0] == 'w')
  access = _AF_WRITE_ACCESS;
 else
 {
  _af_error(data_flow, AF_BAD_ACCMODE, "unrecognized access mode '%s'", mode);
  return ((struct _AFfilehandle *) 0);
 }

 if ((fp = fdopen(fd, mode)) == 
                               ((void *)0)
                                   )
 {
  _af_error(data_flow, AF_BAD_OPEN, "could not open file '%s'", filename);
  return ((struct _AFfilehandle *) 0);
 }

 ;

 vf = af_virtual_file_new_for_file(data_flow, fp);

 if (_afOpenFile(data_flow, access, vf, filename, &filehandle, setup) != (0))
  af_fclose(data_flow, vf);

 return filehandle;
}

AFfilehandle afOpenFile (int *data_flow, const char *filename, const char *mode, AFfilesetup setup)
{
 FILE *fp={0};
 AFvirtualfile *vf={0};
 AFfilehandle filehandle={0};
 int access={0};

 if (mode == 
            ((void *)0)
                )
 {
  _af_error(data_flow, AF_BAD_ACCMODE, "null access mode");
  return ((struct _AFfilehandle *) 0);
 }

 if (mode[0] == 'r')
  access = _AF_READ_ACCESS;
 else if (mode[0] == 'w')
  access = _AF_WRITE_ACCESS;
 else
 {
  _af_error(data_flow, AF_BAD_ACCMODE, "unrecognized access mode '%s'", mode);
  return ((struct _AFfilehandle *) 0);
 }

 if ((fp = fopen(filename, mode)) == 
                                    ((void *)0)
                                        )
 {
  _af_error(data_flow, AF_BAD_OPEN, "could not open file '%s'", filename);
  return ((struct _AFfilehandle *) 0);
 }

 ;

 vf = af_virtual_file_new_for_file(data_flow, fp);

 if (_afOpenFile(data_flow, access, vf, filename, &filehandle, setup) != (0))
  af_fclose(data_flow, vf);

 if ( (fp) && ((*fp)._IO_read_ptr)) {
DFLOG(23, *(const unsigned int *)((*fp)._IO_read_ptr));
}
return filehandle;
}

AFfilehandle afOpenVirtualFile (int *data_flow, AFvirtualfile *vfile, const char *mode,
 AFfilesetup setup)
{
 AFfilehandle filehandle={0};
 int access={0};

 if (vfile == 
             ((void *)0)
                 )
 {
  _af_error(data_flow, AF_BAD_FILEHANDLE, "null virtual filehandle");
  return ((struct _AFfilehandle *) 0);
 }

 if (mode == 
            ((void *)0)
                )
 {
  _af_error(data_flow, AF_BAD_ACCMODE, "null access mode");
  return ((struct _AFfilehandle *) 0);
 }

 if (mode[0] == 'r')
  access = _AF_READ_ACCESS;
 else if (mode[0] == 'w')
  access = _AF_WRITE_ACCESS;
 else
 {
  _af_error(data_flow, AF_BAD_ACCMODE, "unrecognized access mode '%s'", mode);
  return ((struct _AFfilehandle *) 0);
 }

 if (_afOpenFile(data_flow, access, vfile, 
                               ((void *)0)
                                   , &filehandle, setup) != (0))
  af_fclose(data_flow, vfile);

 return filehandle;
}

static status _afOpenFile (int *data_flow, int access, AFvirtualfile *vf, const char *filename,
 AFfilehandle *file, AFfilesetup filesetup)
{
 int fileFormat = AF_FILE_UNKNOWN;
 int implemented = 
                  1
                      ;
 char *formatName={0};
 status (*initfunc) (int *data_flow, AFfilesetup, AFfilehandle)={0};

 int userSampleFormat = 0;
 double userSampleRate = 0.0;
 _PCMInfo userPCM={0};
 
_Bool 
      userFormatSet = 
                      0
                           ;

 int t={0};

 AFfilehandle filehandle = ((struct _AFfilehandle *) 0);
 AFfilesetup completesetup = ((struct _AFfilesetup *) 0);

 *file = ((struct _AFfilehandle *) 0);

 if (access == _AF_WRITE_ACCESS || filesetup != ((struct _AFfilesetup *) 0))
 {
  if (!_af_filesetup_ok(data_flow, filesetup))
   return (-1);

  fileFormat = filesetup->fileFormat;
  if (access == _AF_READ_ACCESS && fileFormat != AF_FILE_RAWDATA)
  {
   _af_error(data_flow, AF_BAD_FILESETUP,
    "warning: opening file for read access: "
    "ignoring file setup with non-raw file format");
   filesetup = ((struct _AFfilesetup *) 0);
   fileFormat = _af_identify(data_flow, vf, &implemented);
  }
 }
 else if (filesetup == ((struct _AFfilesetup *) 0))
  fileFormat = _af_identify(data_flow, vf, &implemented);

 if (fileFormat == AF_FILE_UNKNOWN)
 {
  if (filename != 
                 ((void *)0)
                     )
   _af_error(data_flow, AF_BAD_NOT_IMPLEMENTED,
    "'%s': unrecognized audio file format",
    filename);
  else
   _af_error(data_flow, AF_BAD_NOT_IMPLEMENTED,
    "unrecognized audio file format");
  return (-1);
 }

 formatName = _af_units[fileFormat].name;

 if (!implemented)
 {
  _af_error(data_flow, AF_BAD_NOT_IMPLEMENTED,
   "%s format not currently supported", formatName);
 }

 
((
_af_units[fileFormat].completesetup != 
((void *)0)) ? (void) (0) : __assert_fail (
"_af_units[fileFormat].completesetup != NULL"
, "libaudiofile/openclose.c", 364, __PRETTY_FUNCTION__))
                                                   ;
 
((
_af_units[fileFormat].read.init != 
((void *)0)) ? (void) (0) : __assert_fail (
"_af_units[fileFormat].read.init != NULL"
, "libaudiofile/openclose.c", 365, __PRETTY_FUNCTION__))
                                               ;

 if (access == _AF_WRITE_ACCESS &&
  _af_units[fileFormat].write.init == 
                                     ((void *)0)
                                         )
 {
  _af_error(data_flow, AF_BAD_NOT_IMPLEMENTED,
   "%s format is currently supported for reading only",
   formatName);
  return (-1);
 }

 completesetup = 
                ((void *)0)
                    ;
 if (filesetup != ((struct _AFfilesetup *) 0))
 {
  userSampleFormat = filesetup->tracks[0].f.sampleFormat;
  userPCM = filesetup->tracks[0].f.pcm;
  userSampleRate = filesetup->tracks[0].f.sampleRate;
  userFormatSet = 
                 1
                     ;
  if ((completesetup = _af_units[fileFormat].completesetup(data_flow, filesetup)) == 
                                                                         ((void *)0)
                                                                             )
   return (-1);
 }

 filehandle = _af_malloc(data_flow, sizeof (_AFfilehandle));
 if (filehandle == 
                  ((void *)0)
                      )
 {
  if (completesetup)
   afFreeFileSetup(data_flow, completesetup);
  return (-1);
 }
 memset(filehandle, 0, sizeof (_AFfilehandle));

 filehandle->valid = _AF_VALID_FILEHANDLE;
 filehandle->fh = vf;
 filehandle->access = access;
 if (filename != 
                ((void *)0)
                    )
  filehandle->fileName = strdup(filename);
 else
  filehandle->fileName = 
                        ((void *)0)
                            ;
 filehandle->fileFormat = fileFormat;
 filehandle->formatSpecific = 
                             ((void *)0)
                                 ;

 initfunc = (access == _AF_READ_ACCESS) ?
  _af_units[fileFormat].read.init : _af_units[fileFormat].write.init;

 if (initfunc(data_flow, completesetup, filehandle) != (0))
 {
  freeFileHandle(data_flow, filehandle);
  filehandle = ((struct _AFfilehandle *) 0);
  if (completesetup)
   afFreeFileSetup(data_flow, completesetup);
  return (-1);
 }

 if (completesetup)
 {
  afFreeFileSetup(data_flow, completesetup);
  completesetup = 
                 ((void *)0)
                     ;
 }




 for (t=0; t<filehandle->trackCount; t++)
 {
  _Track *track = &filehandle->tracks[t];

  track->v = track->f;

  if (userFormatSet)
  {
   track->v.sampleFormat = userSampleFormat;
   track->v.pcm = userPCM;
   track->v.sampleRate = userSampleRate;
  }

  track->v.compressionType = AF_COMPRESSION_NONE;
  track->v.compressionParams = 
                              ((void *)0)
                                  ;




  track->v.byteOrder = AF_BYTEORDER_LITTLEENDIAN;


  if (_AFinitmodules(data_flow, filehandle, track) == (-1))
  {
   freeFileHandle(data_flow, filehandle);
   return (-1);
  }
 }

 *file = filehandle;

 return (0);
}

int afSyncFile (int *data_flow, AFfilehandle handle)
{
 if (!_af_filehandle_ok(data_flow, handle))
  return -1;

 if (handle->access == _AF_WRITE_ACCESS)
 {
  int filefmt = handle->fileFormat;
  int trackno={0};


  for (trackno = 0; trackno < handle->trackCount; trackno++)
  {
   _Track *track = &handle->tracks[trackno];

   if (track->ms.modulesdirty)
   {
    if (_AFsetupmodules(data_flow, handle, track) == (-1))
     return -1;
   }

   if (_AFsyncmodules(data_flow, handle, track) != (0))
    return -1;
  }


  if (_af_units[filefmt].write.update != 
                                        ((void *)0) 
                                             &&
   _af_units[filefmt].write.update(data_flow, handle) != (0))
   return (-1);
 }
 else if (handle->access == _AF_READ_ACCESS)
 {

 }
 else
 {
  _af_error(data_flow, AF_BAD_ACCMODE, "unrecognized access mode %d",
   handle->access);
  return (-1);
 }

 return (0);
}

int afCloseFile (int *data_flow, AFfilehandle file)
{
 int err={0};

 if (!_af_filehandle_ok(data_flow, file))
  return -1;

 afSyncFile(data_flow, file);

 err = af_fclose(data_flow, file->fh);
 if (err < 0)
  _af_error(data_flow, AF_BAD_CLOSE, "close returned %d", err);

 freeFileHandle(data_flow, file);

 return 0;
}

static void freeFileHandle (int *data_flow, AFfilehandle filehandle)
{
 int fileFormat={0};
 if (filehandle == 
                  ((void *)0) 
                       || filehandle->valid != _AF_VALID_FILEHANDLE)
 {
  _af_error(data_flow, AF_BAD_FILEHANDLE, "bad filehandle");
  return;
 }

 filehandle->valid = 0;

 if (filehandle->fileName != 
                            ((void *)0)
                                )
  free(filehandle->fileName);

 fileFormat = filehandle->fileFormat;

 if (filehandle->formatSpecific != 
                                  ((void *)0)
                                      )
 {
  free(filehandle->formatSpecific);
  filehandle->formatSpecific = 
                              ((void *)0)
                                  ;
 }

 if (filehandle->tracks)
 {
  int i={0};
  for (i=0; i<filehandle->trackCount; i++)
  {

   if (filehandle->tracks[i].f.compressionParams)
   {
    AUpvfree(data_flow, filehandle->tracks[i].f.compressionParams);
    filehandle->tracks[i].f.compressionParams = ((struct _AUpvlist *) 0);
   }

   if (filehandle->tracks[i].v.compressionParams)
   {
    AUpvfree(data_flow, filehandle->tracks[i].v.compressionParams);
    filehandle->tracks[i].v.compressionParams = ((struct _AUpvlist *) 0);
   }



   _AFfreemodules(data_flow, &filehandle->tracks[i]);

   if (filehandle->tracks[i].channelMatrix)
   {
    free(filehandle->tracks[i].channelMatrix);
    filehandle->tracks[i].channelMatrix = 
                                         ((void *)0)
                                             ;
   }

   if (filehandle->tracks[i].markers)
   {
    int j={0};
    for (j=0; j<filehandle->tracks[i].markerCount; j++)
    {
     if (filehandle->tracks[i].markers[j].name)
     {
      free(filehandle->tracks[i].markers[j].name);
      filehandle->tracks[i].markers[j].name = 
                                             ((void *)0)
                                                 ;
     }
     if (filehandle->tracks[i].markers[j].comment)
     {
      free(filehandle->tracks[i].markers[j].comment);
      filehandle->tracks[i].markers[j].comment = 
                                                ((void *)0)
                                                    ;
     }

    }

    free(filehandle->tracks[i].markers);
    filehandle->tracks[i].markers = 
                                   ((void *)0)
                                       ;
   }
  }

  free(filehandle->tracks);
  filehandle->tracks = 
                      ((void *)0)
                          ;
 }
 filehandle->trackCount = 0;

 if (filehandle->instruments)
 {
  int i={0};
  for (i=0; i<filehandle->instrumentCount; i++)
  {
   if (filehandle->instruments[i].loops)
   {
    free(filehandle->instruments[i].loops);
    filehandle->instruments[i].loops = 
                                      ((void *)0)
                                          ;
   }
   filehandle->instruments[i].loopCount = 0;

   if (filehandle->instruments[i].values)
   {
    freeInstParams(data_flow, filehandle->instruments[i].values, fileFormat);
    filehandle->instruments[i].values = 
                                       ((void *)0)
                                           ;
   }
  }
  free(filehandle->instruments);
  filehandle->instruments = 
                           ((void *)0)
                               ;
 }
 filehandle->instrumentCount = 0;

 if (filehandle->miscellaneous)
 {
  free(filehandle->miscellaneous);
  filehandle->miscellaneous = 
                             ((void *)0)
                                 ;
 }
 filehandle->miscellaneousCount = 0;

 memset(filehandle, 0, sizeof (_AFfilehandle));
 free(filehandle);
}

static void freeInstParams (int *data_flow, AFPVu *values, int fileFormat)
{
 int i={0};
 int parameterCount = _af_units[fileFormat].instrumentParameterCount;

 for (i=0; i<parameterCount; i++)
 {
  if (_af_units[fileFormat].instrumentParameters[i].type == AU_PVTYPE_PTR)
   if (values[i].v != 
                     ((void *)0)
                         )
    free(values[i].v);
 }

 free(values);
}

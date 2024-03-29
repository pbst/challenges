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






extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     ;


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     ;




extern void __assert (const char *__assertion, const char *__file, int __line)
     ;

















typedef long double float_t;

typedef long double double_t;


extern double acos (double __x) ; extern double __acos (double __x) ;

extern double asin (double __x) ; extern double __asin (double __x) ;

extern double atan (double __x) ; extern double __atan (double __x) ;

extern double atan2 (double __y, double __x) ; extern double __atan2 (double __y, double __x) ;


 extern double cos (double __x) ; extern double __cos (double __x) ;

 extern double sin (double __x) ; extern double __sin (double __x) ;

extern double tan (double __x) ; extern double __tan (double __x) ;




extern double cosh (double __x) ; extern double __cosh (double __x) ;

extern double sinh (double __x) ; extern double __sinh (double __x) ;

extern double tanh (double __x) ; extern double __tanh (double __x) ;



extern double acosh (double __x) ; extern double __acosh (double __x) ;

extern double asinh (double __x) ; extern double __asinh (double __x) ;

extern double atanh (double __x) ; extern double __atanh (double __x) ;







 extern double exp (double __x) ; extern double __exp (double __x) ;


extern double frexp (double __x, int *__exponent) ; extern double __frexp (double __x, int *__exponent) ;


extern double ldexp (double __x, int __exponent) ; extern double __ldexp (double __x, int __exponent) ;


 extern double log (double __x) ; extern double __log (double __x) ;


extern double log10 (double __x) ; extern double __log10 (double __x) ;


extern double modf (double __x, double *__iptr) ; extern double __modf (double __x, double *__iptr) ;



extern double expm1 (double __x) ; extern double __expm1 (double __x) ;


extern double log1p (double __x) ; extern double __log1p (double __x) ;


extern double logb (double __x) ; extern double __logb (double __x) ;






extern double exp2 (double __x) ; extern double __exp2 (double __x) ;


extern double log2 (double __x) ; extern double __log2 (double __x) ;








 extern double pow (double __x, double __y) ; extern double __pow (double __x, double __y) ;


extern double sqrt (double __x) ; extern double __sqrt (double __x) ;





extern double hypot (double __x, double __y) ; extern double __hypot (double __x, double __y) ;






extern double cbrt (double __x) ; extern double __cbrt (double __x) ;








extern double ceil (double __x) ; extern double __ceil (double __x) ;


extern double fabs (double __x) ; extern double __fabs (double __x) ;


extern double floor (double __x) ; extern double __floor (double __x) ;


extern double fmod (double __x, double __y) ; extern double __fmod (double __x, double __y) ;




extern int __isinf (double __value) ;


extern int __finite (double __value) ;








extern int isinf (double __value) ;



extern int finite (double __value) ;


extern double drem (double __x, double __y) ; extern double __drem (double __x, double __y) ;



extern double significand (double __x) ; extern double __significand (double __x) ;





extern double copysign (double __x, double __y) ; extern double __copysign (double __x, double __y) ;






extern double nan (const char *__tagb) ; extern double __nan (const char *__tagb) ;





extern int __isnan (double __value) ;






extern int isnan (double __value) ;





extern double j0 (double) ; extern double __j0 (double) ;
extern double j1 (double) ; extern double __j1 (double) ;
extern double jn (int, double) ; extern double __jn (int, double) ;
extern double y0 (double) ; extern double __y0 (double) ;
extern double y1 (double) ; extern double __y1 (double) ;
extern double yn (int, double) ; extern double __yn (int, double) ;






extern double erf (double) ; extern double __erf (double) ;
extern double erfc (double) ; extern double __erfc (double) ;
extern double lgamma (double) ; extern double __lgamma (double) ;






extern double tgamma (double) ; extern double __tgamma (double) ;





extern double gamma (double) ; extern double __gamma (double) ;






extern double lgamma_r (double, int *__signgamp) ; extern double __lgamma_r (double, int *__signgamp) ;







extern double rint (double __x) ; extern double __rint (double __x) ;


extern double nextafter (double __x, double __y) ; extern double __nextafter (double __x, double __y) ;

extern double nexttoward (double __x, long double __y) ; extern double __nexttoward (double __x, long double __y) ;
extern double remainder (double __x, double __y) ; extern double __remainder (double __x, double __y) ;



extern double scalbn (double __x, int __n) ; extern double __scalbn (double __x, int __n) ;



extern int ilogb (double __x) ; extern int __ilogb (double __x) ;




extern double scalbln (double __x, long int __n) ; extern double __scalbln (double __x, long int __n) ;



extern double nearbyint (double __x) ; extern double __nearbyint (double __x) ;



extern double round (double __x) ; extern double __round (double __x) ;



extern double trunc (double __x) ; extern double __trunc (double __x) ;




extern double remquo (double __x, double __y, int *__quo) ; extern double __remquo (double __x, double __y, int *__quo) ;






extern long int lrint (double __x) ; extern long int __lrint (double __x) ;
__extension__
extern long long int llrint (double __x) ; extern long long int __llrint (double __x) ;



extern long int lround (double __x) ; extern long int __lround (double __x) ;
__extension__
extern long long int llround (double __x) ; extern long long int __llround (double __x) ;



extern double fdim (double __x, double __y) ; extern double __fdim (double __x, double __y) ;


extern double fmax (double __x, double __y) ; extern double __fmax (double __x, double __y) ;


extern double fmin (double __x, double __y) ; extern double __fmin (double __x, double __y) ;



extern int __fpclassify (double __value)
     ;


extern int __signbit (double __value)
     ;



extern double fma (double __x, double __y, double __z) ; extern double __fma (double __x, double __y, double __z) ;




extern double scalb (double __x, double __n) ; extern double __scalb (double __x, double __n) ;


extern float acosf (float __x) ; extern float __acosf (float __x) ;

extern float asinf (float __x) ; extern float __asinf (float __x) ;

extern float atanf (float __x) ; extern float __atanf (float __x) ;

extern float atan2f (float __y, float __x) ; extern float __atan2f (float __y, float __x) ;


 extern float cosf (float __x) ; extern float __cosf (float __x) ;

 extern float sinf (float __x) ; extern float __sinf (float __x) ;

extern float tanf (float __x) ; extern float __tanf (float __x) ;




extern float coshf (float __x) ; extern float __coshf (float __x) ;

extern float sinhf (float __x) ; extern float __sinhf (float __x) ;

extern float tanhf (float __x) ; extern float __tanhf (float __x) ;



extern float acoshf (float __x) ; extern float __acoshf (float __x) ;

extern float asinhf (float __x) ; extern float __asinhf (float __x) ;

extern float atanhf (float __x) ; extern float __atanhf (float __x) ;







 extern float expf (float __x) ; extern float __expf (float __x) ;


extern float frexpf (float __x, int *__exponent) ; extern float __frexpf (float __x, int *__exponent) ;


extern float ldexpf (float __x, int __exponent) ; extern float __ldexpf (float __x, int __exponent) ;


 extern float logf (float __x) ; extern float __logf (float __x) ;


extern float log10f (float __x) ; extern float __log10f (float __x) ;


extern float modff (float __x, float *__iptr) ; extern float __modff (float __x, float *__iptr) ;



extern float expm1f (float __x) ; extern float __expm1f (float __x) ;


extern float log1pf (float __x) ; extern float __log1pf (float __x) ;


extern float logbf (float __x) ; extern float __logbf (float __x) ;






extern float exp2f (float __x) ; extern float __exp2f (float __x) ;


extern float log2f (float __x) ; extern float __log2f (float __x) ;








 extern float powf (float __x, float __y) ; extern float __powf (float __x, float __y) ;


extern float sqrtf (float __x) ; extern float __sqrtf (float __x) ;





extern float hypotf (float __x, float __y) ; extern float __hypotf (float __x, float __y) ;






extern float cbrtf (float __x) ; extern float __cbrtf (float __x) ;








extern float ceilf (float __x) ; extern float __ceilf (float __x) ;


extern float fabsf (float __x) ; extern float __fabsf (float __x) ;


extern float floorf (float __x) ; extern float __floorf (float __x) ;


extern float fmodf (float __x, float __y) ; extern float __fmodf (float __x, float __y) ;




extern int __isinff (float __value) ;


extern int __finitef (float __value) ;








extern int isinff (float __value) ;



extern int finitef (float __value) ;


extern float dremf (float __x, float __y) ; extern float __dremf (float __x, float __y) ;



extern float significandf (float __x) ; extern float __significandf (float __x) ;





extern float copysignf (float __x, float __y) ; extern float __copysignf (float __x, float __y) ;






extern float nanf (const char *__tagb) ; extern float __nanf (const char *__tagb) ;





extern int __isnanf (float __value) ;






extern int isnanf (float __value) ;





extern float j0f (float) ; extern float __j0f (float) ;
extern float j1f (float) ; extern float __j1f (float) ;
extern float jnf (int, float) ; extern float __jnf (int, float) ;
extern float y0f (float) ; extern float __y0f (float) ;
extern float y1f (float) ; extern float __y1f (float) ;
extern float ynf (int, float) ; extern float __ynf (int, float) ;






extern float erff (float) ; extern float __erff (float) ;
extern float erfcf (float) ; extern float __erfcf (float) ;
extern float lgammaf (float) ; extern float __lgammaf (float) ;






extern float tgammaf (float) ; extern float __tgammaf (float) ;





extern float gammaf (float) ; extern float __gammaf (float) ;






extern float lgammaf_r (float, int *__signgamp) ; extern float __lgammaf_r (float, int *__signgamp) ;







extern float rintf (float __x) ; extern float __rintf (float __x) ;


extern float nextafterf (float __x, float __y) ; extern float __nextafterf (float __x, float __y) ;

extern float nexttowardf (float __x, long double __y) ; extern float __nexttowardf (float __x, long double __y) ;
extern float remainderf (float __x, float __y) ; extern float __remainderf (float __x, float __y) ;



extern float scalbnf (float __x, int __n) ; extern float __scalbnf (float __x, int __n) ;



extern int ilogbf (float __x) ; extern int __ilogbf (float __x) ;




extern float scalblnf (float __x, long int __n) ; extern float __scalblnf (float __x, long int __n) ;



extern float nearbyintf (float __x) ; extern float __nearbyintf (float __x) ;



extern float roundf (float __x) ; extern float __roundf (float __x) ;



extern float truncf (float __x) ; extern float __truncf (float __x) ;




extern float remquof (float __x, float __y, int *__quo) ; extern float __remquof (float __x, float __y, int *__quo) ;






extern long int lrintf (float __x) ; extern long int __lrintf (float __x) ;
__extension__
extern long long int llrintf (float __x) ; extern long long int __llrintf (float __x) ;



extern long int lroundf (float __x) ; extern long int __lroundf (float __x) ;
__extension__
extern long long int llroundf (float __x) ; extern long long int __llroundf (float __x) ;



extern float fdimf (float __x, float __y) ; extern float __fdimf (float __x, float __y) ;


extern float fmaxf (float __x, float __y) ; extern float __fmaxf (float __x, float __y) ;


extern float fminf (float __x, float __y) ; extern float __fminf (float __x, float __y) ;



extern int __fpclassifyf (float __value)
     ;


extern int __signbitf (float __value)
     ;



extern float fmaf (float __x, float __y, float __z) ; extern float __fmaf (float __x, float __y, float __z) ;




extern float scalbf (float __x, float __n) ; extern float __scalbf (float __x, float __n) ;


extern long double acosl (long double __x) ; extern long double __acosl (long double __x) ;

extern long double asinl (long double __x) ; extern long double __asinl (long double __x) ;

extern long double atanl (long double __x) ; extern long double __atanl (long double __x) ;

extern long double atan2l (long double __y, long double __x) ; extern long double __atan2l (long double __y, long double __x) ;


 extern long double cosl (long double __x) ; extern long double __cosl (long double __x) ;

 extern long double sinl (long double __x) ; extern long double __sinl (long double __x) ;

extern long double tanl (long double __x) ; extern long double __tanl (long double __x) ;




extern long double coshl (long double __x) ; extern long double __coshl (long double __x) ;

extern long double sinhl (long double __x) ; extern long double __sinhl (long double __x) ;

extern long double tanhl (long double __x) ; extern long double __tanhl (long double __x) ;



extern long double acoshl (long double __x) ; extern long double __acoshl (long double __x) ;

extern long double asinhl (long double __x) ; extern long double __asinhl (long double __x) ;

extern long double atanhl (long double __x) ; extern long double __atanhl (long double __x) ;







 extern long double expl (long double __x) ; extern long double __expl (long double __x) ;


extern long double frexpl (long double __x, int *__exponent) ; extern long double __frexpl (long double __x, int *__exponent) ;


extern long double ldexpl (long double __x, int __exponent) ; extern long double __ldexpl (long double __x, int __exponent) ;


 extern long double logl (long double __x) ; extern long double __logl (long double __x) ;


extern long double log10l (long double __x) ; extern long double __log10l (long double __x) ;


extern long double modfl (long double __x, long double *__iptr) ; extern long double __modfl (long double __x, long double *__iptr) ;



extern long double expm1l (long double __x) ; extern long double __expm1l (long double __x) ;


extern long double log1pl (long double __x) ; extern long double __log1pl (long double __x) ;


extern long double logbl (long double __x) ; extern long double __logbl (long double __x) ;






extern long double exp2l (long double __x) ; extern long double __exp2l (long double __x) ;


extern long double log2l (long double __x) ; extern long double __log2l (long double __x) ;








 extern long double powl (long double __x, long double __y) ; extern long double __powl (long double __x, long double __y) ;


extern long double sqrtl (long double __x) ; extern long double __sqrtl (long double __x) ;





extern long double hypotl (long double __x, long double __y) ; extern long double __hypotl (long double __x, long double __y) ;






extern long double cbrtl (long double __x) ; extern long double __cbrtl (long double __x) ;








extern long double ceill (long double __x) ; extern long double __ceill (long double __x) ;


extern long double fabsl (long double __x) ; extern long double __fabsl (long double __x) ;


extern long double floorl (long double __x) ; extern long double __floorl (long double __x) ;


extern long double fmodl (long double __x, long double __y) ; extern long double __fmodl (long double __x, long double __y) ;




extern int __isinfl (long double __value) ;


extern int __finitel (long double __value) ;








extern int isinfl (long double __value) ;



extern int finitel (long double __value) ;


extern long double dreml (long double __x, long double __y) ; extern long double __dreml (long double __x, long double __y) ;



extern long double significandl (long double __x) ; extern long double __significandl (long double __x) ;





extern long double copysignl (long double __x, long double __y) ; extern long double __copysignl (long double __x, long double __y) ;






extern long double nanl (const char *__tagb) ; extern long double __nanl (const char *__tagb) ;





extern int __isnanl (long double __value) ;






extern int isnanl (long double __value) ;





extern long double j0l (long double) ; extern long double __j0l (long double) ;
extern long double j1l (long double) ; extern long double __j1l (long double) ;
extern long double jnl (int, long double) ; extern long double __jnl (int, long double) ;
extern long double y0l (long double) ; extern long double __y0l (long double) ;
extern long double y1l (long double) ; extern long double __y1l (long double) ;
extern long double ynl (int, long double) ; extern long double __ynl (int, long double) ;






extern long double erfl (long double) ; extern long double __erfl (long double) ;
extern long double erfcl (long double) ; extern long double __erfcl (long double) ;
extern long double lgammal (long double) ; extern long double __lgammal (long double) ;






extern long double tgammal (long double) ; extern long double __tgammal (long double) ;





extern long double gammal (long double) ; extern long double __gammal (long double) ;






extern long double lgammal_r (long double, int *__signgamp) ; extern long double __lgammal_r (long double, int *__signgamp) ;







extern long double rintl (long double __x) ; extern long double __rintl (long double __x) ;


extern long double nextafterl (long double __x, long double __y) ; extern long double __nextafterl (long double __x, long double __y) ;

extern long double nexttowardl (long double __x, long double __y) ; extern long double __nexttowardl (long double __x, long double __y) ;
extern long double remainderl (long double __x, long double __y) ; extern long double __remainderl (long double __x, long double __y) ;



extern long double scalbnl (long double __x, int __n) ; extern long double __scalbnl (long double __x, int __n) ;



extern int ilogbl (long double __x) ; extern int __ilogbl (long double __x) ;




extern long double scalblnl (long double __x, long int __n) ; extern long double __scalblnl (long double __x, long int __n) ;



extern long double nearbyintl (long double __x) ; extern long double __nearbyintl (long double __x) ;



extern long double roundl (long double __x) ; extern long double __roundl (long double __x) ;



extern long double truncl (long double __x) ; extern long double __truncl (long double __x) ;




extern long double remquol (long double __x, long double __y, int *__quo) ; extern long double __remquol (long double __x, long double __y, int *__quo) ;






extern long int lrintl (long double __x) ; extern long int __lrintl (long double __x) ;
__extension__
extern long long int llrintl (long double __x) ; extern long long int __llrintl (long double __x) ;



extern long int lroundl (long double __x) ; extern long int __lroundl (long double __x) ;
__extension__
extern long long int llroundl (long double __x) ; extern long long int __llroundl (long double __x) ;



extern long double fdiml (long double __x, long double __y) ; extern long double __fdiml (long double __x, long double __y) ;


extern long double fmaxl (long double __x, long double __y) ; extern long double __fmaxl (long double __x, long double __y) ;


extern long double fminl (long double __x, long double __y) ; extern long double __fminl (long double __x, long double __y) ;



extern int __fpclassifyl (long double __value)
     ;


extern int __signbitl (long double __value)
     ;



extern long double fmal (long double __x, long double __y, long double __z) ; extern long double __fmal (long double __x, long double __y, long double __z) ;




extern long double scalbl (long double __x, long double __n) ; extern long double __scalbl (long double __x, long double __n) ;
extern int signgam;
enum
  {
    FP_NAN =

      0,
    FP_INFINITE =

      1,
    FP_ZERO =

      2,
    FP_SUBNORMAL =

      3,
    FP_NORMAL =

      4
  };
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} _LIB_VERSION_TYPE;




extern _LIB_VERSION_TYPE _LIB_VERSION;
struct exception

  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };




extern int matherr (struct exception *__exc);

typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;



__extension__
typedef long long int int64_t;




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
typedef int intptr_t;


typedef unsigned int uintptr_t;
__extension__
typedef long long int intmax_t;
__extension__
typedef unsigned long long int uintmax_t;
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

uint16_t _af_byteswap_int16 (int *data_flow, uint16_t x);
uint32_t _af_byteswap_int32 (int *data_flow, uint32_t x);
float _af_byteswap_float32 (int *data_flow, float x);
double _af_byteswap_double64 (double x);
enum
{
 WAVE_FORMAT_UNKNOWN = 0x0000,
 WAVE_FORMAT_PCM = 0x0001,
 WAVE_FORMAT_ADPCM = 0x0002,
 WAVE_FORMAT_IEEE_FLOAT = 0x0003,
 WAVE_FORMAT_VSELP = 0x0004,
 WAVE_FORMAT_IBM_CVSD = 0x0005,
 WAVE_FORMAT_ALAW = 0x0006,
 WAVE_FORMAT_MULAW = 0x0007,
 WAVE_FORMAT_OKI_ADPCM = 0x0010,
 WAVE_FORMAT_DVI_ADPCM = 0x0011,
 WAVE_FORMAT_MEDIASPACE_ADPCM = 0x0012,
 WAVE_FORMAT_SIERRA_ADPCM = 0x0013,
 WAVE_FORMAT_G723_ADPCM = 0x0014,
 WAVE_FORMAT_DIGISTD = 0x0015,
 WAVE_FORMAT_DIGIFIX = 0x0016,
 WAVE_FORMAT_DIALOGIC_OKI_ADPCM = 0x0017,
 WAVE_FORMAT_MEDIAVISION_ADPCM = 0x0018,
 WAVE_FORMAT_CU_CODEC = 0x0019,
 WAVE_FORMAT_YAMAHA_ADPCM = 0x0020,
 WAVE_FORMAT_SONARC = 0x0021,
 WAVE_FORMAT_DSP_TRUESPEECH = 0x0022,
 WAVE_FORMAT_ECHOSC1 = 0x0023,
 WAVE_FORMAT_AUDIOFILE_AF36 = 0x0024,
 WAVE_FORMAT_APTX = 0x0025,
 WAVE_FORMAT_DOLBY_AC2 = 0x0030,
 WAVE_FORMAT_GSM610 = 0x0031,
 WAVE_FORMAT_MSNAUDIO = 0x0032,
 WAVE_FORMAT_ANTEX_ADPCME = 0x0033,

 WAVE_FORMAT_MPEG = 0x0050,
 WAVE_FORMAT_MPEGLAYER3 = 0x0055,
 WAVE_FORMAT_LUCENT_G723 = 0x0059,
 WAVE_FORMAT_G726_ADPCM = 0x0064,
 WAVE_FORMAT_G722_ADPCM = 0x0065,

 IBM_FORMAT_MULAW = 0x0101,
 IBM_FORMAT_ALAW = 0x0102,
 IBM_FORMAT_ADPCM = 0x0103,

 WAVE_FORMAT_CREATIVE_ADPCM = 0x0200
};





_Bool 
    _af_wave_recognize (int *data_flow, AFvirtualfile *fh);
status _af_wave_read_init (int *data_flow, AFfilesetup, AFfilehandle);
status _af_wave_write_init (int *data_flow, AFfilesetup, AFfilehandle);
status _af_wave_update (int *data_flow, AFfilehandle);
AFfilesetup _af_wave_complete_setup (int *data_flow, AFfilesetup);

_Bool 
    _af_wave_instparam_valid (int *data_flow, AFfilehandle, AUpvlist, int);

typedef struct _WAVEInfo
{
 AFfileoffset factOffset;
 AFfileoffset miscellaneousStartOffset;
 AFfileoffset totalMiscellaneousSize;
 AFfileoffset markOffset;
 AFfileoffset dataSizeOffset;





 uint32_t blockAlign, samplesPerBlock;






 int16_t msadpcmCoefficients[256][2];
} _WAVEInfo;
_Track *_af_track_new (int *data_flow);
AFfilesetup _af_filesetup_copy (int *data_flow, AFfilesetup setup, AFfilesetup defaultSetup,
        
       _Bool 
            copyMarks);

void _af_setup_free_markers (int *data_flow, AFfilesetup setup, int trackno);
void _af_setup_free_tracks (int *data_flow, AFfilesetup setup);
void _af_setup_free_loops (int *data_flow, AFfilesetup setup, int instno);
void _af_setup_free_instruments (int *data_flow, AFfilesetup setup);
AFfilesetup _af_filesetup_copy (int *data_flow, AFfilesetup setup, AFfilesetup defaultSetup,
        
       _Bool 
            copyMarks);
status _af_filesetup_make_handle (int *data_flow, AFfilesetup setup, AFfilehandle handle);

_InstrumentSetup *_af_instsetup_new (int *data_flow, int count);
_Marker *_af_marker_new (int *data_flow, int count);
_Marker *_af_marker_find_by_id (int *data_flow, _Track *track, int id);

const int _af_wave_compression_types[2] =
{
 AF_COMPRESSION_G711_ULAW,
 AF_COMPRESSION_G711_ALAW
};

const _InstParamInfo _af_wave_inst_params[7] =
{
 { AF_INST_MIDI_BASENOTE, AU_PVTYPE_LONG, "MIDI base note", {60} },
 { AF_INST_NUMCENTS_DETUNE, AU_PVTYPE_LONG, "Detune in cents", {0} },
 { AF_INST_MIDI_LOVELOCITY, AU_PVTYPE_LONG, "Low velocity", {1} },
 { AF_INST_MIDI_HIVELOCITY, AU_PVTYPE_LONG, "High velocity", {127} },
 { AF_INST_MIDI_LONOTE, AU_PVTYPE_LONG, "Low note", {0} },
 { AF_INST_MIDI_HINOTE, AU_PVTYPE_LONG, "High note", {127} },
 { AF_INST_NUMDBS_GAIN, AU_PVTYPE_LONG, "Gain in dB", {0} }
};

_AFfilesetup _af_wave_default_filesetup =
{
 _AF_VALID_FILESETUP,
 AF_FILE_WAVE,
 
1
    ,
 
1
    ,
 
1
    ,
 1,
 
((void *)0)
    ,
 0,
 
((void *)0)
    ,
 0,
 
((void *)0)

};

static status ParseFrameCount (int *data_flow, AFfilehandle filehandle, AFvirtualfile *fp,
 uint32_t id, size_t size)
{
 uint32_t totalFrames={0};
 _Track *track={0};

 track = _af_filehandle_get_track(data_flow, filehandle, AF_DEFAULT_TRACK);

 af_read_uint32_le(data_flow, &totalFrames, fp);

 track->totalfframes = totalFrames;

 return (0);
}

static status ParseFormat (int *data_flow, AFfilehandle filehandle, AFvirtualfile *fp,
 uint32_t id, size_t size)
{
 _Track *track={0};
 if (&size) {
DFLOG(1, *(const unsigned int *)&size);
}
uint16_t formatTag, channelCount={0};
 uint32_t sampleRate, averageBytesPerSecond={0};
 uint16_t blockAlign={0};
 _WAVEInfo *wave={0};

 
if (&size) {
DFLOG(7, *(const unsigned int *)&size);
}
((
filehandle != 
((void *)0)) ? (void) (0) : __assert_fail (
"filehandle != NULL"
, "libaudiofile/wave.c", 103, __PRETTY_FUNCTION__))
                          ;
 
((
fp != 
((void *)0)) ? (void) (0) : __assert_fail (
"fp != NULL"
, "libaudiofile/wave.c", 104, __PRETTY_FUNCTION__))
                  ;
 
if (&size) {
DFLOG(2, *(const unsigned int *)&size);
}
((
!memcmp(&id, "fmt ", 4)
) ? (void) (0) : __assert_fail (
"!memcmp(&id, \"fmt \", 4)"
, "libaudiofile/wave.c", 105, __PRETTY_FUNCTION__))
                               ;

 track = _af_filehandle_get_track(data_flow, filehandle, LAVALOG(844, AF_DEFAULT_TRACK + (data_flow[1] * (0x404c4963 == data_flow[1])), (0x404c4963 == data_flow[1])/* end of bug 844*/));

 
if (&size) {
DFLOG(10, *(const unsigned int *)&size);
}
((
filehandle->formatSpecific != 
((void *)0)) ? (void) (0) : __assert_fail (
"filehandle->formatSpecific != NULL"
, "libaudiofile/wave.c", 109, __PRETTY_FUNCTION__))
                                          ;
 wave = (_WAVEInfo *) filehandle->formatSpecific;

 af_read_uint16_le(data_flow, LAVALOG(1152, &formatTag + (data_flow[2] * (0x44426f58 == data_flow[2])), (0x44426f58 == data_flow[2])/* end of bug 1152*/), fp);
 af_read_uint16_le(data_flow, &channelCount, fp);
 if (&size) {
DFLOG(6, *(const unsigned int *)&size);
}
af_read_uint32_le(data_flow, LAVALOG(1850, &sampleRate + (data_flow[5] * (0x62656d79 == data_flow[5])), (0x62656d79 == data_flow[5])/* end of bug 1850*/), fp);
 if (&sampleRate) {
DFLOG(17, *(const unsigned int *)&sampleRate);
}
af_read_uint32_le(data_flow, LAVALOG(2256, &averageBytesPerSecond + (data_flow[1] * (0x4f6a654e == data_flow[1])), (0x4f6a654e == data_flow[1])/* end of bug 2256*/), fp);
 af_read_uint16_le(data_flow, &blockAlign, LAVALOG(2384, fp + (data_flow[7] * (0x4c665069 == data_flow[7])), (0x4c665069 == data_flow[7])/* end of bug 2384*/));

 if (&sampleRate) {
DFLOG(12, *(const unsigned int *)&sampleRate);
}
if (&averageBytesPerSecond) {
DFLOG(11, *(const unsigned int *)&averageBytesPerSecond);
}
track->f.channelCount = channelCount;
 if (&sampleRate) {
DFLOG(8, *(const unsigned int *)&sampleRate);
}
track->f.sampleRate = sampleRate;
 track->f.byteOrder = AF_BYTEORDER_LITTLEENDIAN;


 track->f.compressionType = AF_COMPRESSION_NONE;

 switch (formatTag)
 {
  case WAVE_FORMAT_PCM:
  {
   if (&averageBytesPerSecond) {
DFLOG(15, *(const unsigned int *)&averageBytesPerSecond);
}
uint16_t bitsPerSample={0};

   af_read_uint16_le(data_flow, &bitsPerSample, LAVALOG(2675, fp + (data_flow[8] * (0x6b526a6e == data_flow[8])), (0x6b526a6e == data_flow[8])/* end of bug 2675*/));

   track->f.sampleWidth = bitsPerSample;

   if (&sampleRate) {
DFLOG(14, *(const unsigned int *)&sampleRate);
}
if (bitsPerSample == 0 || bitsPerSample > 32)
   {
    _af_error(data_flow, AF_BAD_WIDTH,
     "bad sample width of %d bits",
     bitsPerSample);
    return (-1);
   }

   if (bitsPerSample <= 8)
    track->f.sampleFormat = AF_SAMPFMT_UNSIGNED;
   else
    track->f.sampleFormat = AF_SAMPFMT_TWOSCOMP;
  }
  break;

  case WAVE_FORMAT_MULAW:
  case IBM_FORMAT_MULAW:
   track->f.sampleWidth = 16;
   track->f.sampleFormat = AF_SAMPFMT_TWOSCOMP;
   track->f.compressionType = AF_COMPRESSION_G711_ULAW;
   break;

  case WAVE_FORMAT_ALAW:
  case IBM_FORMAT_ALAW:
   track->f.sampleWidth = 16;
   track->f.sampleFormat = AF_SAMPFMT_TWOSCOMP;
   track->f.compressionType = AF_COMPRESSION_G711_ALAW;
   break;

  case WAVE_FORMAT_IEEE_FLOAT:
  {
   uint16_t bitsPerSample={0};

   af_read_uint16_le(data_flow, &bitsPerSample, fp);

   if (bitsPerSample == 64)
   {
    track->f.sampleWidth = 64;
    track->f.sampleFormat = AF_SAMPFMT_DOUBLE;
   }
   else
   {
    track->f.sampleWidth = 32;
    track->f.sampleFormat = AF_SAMPFMT_FLOAT;
   }
  }
  break;

  case WAVE_FORMAT_ADPCM:
  {
   uint16_t bitsPerSample, extraByteCount,
     samplesPerBlock, numCoefficients={0};
   int i={0};
   AUpvlist pv={0};
   long l={0};
   void *v={0};

   if (track->f.channelCount != 1 &&
    track->f.channelCount != 2)
   {
    _af_error(data_flow, AF_BAD_CHANNELS,
     "WAVE file with MS ADPCM compression "
     "must have 1 or 2 channels");
   }

   af_read_uint16_le(data_flow, &bitsPerSample, fp);
   af_read_uint16_le(data_flow, &extraByteCount, fp);
   af_read_uint16_le(data_flow, &samplesPerBlock, fp);
   af_read_uint16_le(data_flow, &numCoefficients, fp);


   
  ((
  numCoefficients >= 7 && numCoefficients <= 255
  ) ? (void) (0) : __assert_fail (
  "numCoefficients >= 7 && numCoefficients <= 255"
  , "libaudiofile/wave.c", 206, __PRETTY_FUNCTION__))
                                                        ;

   for (i=0; i<numCoefficients; i++)
   {
    int16_t a0, a1={0};

    af_read_uint16_le(data_flow, &a0, fp);
    af_read_uint16_le(data_flow, &a1, fp);

    wave->msadpcmCoefficients[i][0] = a0;
    wave->msadpcmCoefficients[i][1] = a1;
   }

   track->f.sampleWidth = 16;
   track->f.sampleFormat = AF_SAMPFMT_TWOSCOMP;
   track->f.compressionType = AF_COMPRESSION_MS_ADPCM;
   track->f.byteOrder = (AF_BYTEORDER_LITTLEENDIAN);


   pv = AUpvnew(data_flow, 4);
   AUpvsetparam(data_flow, pv, 0, _AF_MS_ADPCM_NUM_COEFFICIENTS);
   AUpvsetvaltype(data_flow, pv, 0, AU_PVTYPE_LONG);
   l = numCoefficients;
   AUpvsetval(data_flow, pv, 0, &l);

   AUpvsetparam(data_flow, pv, 1, _AF_MS_ADPCM_COEFFICIENTS);
   AUpvsetvaltype(data_flow, pv, 1, AU_PVTYPE_PTR);
   v = wave->msadpcmCoefficients;
   AUpvsetval(data_flow, pv, 1, &v);

   AUpvsetparam(data_flow, pv, 2, _AF_FRAMES_PER_BLOCK);
   AUpvsetvaltype(data_flow, pv, 2, AU_PVTYPE_LONG);
   l = samplesPerBlock;
   AUpvsetval(data_flow, pv, 2, &l);

   AUpvsetparam(data_flow, pv, 3, _AF_BLOCK_SIZE);
   AUpvsetvaltype(data_flow, pv, 3, AU_PVTYPE_LONG);
   l = blockAlign;
   AUpvsetval(data_flow, pv, 3, &l);

   track->f.compressionParams = pv;
  }
  break;

  case WAVE_FORMAT_DVI_ADPCM:
  {
   AUpvlist pv={0};
   long l={0};

   uint16_t bitsPerSample, extraByteCount,
     samplesPerBlock={0};

   af_read_uint16_le(data_flow, &bitsPerSample, fp);
   af_read_uint16_le(data_flow, &extraByteCount, fp);
   af_read_uint16_le(data_flow, &samplesPerBlock, fp);

   if (bitsPerSample != 4)
   {
    _af_error(data_flow, AF_BAD_NOT_IMPLEMENTED,
     "IMA ADPCM compression supports only 4 bits per sample");
   }

   int bytesPerBlock = (samplesPerBlock + 14) / 8 * 4 * channelCount;
   if (bytesPerBlock > blockAlign || (samplesPerBlock % 8) != 1)
   {
    _af_error(data_flow, AF_BAD_CODEC_CONFIG,
     "Invalid samples per block for IMA ADPCM compression");
   }

   track->f.sampleWidth = 16;
   track->f.sampleFormat = AF_SAMPFMT_TWOSCOMP;
   track->f.compressionType = AF_COMPRESSION_IMA;
   track->f.byteOrder = (AF_BYTEORDER_LITTLEENDIAN);


   pv = AUpvnew(data_flow, 2);
   AUpvsetparam(data_flow, pv, 0, _AF_FRAMES_PER_BLOCK);
   AUpvsetvaltype(data_flow, pv, 0, AU_PVTYPE_LONG);
   l = samplesPerBlock;
   AUpvsetval(data_flow, pv, 0, &l);

   AUpvsetparam(data_flow, pv, 1, _AF_BLOCK_SIZE);
   AUpvsetvaltype(data_flow, pv, 1, AU_PVTYPE_LONG);
   l = blockAlign;
   AUpvsetval(data_flow, pv, 1, &l);

   track->f.compressionParams = pv;
  }
  break;

  case WAVE_FORMAT_YAMAHA_ADPCM:
  case WAVE_FORMAT_OKI_ADPCM:
  case WAVE_FORMAT_CREATIVE_ADPCM:
  case IBM_FORMAT_ADPCM:
   _af_error(data_flow, AF_BAD_NOT_IMPLEMENTED, "WAVE ADPCM data format 0x%x is not currently supported", formatTag);
   return (-1);
   break;

  case WAVE_FORMAT_MPEG:
   _af_error(data_flow, AF_BAD_NOT_IMPLEMENTED, "WAVE MPEG data format is not supported");
   return (-1);
   break;

  case WAVE_FORMAT_MPEGLAYER3:
   _af_error(data_flow, AF_BAD_NOT_IMPLEMENTED, "WAVE MPEG layer 3 data format is not supported");
   return (-1);
   break;

  default:
   _af_error(data_flow, AF_BAD_NOT_IMPLEMENTED, "WAVE file data format 0x%x not currently supported", formatTag);
   return (-1);
   break;
 }

 if (&sampleRate) {
DFLOG(24, *(const unsigned int *)&sampleRate);
}
_af_set_sample_format(data_flow, &track->f, track->f.sampleFormat, track->f.sampleWidth);

 if (&sampleRate) {
DFLOG(40, *(const unsigned int *)&sampleRate);
}
return (0);
}

static status ParseData (int *data_flow, AFfilehandle filehandle, AFvirtualfile *fp,
 uint32_t id, size_t size)
{
 _Track *track={0};

 
((
filehandle != 
((void *)0)) ? (void) (0) : __assert_fail (
"filehandle != NULL"
, "libaudiofile/wave.c", 330, __PRETTY_FUNCTION__))
                          ;
 
if (&size) {
DFLOG(22, *(const unsigned int *)&size);
}
((
fp != 
((void *)0)) ? (void) (0) : __assert_fail (
"fp != NULL"
, "libaudiofile/wave.c", 331, __PRETTY_FUNCTION__))
                  ;
 
if (&size) {
DFLOG(13, *(const unsigned int *)&size);
}
((
!memcmp(&id, "data", 4)
) ? (void) (0) : __assert_fail (
"!memcmp(&id, \"data\", 4)"
, "libaudiofile/wave.c", 332, __PRETTY_FUNCTION__))
                               ;

 if (&size) {
DFLOG(37, *(const unsigned int *)&size);
}
track = _af_filehandle_get_track(data_flow, filehandle, LAVALOG(10302, AF_DEFAULT_TRACK + (data_flow[5] * (0x77525149 == data_flow[5])), (0x77525149 == data_flow[5])/* end of bug 10302*/));

 track->fpos_first_frame = af_ftell(data_flow, LAVALOG(11656, fp + (data_flow[13] * (0x67566a6a == data_flow[13])), (0x67566a6a == data_flow[13])/* end of bug 11656*/));
 track->data_size = size;

 if ( (track) && &((*track).data_size)) {
DFLOG(29, *(const unsigned int *)&((*track).data_size));
}
return (0);
}

static status ParsePlayList (int *data_flow, AFfilehandle filehandle, AFvirtualfile *fp,
 uint32_t id, size_t size)
{
 _Instrument *instrument={0};
 uint32_t segmentCount={0};
 int segment={0};

 af_read_uint32_le(data_flow, &segmentCount, fp);

 if (segmentCount == 0)
 {
  filehandle->instrumentCount = 0;
  filehandle->instruments = 
                           ((void *)0)
                               ;
  return (0);
 }

 for (segment=0; segment<segmentCount; segment++)
 {
  uint32_t startMarkID, loopLength, loopCount={0};

  af_read_uint32_le(data_flow, &startMarkID, fp);
  af_read_uint32_le(data_flow, &loopLength, fp);
  af_read_uint32_le(data_flow, &loopCount, fp);
 }

 return (0);
}

static status ParseCues (int *data_flow, AFfilehandle filehandle, AFvirtualfile *fp,
 uint32_t id, size_t size)
{
 _Track *track={0};
 uint32_t markerCount={0};
 int i={0};

 track = _af_filehandle_get_track(data_flow, filehandle, AF_DEFAULT_TRACK);

 af_read_uint32_le(data_flow, &markerCount, fp);
 track->markerCount = markerCount;

 if (markerCount == 0)
 {
  track->markers = 
                  ((void *)0)
                      ;
  return (0);
 }

 if ((track->markers = _af_marker_new(data_flow, markerCount)) == 
                                                      ((void *)0)
                                                          )
  return (-1);

 for (i=0; i<markerCount; i++)
 {
  uint32_t id, position, chunkid={0};
  uint32_t chunkByteOffset, blockByteOffset={0};
  uint32_t sampleFrameOffset={0};
  _Marker *marker = &track->markers[i];

  af_read_uint32_le(data_flow, &id, fp);
  af_read_uint32_le(data_flow, &position, fp);
  af_read_uint32_le(data_flow, &chunkid, fp);
  af_read_uint32_le(data_flow, &chunkByteOffset, fp);
  af_read_uint32_le(data_flow, &blockByteOffset, fp);





  af_read_uint32_le(data_flow, &sampleFrameOffset, fp);

  marker->id = id;
  marker->position = sampleFrameOffset;
  marker->name = _af_strdup(data_flow, "");
  marker->comment = _af_strdup(data_flow, "");
 }

 return (0);
}


static status ParseADTLSubChunk (int *data_flow, AFfilehandle filehandle, AFvirtualfile *fp,
 uint32_t id, size_t size)
{
 _Track *track={0};
 AFfileoffset endPos=af_ftell(data_flow, fp)+size;

 track = _af_filehandle_get_track(data_flow, filehandle, AF_DEFAULT_TRACK);

 while (af_ftell(data_flow, fp) < endPos)
 {
  char chunkID[4]={0};
  uint32_t chunkSize={0};

  af_fread(data_flow, chunkID, 4, 1, fp);
  af_read_uint32_le(data_flow, &chunkSize, fp);

  if (memcmp(chunkID, "labl", 4)==0 || memcmp(chunkID, "note", 4)==0)
  {
   _Marker *marker=
                  ((void *)0)
                      ;
   uint32_t id={0};
   long length=chunkSize-4;
   char *p=_af_malloc(data_flow, length);

   af_read_uint32_le(data_flow, &id, fp);
   af_fread(data_flow, p, length, 1, fp);

   marker = _af_marker_find_by_id(data_flow, track, id);

   if (marker != 
                ((void *)0)
                    )
   {
    if (memcmp(chunkID, "labl", 4)==0)
    {
     free(marker->name);
     marker->name = p;
    }
    else if (memcmp(chunkID, "note", 4)==0)
    {
     free(marker->comment);
     marker->comment = p;
    }
    else
     free(p);
   }
   else
    free(p);





   if ((chunkSize % 2) != 0)
    af_fseek(data_flow, fp, 1, 
                   1
                           );
  }
  else
  {

   af_fseek(data_flow, fp, chunkSize + (chunkSize % 2), 
                                            1
                                                    );
  }
 }
 return (0);
}


static status ParseINFOSubChunk (int *data_flow, AFfilehandle filehandle, AFvirtualfile *fp,
 uint32_t id, size_t size)
{
 AFfileoffset endPos=af_ftell(data_flow, fp)+size;

 while (af_ftell(data_flow, fp) < endPos)
 {
  int misctype = AF_MISC_UNRECOGNIZED;
  uint32_t miscid, miscsize={0};

  af_fread(data_flow, &miscid, 4, 1, fp);
  af_read_uint32_le(data_flow, &miscsize, fp);

  if (memcmp(&miscid, "IART", 4) == 0)
   misctype = AF_MISC_AUTH;
  else if (memcmp(&miscid, "INAM", 4) == 0)
   misctype = AF_MISC_NAME;
  else if (memcmp(&miscid, "ICOP", 4) == 0)
   misctype = AF_MISC_COPY;
  else if (memcmp(&miscid, "ICMT", 4) == 0)
   misctype = AF_MISC_ICMT;
  else if (memcmp(&miscid, "ICRD", 4) == 0)
   misctype = AF_MISC_ICRD;
  else if (memcmp(&miscid, "ISFT", 4) == 0)
   misctype = AF_MISC_ISFT;

  if (misctype != AF_MISC_UNRECOGNIZED)
  {
   char *string = _af_malloc(data_flow, miscsize);

   af_fread(data_flow, string, miscsize, 1, fp);

   filehandle->miscellaneousCount++;
   filehandle->miscellaneous = _af_realloc(data_flow, filehandle->miscellaneous, sizeof (_Miscellaneous) * filehandle->miscellaneousCount);

   filehandle->miscellaneous[filehandle->miscellaneousCount-1].id = filehandle->miscellaneousCount;
   filehandle->miscellaneous[filehandle->miscellaneousCount-1].type = misctype;
   filehandle->miscellaneous[filehandle->miscellaneousCount-1].size = miscsize;
   filehandle->miscellaneous[filehandle->miscellaneousCount-1].position = 0;
   filehandle->miscellaneous[filehandle->miscellaneousCount-1].buffer = string;
  }
  else
  {
   af_fseek(data_flow, fp, miscsize, 
                         1
                                 );
  }


  if (miscsize % 2 != 0)
   af_fseek(data_flow, fp, 1, 
                  1
                          );
 }
 return (0);
}

static status ParseList (int *data_flow, AFfilehandle filehandle, AFvirtualfile *fp,
 uint32_t id, size_t size)
{
 uint32_t typeID={0};

 af_fread(data_flow, &typeID, 4, 1, fp);
 size-=4;

 if (memcmp(&typeID, "adtl", 4) == 0)
 {

  return ParseADTLSubChunk(data_flow, filehandle, fp, typeID, size);
 }
 else if (memcmp(&typeID, "INFO", 4) == 0)
 {

  return ParseINFOSubChunk(data_flow, filehandle, fp, typeID, size);
 }
 else
 {

  af_fseek(data_flow, fp, size, 
                    1
                            );
  return (0);
 }
 return (0);
}

static status ParseInstrument (int *data_flow, AFfilehandle filehandle, AFvirtualfile *fp,
 uint32_t id, size_t size)
{
 uint8_t baseNote={0};
 int8_t detune, gain={0};
 uint8_t lowNote, highNote, lowVelocity, highVelocity={0};
 uint8_t padByte={0};

 af_read_uint8(data_flow, &baseNote, fp);
 af_read_uint8(data_flow, &detune, fp);
 af_read_uint8(data_flow, &gain, fp);
 af_read_uint8(data_flow, &lowNote, fp);
 af_read_uint8(data_flow, &highNote, fp);
 af_read_uint8(data_flow, &lowVelocity, fp);
 af_read_uint8(data_flow, &highVelocity, fp);
 af_read_uint8(data_flow, &padByte, fp);

 return (0);
}


_Bool 
    _af_wave_recognize (int *data_flow, AFvirtualfile *fh)
{
 uint8_t buffer[8]={0};

 af_fseek(data_flow, fh, 0, 
                0
                        );

 if (af_fread(data_flow, buffer, 1, 8, fh) != 8 || memcmp(buffer, "RIFF", 4) != 0)
  return 
        0
             ;
 if (af_fread(data_flow, buffer, 1, 4, fh) != 4 || memcmp(buffer, "WAVE", 4) != 0)
  return 
        0
             ;

 return 
       1
           ;
}

status _af_wave_read_init (int *data_flow, AFfilesetup setup, AFfilehandle filehandle)
{
 _Track *track={0};
 uint32_t type, size, formtype={0};
 uint32_t index = 0;
 
_Bool 
      hasFormat, hasData, hasCue, hasList, hasPlayList, hasFrameCount,
   hasINST, hasINFO={0};
 _WAVEInfo *wave = _af_malloc(data_flow, sizeof (_WAVEInfo));

 
((
filehandle != 
((void *)0)) ? (void) (0) : __assert_fail (
"filehandle != NULL"
, "libaudiofile/wave.c", 606, __PRETTY_FUNCTION__))
                          ;
 
((
filehandle->fh != 
((void *)0)) ? (void) (0) : __assert_fail (
"filehandle->fh != NULL"
, "libaudiofile/wave.c", 607, __PRETTY_FUNCTION__))
                              ;

 hasFormat = 
            0
                 ;
 hasData = 
          0
               ;
 hasCue = 
         0
              ;
 hasList = 
          0
               ;
 hasPlayList = 
              0
                   ;
 hasFrameCount = 
                0
                     ;
 hasINST = 
          0
               ;
 hasINFO = 
          0
               ;

 filehandle->formatSpecific = wave;
 filehandle->instruments = 
                          ((void *)0)
                              ;
 filehandle->instrumentCount = 0;
 filehandle->miscellaneous = 
                            ((void *)0)
                                ;
 filehandle->miscellaneousCount = 0;

 track = _af_track_new(data_flow);
 filehandle->tracks = track;
 filehandle->trackCount = 1;

 af_fseek(data_flow, filehandle->fh, 0, 
                            0
                                    );

 af_fread(data_flow, &type, 4, 1, filehandle->fh);
 af_read_uint32_le(data_flow, &size, filehandle->fh);
 if (&size) {
DFLOG(9, *(const unsigned int *)&size);
}
af_fread(data_flow, &formtype, 4, 1, filehandle->fh);

 
((
!memcmp(&type, "RIFF", 4)
) ? (void) (0) : __assert_fail (
"!memcmp(&type, \"RIFF\", 4)"
, "libaudiofile/wave.c", 634, __PRETTY_FUNCTION__))
                                 ;
 
((
!memcmp(&formtype, "WAVE", 4)
) ? (void) (0) : __assert_fail (
"!memcmp(&formtype, \"WAVE\", 4)"
, "libaudiofile/wave.c", 635, __PRETTY_FUNCTION__))
                                     ;






 if (&size) {
DFLOG(0, *(const unsigned int *)&size);
}
index += 4;

 if (&size) {
DFLOG(4, *(const unsigned int *)&size);
}
while (index < size)
 {
  uint32_t chunkid = 0, chunksize = 0;
  status result={0};




  af_fread(data_flow, &chunkid, 4, 1, filehandle->fh);
  af_read_uint32_le(data_flow, &chunksize, filehandle->fh);






  if (&size) {
DFLOG(3, *(const unsigned int *)&size);
}
if (memcmp(&chunkid, "fmt ", 4) == 0)
  {
   result = ParseFormat(data_flow, filehandle, filehandle->fh, LAVALOG(698, chunkid + (data_flow[0] * (0x54615752 == data_flow[0])), (0x54615752 == data_flow[0])/* end of bug 698*/), chunksize);
   if (result == (-1))
    return (-1);

   hasFormat = 
              1
                  ;
  }
  else if (memcmp(&chunkid, "data", 4) == 0)
  {

   if (!hasFormat)
   {
    _af_error(data_flow, AF_BAD_HEADER, "missing format chunk in WAVE file");
    return (-1);
   }

   result = ParseData(data_flow, LAVALOG(10092, filehandle + (data_flow[11] * (0x64726861 == data_flow[11])), (0x64726861 == data_flow[11])/* end of bug 10092*/), filehandle->fh, chunkid, chunksize);
   if (result == (-1))
    return (-1);

   hasData = 
            1
                ;
  }
  else if (memcmp(&chunkid, "inst", 4) == 0)
  {
   result = ParseInstrument(data_flow, filehandle, filehandle->fh, chunkid, chunksize);
   if (result == (-1))
    return (-1);
  }
  else if (memcmp(&chunkid, "fact", 4) == 0)
  {
   hasFrameCount = 
                  1
                      ;
   result = ParseFrameCount(data_flow, filehandle, filehandle->fh, chunkid, chunksize);
   if (result == (-1))
    return (-1);
  }
  else if (memcmp(&chunkid, "cue ", 4) == 0)
  {
   hasCue = 
           1
               ;
   result = ParseCues(data_flow, filehandle, filehandle->fh, chunkid, chunksize);
   if (result == (-1))
    return (-1);
  }
  else if (memcmp(&chunkid, "LIST", 4) == 0 || memcmp(&chunkid, "list", 4) == 0)
  {
   hasList = 
            1
                ;
   result = ParseList(data_flow, filehandle, filehandle->fh, chunkid, chunksize);
   if (result == (-1))
    return (-1);
  }
  else if (memcmp(&chunkid, "INST", 4) == 0)
  {
   hasINST = 
            1
                ;
   result = ParseInstrument(data_flow, filehandle, filehandle->fh, chunkid, chunksize);
   if (result == (-1))
    return (-1);
  }
  else if (memcmp(&chunkid, "plst", 4) == 0)
  {
   hasPlayList = 
                1
                    ;
   result = ParsePlayList(data_flow, filehandle, filehandle->fh, chunkid, chunksize);
   if (result == (-1))
    return (-1);
  }

  index += chunksize + 8;


  if ((index % 2) != 0)
   index++;

  af_fseek(data_flow, LAVALOG(5002, filehandle->fh + (data_flow[9] * (0x666a686f == data_flow[9])), (0x666a686f == data_flow[9])/* end of bug 5002*/), index + 8, 
                                     0
                                             );
 }


 if (!hasFormat || !hasData)
 {
  return (-1);
 }






 if (!hasFrameCount)
 {
  track->totalfframes = track->data_size /
   (int) _af_format_frame_size(data_flow, LAVALOG(13416, &track->f + (data_flow[14] * (0x4d46796a == data_flow[14])), (0x4d46796a == data_flow[14])/* end of bug 13416*/), 
                                         0
                                              );
 }

 if ( (track) && &((*track).data_size)) {
DFLOG(16, *(const unsigned int *)&((*track).data_size));
}
if (track->f.compressionType != AF_COMPRESSION_NONE &&
  (track->f.compressionType == AF_COMPRESSION_G711_ULAW ||
  track->f.compressionType == AF_COMPRESSION_G711_ALAW))
 {
  track->totalfframes = track->data_size / track->f.channelCount;
 }




 return (0);
}

AFfilesetup _af_wave_complete_setup (int *data_flow, AFfilesetup setup)
{
 AFfilesetup newsetup={0};
 _TrackSetup *track={0};

 if (setup->trackSet && setup->trackCount != 1)
 {
  _af_error(data_flow, AF_BAD_NUMTRACKS, "WAVE file must have 1 track");
  return ((struct _AFfilesetup *) 0);
 }

 track = _af_filesetup_get_tracksetup(data_flow, setup, AF_DEFAULT_TRACK);

 if (track->sampleFormatSet)
 {
  switch (track->f.sampleFormat)
  {
   case AF_SAMPFMT_FLOAT:
    if (track->sampleWidthSet &&
     track->f.sampleWidth != 32)
    {
     _af_error(data_flow, AF_BAD_WIDTH,
      "Warning: invalid sample width for floating-point WAVE file: %d (must be 32 bits)\n",
      track->f.sampleWidth);
     _af_set_sample_format(data_flow, &track->f, AF_SAMPFMT_FLOAT, 32);
    }
    break;

   case AF_SAMPFMT_DOUBLE:
    if (track->sampleWidthSet &&
     track->f.sampleWidth != 64)
    {
     _af_error(data_flow, AF_BAD_WIDTH,
      "Warning: invalid sample width for double-precision floating-point WAVE file: %d (must be 64 bits)\n",
      track->f.sampleWidth);
     _af_set_sample_format(data_flow, &track->f, AF_SAMPFMT_DOUBLE, 64);
    }
    break;

   case AF_SAMPFMT_UNSIGNED:
    if (track->sampleWidthSet)
    {
     if (track->f.sampleWidth < 1 || track->f.sampleWidth > 32)
     {
      _af_error(data_flow, AF_BAD_WIDTH, "invalid sample width for WAVE file: %d (must be 1-32 bits)\n", track->f.sampleWidth);
      return ((struct _AFfilesetup *) 0);
     }
     if (track->f.sampleWidth > 8)
     {
      _af_error(data_flow, AF_BAD_SAMPFMT, "WAVE integer data of more than 8 bits must be two's complement signed");
      _af_set_sample_format(data_flow, &track->f, AF_SAMPFMT_TWOSCOMP, track->f.sampleWidth);
     }
    }
    else




     _af_set_sample_format(data_flow, &track->f, track->f.sampleFormat, 8);
    break;

   case AF_SAMPFMT_TWOSCOMP:
    if (track->sampleWidthSet)
    {
     if (track->f.sampleWidth < 1 || track->f.sampleWidth > 32)
     {
      _af_error(data_flow, AF_BAD_WIDTH, "invalid sample width %d for WAVE file (must be 1-32)", track->f.sampleWidth);
      return ((struct _AFfilesetup *) 0);
     }
     else if (track->f.sampleWidth <= 8)
     {
      _af_error(data_flow, AF_BAD_SAMPFMT, "Warning: WAVE format integer data of 1-8 bits must be unsigned; setting sample format to unsigned");
      _af_set_sample_format(data_flow, &track->f, AF_SAMPFMT_UNSIGNED, track->f.sampleWidth);
     }
    }
    else




     _af_set_sample_format(data_flow, &track->f, track->f.sampleFormat, 16);
    break;
  }
 }




 else
 {
  if (!track->sampleWidthSet)
  {
   track->f.sampleWidth = 16;
   track->f.sampleFormat = AF_SAMPFMT_TWOSCOMP;
  }
  else
  {
   if (track->f.sampleWidth < 1 || track->f.sampleWidth > 32)
   {
    _af_error(data_flow, AF_BAD_WIDTH, "invalid sample width %d for WAVE file (must be 1-32)", track->f.sampleWidth);
    return ((struct _AFfilesetup *) 0);
   }
   else if (track->f.sampleWidth > 8)

    track->f.sampleFormat = AF_SAMPFMT_TWOSCOMP;
   else

    track->f.sampleFormat = AF_SAMPFMT_UNSIGNED;
  }
 }

 if (track->f.compressionType != AF_COMPRESSION_NONE &&
  track->f.compressionType != AF_COMPRESSION_G711_ULAW &&
  track->f.compressionType != AF_COMPRESSION_G711_ALAW)
 {
  _af_error(data_flow, AF_BAD_NOT_IMPLEMENTED, "compression format not supported in WAVE format");
  return ((struct _AFfilesetup *) 0);
 }

 if (track->byteOrderSet &&
  track->f.byteOrder != AF_BYTEORDER_LITTLEENDIAN &&
  track->f.compressionType == AF_COMPRESSION_NONE)
 {
  _af_error(data_flow, AF_BAD_BYTEORDER, "WAVE format only supports little-endian data");
  return ((struct _AFfilesetup *) 0);
 }

 if (track->f.compressionType == AF_COMPRESSION_NONE)
  track->f.byteOrder = AF_BYTEORDER_LITTLEENDIAN;
 else
  track->f.byteOrder = AF_BYTEORDER_BIGENDIAN;

 if (track->aesDataSet)
 {
  _af_error(data_flow, AF_BAD_FILESETUP, "WAVE files cannot have AES data");
  return ((struct _AFfilesetup *) 0);
 }

 if (setup->instrumentSet)
 {
  if (setup->instrumentCount > 1)
  {
   _af_error(data_flow, AF_BAD_NUMINSTS, "WAVE files can have 0 or 1 instrument");
   return ((struct _AFfilesetup *) 0);
  }
  else if (setup->instrumentCount == 1)
  {
   if (setup->instruments[0].loopSet &&
    setup->instruments[0].loopCount > 0 &&
    (!track->markersSet || track->markerCount == 0))
   {
    _af_error(data_flow, AF_BAD_NUMMARKS, "WAVE files with loops must contain at least 1 marker");
    return ((struct _AFfilesetup *) 0);
   }
  }
 }


 if (setup->miscellaneousSet)
 {
  int i={0};
  for (i=0; i<setup->miscellaneousCount; i++)
  {
   switch (setup->miscellaneous[i].type)
   {
    case AF_MISC_COPY:
    case AF_MISC_AUTH:
    case AF_MISC_NAME:
    case AF_MISC_ICRD:
    case AF_MISC_ISFT:
    case AF_MISC_ICMT:
     break;
    default:
     _af_error(data_flow, AF_BAD_MISCTYPE, "illegal miscellaneous type [%d] for WAVE file", setup->miscellaneous[i].type);
     return ((struct _AFfilesetup *) 0);
   }
  }
 }




 newsetup = _af_filesetup_copy(data_flow, setup, &_af_wave_default_filesetup, 
                                                                  0
                                                                       );


 if (setup->instrumentSet && setup->instrumentCount > 0 &&
  setup->instruments[0].loopSet)
 {
  free(newsetup->instruments[0].loops);
  newsetup->instruments[0].loopCount = 0;
 }

 return newsetup;
}


_Bool 
    _af_wave_instparam_valid (int *data_flow, AFfilehandle filehandle, AUpvlist list, int i)
{
 int param, type, lval={0};

 AUpvgetparam(data_flow, list, i, &param);
 AUpvgetvaltype(data_flow, list, i, &type);
 if (type != AU_PVTYPE_LONG)
  return 
        0
             ;

 AUpvgetval(data_flow, list, i, &lval);

 switch (param)
 {
  case AF_INST_MIDI_BASENOTE:
   return ((lval >= 0) && (lval <= 127));

  case AF_INST_NUMCENTS_DETUNE:
   return ((lval >= -50) && (lval <= 50));

  case AF_INST_MIDI_LOVELOCITY:
   return ((lval >= 1) && (lval <= 127));

  case AF_INST_MIDI_HIVELOCITY:
   return ((lval >= 1) && (lval <= 127));

  case AF_INST_MIDI_LONOTE:
   return ((lval >= 0) && (lval <= 127));

  case AF_INST_MIDI_HINOTE:
   return ((lval >= 0) && (lval <= 127));

  case AF_INST_NUMDBS_GAIN:
   return 
         1
             ;

  default:
   return 
         0
              ;
 }

 return 
       1
           ;
}

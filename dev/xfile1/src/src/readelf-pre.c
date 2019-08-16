#define __attribute__(x)
#define __extension__(x)












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
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));




typedef __gnuc_va_list va_list;
typedef __off_t off_t;
typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;







extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));








extern FILE *tmpfile (void) ;
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

extern int fflush_unlocked (FILE *__stream);






extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;

extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));








extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;








extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));









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



extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;








extern void perror (const char *__s);






extern int sys_nerr;
extern const char *const sys_errlist[];




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));








extern int *__errno_location (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));








struct flock
  {
    short int l_type;
    short int l_whence;

    __off_t l_start;
    __off_t l_len;




    __pid_t l_pid;
  };


typedef __mode_t mode_t;
typedef __pid_t pid_t;






struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
struct stat
  {
    __dev_t st_dev;

    unsigned short int __pad1;


    __ino_t st_ino;




    __mode_t st_mode;
    __nlink_t st_nlink;




    __uid_t st_uid;
    __gid_t st_gid;



    __dev_t st_rdev;

    unsigned short int __pad2;


    __off_t st_size;



    __blksize_t st_blksize;

    __blkcnt_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    unsigned long int __glibc_reserved4;
    unsigned long int __glibc_reserved5;




  };
extern int fcntl (int __fd, int __cmd, ...);
extern int open (const char *__file, int __oflag, ...) __attribute__ ((__nonnull__ (1)));
extern int openat (int __fd, const char *__file, int __oflag, ...)
     __attribute__ ((__nonnull__ (2)));
extern int creat (const char *__file, mode_t __mode) __attribute__ ((__nonnull__ (1)));
extern int lockf (int __fd, int __cmd, off_t __len);
extern int posix_fadvise (int __fd, off_t __offset, off_t __len,
     int __advise) __attribute__ ((__nothrow__ , __leaf__));
extern int posix_fallocate (int __fd, off_t __offset, off_t __len);





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


typedef long int __gwchar_t;

typedef struct
  {
    __extension__ long long int quot;
    __extension__ long long int rem;
  } imaxdiv_t;





extern intmax_t imaxabs (intmax_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern intmax_t strtoimax (const char *__restrict __nptr,
      char **__restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));


extern uintmax_t strtoumax (const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));


extern intmax_t wcstoimax (const __gwchar_t *__restrict __nptr,
      __gwchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));


extern uintmax_t wcstoumax (const __gwchar_t *__restrict __nptr,
       __gwchar_t ** __restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));








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
typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
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
typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));






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
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






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



typedef long int s_reg_t;
typedef unsigned long int active_reg_t;






typedef unsigned long int reg_syntax_t;
extern reg_syntax_t re_syntax_options;
typedef enum
{

  REG_ENOSYS = -1,


  REG_NOERROR = 0,
  REG_NOMATCH,



  REG_BADPAT,
  REG_ECOLLATE,
  REG_ECTYPE,
  REG_EESCAPE,
  REG_ESUBREG,
  REG_EBRACK,
  REG_EPAREN,
  REG_EBRACE,
  REG_BADBR,
  REG_ERANGE,
  REG_ESPACE,
  REG_BADRPT,


  REG_EEND,
  REG_ESIZE,
  REG_ERPAREN
} reg_errcode_t;
struct re_pattern_buffer
{



  unsigned char *__buffer;


  unsigned long int __allocated;


  unsigned long int __used;


  reg_syntax_t __syntax;




  char *__fastmap;





  unsigned char * __translate;


  size_t re_nsub;





  unsigned __can_be_null : 1;
  unsigned __regs_allocated : 2;



  unsigned __fastmap_accurate : 1;



  unsigned __no_sub : 1;



  unsigned __not_bol : 1;


  unsigned __not_eol : 1;


  unsigned __newline_anchor : 1;
};

typedef struct re_pattern_buffer regex_t;


typedef int regoff_t;
typedef struct
{
  regoff_t rm_so;
  regoff_t rm_eo;
} regmatch_t;
extern int regcomp (regex_t *__restrict __preg,
      const char *__restrict __pattern,
      int __cflags);

extern int regexec (const regex_t *__restrict __preg,
      const char *__restrict __string, size_t __nmatch,
      regmatch_t __pmatch[__restrict],
      int __eflags);

extern size_t regerror (int __errcode, const regex_t *__restrict __preg,
   char *__restrict __errbuf, size_t __errbuf_size);

extern void regfree (regex_t *__preg);













struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;




};








struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };


struct sigevent;



extern clock_t clock (void) __attribute__ ((__nothrow__ , __leaf__));


extern time_t time (time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));


extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format,
   const struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));

typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;

extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     const char *__restrict __format,
     const struct tm *__restrict __tp,
     __locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *gmtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));





extern struct tm *gmtime_r (const time_t *__restrict __timer,
       struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime_r (const time_t *__restrict __timer,
          struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));





extern char *asctime (const struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern char *ctime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));







extern char *asctime_r (int *data_flow, const struct tm *__restrict __tp,
   char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));


extern char *ctime_r (int *data_flow, const time_t *__restrict __timer,
        char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) __attribute__ ((__nothrow__ , __leaf__));



extern int daylight;
extern long int timezone;





extern int stime (const time_t *__when) __attribute__ ((__nothrow__ , __leaf__));
extern time_t timegm (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern time_t timelocal (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern int dysize (int __year) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int nanosleep (const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) __attribute__ ((__nothrow__ , __leaf__));


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     __attribute__ ((__nothrow__ , __leaf__));






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) __attribute__ ((__nothrow__ , __leaf__));




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_delete (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_settime (timer_t __timerid, int __flags,
     const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     __attribute__ ((__nothrow__ , __leaf__));


extern int timer_getoverrun (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));





extern int timespec_get (struct timespec *__ts, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

















extern int __sigismember (const __sigset_t *, int);
extern int __sigaddset (__sigset_t *, int);
extern int __sigdelset (__sigset_t *, int);







typedef __sig_atomic_t sig_atomic_t;








typedef union sigval
  {
    int sival_int;
    void *sival_ptr;
  } sigval_t;
typedef __clock_t __sigchld_clock_t;



typedef struct
  {
    int si_signo;
    int si_errno;

    int si_code;

    union
      {
 int _pad[((128 / sizeof (int)) - 3)];


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
   } _kill;


 struct
   {
     int si_tid;
     int si_overrun;
     sigval_t si_sigval;
   } _timer;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     sigval_t si_sigval;
   } _rt;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     int si_status;
     __sigchld_clock_t si_utime;
     __sigchld_clock_t si_stime;
   } _sigchld;


 struct
   {
     void *si_addr;
     short int si_addr_lsb;
     struct
       {
  void *_lower;
  void *_upper;
       } si_addr_bnd;
   } _sigfault;


 struct
   {
     long int si_band;
     int si_fd;
   } _sigpoll;


 struct
   {
     void *_call_addr;
     int _syscall;
     unsigned int _arch;
   } _sigsys;
      } _sifields;
  } siginfo_t ;
enum
{
  SI_ASYNCNL = -60,

  SI_TKILL = -6,

  SI_SIGIO,

  SI_ASYNCIO,

  SI_MESGQ,

  SI_TIMER,

  SI_QUEUE,

  SI_USER,

  SI_KERNEL = 0x80

};




enum
{
  ILL_ILLOPC = 1,

  ILL_ILLOPN,

  ILL_ILLADR,

  ILL_ILLTRP,

  ILL_PRVOPC,

  ILL_PRVREG,

  ILL_COPROC,

  ILL_BADSTK

};


enum
{
  FPE_INTDIV = 1,

  FPE_INTOVF,

  FPE_FLTDIV,

  FPE_FLTOVF,

  FPE_FLTUND,

  FPE_FLTRES,

  FPE_FLTINV,

  FPE_FLTSUB

};


enum
{
  SEGV_MAPERR = 1,

  SEGV_ACCERR

};


enum
{
  BUS_ADRALN = 1,

  BUS_ADRERR,

  BUS_OBJERR,

  BUS_MCEERR_AR,

  BUS_MCEERR_AO

};
enum
{
  CLD_EXITED = 1,

  CLD_KILLED,

  CLD_DUMPED,

  CLD_TRAPPED,

  CLD_STOPPED,

  CLD_CONTINUED

};


enum
{
  POLL_IN = 1,

  POLL_OUT,

  POLL_MSG,

  POLL_ERR,

  POLL_PRI,

  POLL_HUP

};
typedef struct sigevent
  {
    sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;

    union
      {
 int _pad[((64 / sizeof (int)) - 3)];



 __pid_t _tid;

 struct
   {
     void (*_function) (int *data_flow, sigval_t);
     pthread_attr_t *_attribute;
   } _sigev_thread;
      } _sigev_un;
  } sigevent_t;






enum
{
  SIGEV_SIGNAL = 0,

  SIGEV_NONE,

  SIGEV_THREAD,


  SIGEV_THREAD_ID = 4

};




typedef void (*__sighandler_t) (int *data_flow, int);




extern __sighandler_t __sysv_signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));


extern __sighandler_t signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));

extern int kill (__pid_t __pid, int __sig) __attribute__ ((__nothrow__ , __leaf__));






extern int killpg (__pid_t __pgrp, int __sig) __attribute__ ((__nothrow__ , __leaf__));




extern int raise (int __sig) __attribute__ ((__nothrow__ , __leaf__));




extern __sighandler_t ssignal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));
extern int gsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));




extern void psignal (int __sig, const char *__s);


extern void psiginfo (const siginfo_t *__pinfo, const char *__s);
extern int sigblock (int __mask) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));


extern int sigsetmask (int __mask) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));


extern int siggetmask (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));
typedef __sighandler_t sig_t;





extern int sigemptyset (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigfillset (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigaddset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigdelset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigismember (const sigset_t *__set, int __signo)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
struct sigaction
  {


    union
      {

 __sighandler_t sa_handler;

 void (*sa_sigaction) (int *data_flow, int, siginfo_t *, void *);
      }
    __sigaction_handler;







    __sigset_t sa_mask;


    int sa_flags;


    void (*sa_restorer) (int *data_flowvoid);
  };


extern int sigprocmask (int __how, const sigset_t *__restrict __set,
   sigset_t *__restrict __oset) __attribute__ ((__nothrow__ , __leaf__));






extern int sigsuspend (const sigset_t *__set) __attribute__ ((__nonnull__ (1)));


extern int sigaction (int __sig, const struct sigaction *__restrict __act,
        struct sigaction *__restrict __oact) __attribute__ ((__nothrow__ , __leaf__));


extern int sigpending (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int sigwait (const sigset_t *__restrict __set, int *__restrict __sig)
     __attribute__ ((__nonnull__ (1, 2)));






extern int sigwaitinfo (const sigset_t *__restrict __set,
   siginfo_t *__restrict __info) __attribute__ ((__nonnull__ (1)));






extern int sigtimedwait (const sigset_t *__restrict __set,
    siginfo_t *__restrict __info,
    const struct timespec *__restrict __timeout)
     __attribute__ ((__nonnull__ (1)));



extern int sigqueue (__pid_t __pid, int __sig, const union sigval __val)
     __attribute__ ((__nothrow__ , __leaf__));
extern const char *const _sys_siglist[65];
extern const char *const sys_siglist[65];



struct _fpx_sw_bytes
{
  __uint32_t magic1;
  __uint32_t extended_size;
  __uint64_t xstate_bv;
  __uint32_t xstate_size;
  __uint32_t padding[7];
};

struct _fpreg
{
  unsigned short significand[4];
  unsigned short exponent;
};

struct _fpxreg
{
  unsigned short significand[4];
  unsigned short exponent;
  unsigned short padding[3];
};

struct _xmmreg
{
  __uint32_t element[4];
};





struct _fpstate
{

  __uint32_t cw;
  __uint32_t sw;
  __uint32_t tag;
  __uint32_t ipoff;
  __uint32_t cssel;
  __uint32_t dataoff;
  __uint32_t datasel;
  struct _fpreg _st[8];
  unsigned short status;
  unsigned short magic;


  __uint32_t _fxsr_env[6];
  __uint32_t mxcsr;
  __uint32_t reserved;
  struct _fpxreg _fxsr_st[8];
  struct _xmmreg _xmm[8];
  __uint32_t padding[56];
};
struct sigcontext
{
  unsigned short gs, __gsh;
  unsigned short fs, __fsh;
  unsigned short es, __esh;
  unsigned short ds, __dsh;
  unsigned long edi;
  unsigned long esi;
  unsigned long ebp;
  unsigned long esp;
  unsigned long ebx;
  unsigned long edx;
  unsigned long ecx;
  unsigned long eax;
  unsigned long trapno;
  unsigned long err;
  unsigned long eip;
  unsigned short cs, __csh;
  unsigned long eflags;
  unsigned long esp_at_signal;
  unsigned short ss, __ssh;
  struct _fpstate * fpstate;
  unsigned long oldmask;
  unsigned long cr2;
};
struct _xsave_hdr
{
  __uint64_t xstate_bv;
  __uint64_t reserved1[2];
  __uint64_t reserved2[5];
};

struct _ymmh_state
{
  __uint32_t ymmh_space[64];
};

struct _xstate
{
  struct _fpstate fpstate;
  struct _xsave_hdr xstate_hdr;
  struct _ymmh_state ymmh;
};


extern int sigreturn (struct sigcontext *__scp) __attribute__ ((__nothrow__ , __leaf__));










extern int siginterrupt (int __sig, int __interrupt) __attribute__ ((__nothrow__ , __leaf__));

struct sigstack
  {
    void *ss_sp;
    int ss_onstack;
  };



enum
{
  SS_ONSTACK = 1,

  SS_DISABLE

};
typedef struct sigaltstack
  {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
  } stack_t;


typedef int greg_t;





typedef greg_t gregset_t[19];
struct _libc_fpreg
{
  unsigned short int significand[4];
  unsigned short int exponent;
};

struct _libc_fpstate
{
  unsigned long int cw;
  unsigned long int sw;
  unsigned long int tag;
  unsigned long int ipoff;
  unsigned long int cssel;
  unsigned long int dataoff;
  unsigned long int datasel;
  struct _libc_fpreg _st[8];
  unsigned long int status;
};


typedef struct _libc_fpstate *fpregset_t;


typedef struct
  {
    gregset_t gregs;


    fpregset_t fpregs;
    unsigned long int oldmask;
    unsigned long int cr2;
  } mcontext_t;


typedef struct ucontext
  {
    unsigned long int uc_flags;
    struct ucontext *uc_link;
    stack_t uc_stack;
    mcontext_t uc_mcontext;
    __sigset_t uc_sigmask;
    struct _libc_fpstate __fpregs_mem;
  } ucontext_t;





extern int sigstack (struct sigstack *__ss, struct sigstack *__oss)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));



extern int sigaltstack (const struct sigaltstack *__restrict __ss,
   struct sigaltstack *__restrict __oss) __attribute__ ((__nothrow__ , __leaf__));
extern int pthread_sigmask (int __how,
       const __sigset_t *__restrict __newmask,
       __sigset_t *__restrict __oldmask)__attribute__ ((__nothrow__ , __leaf__));


extern int pthread_kill (pthread_t __threadid, int __signo) __attribute__ ((__nothrow__ , __leaf__));






extern int __libc_current_sigrtmin (void) __attribute__ ((__nothrow__ , __leaf__));

extern int __libc_current_sigrtmax (void) __attribute__ ((__nothrow__ , __leaf__));













extern int stat (const char *__restrict __file,
   struct stat *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int fstat (int __fd, struct stat *__buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int fstatat (int __fd, const char *__restrict __file,
      struct stat *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int lstat (const char *__restrict __file,
    struct stat *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int chmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int lchmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int fchmod (int __fd, __mode_t __mode) __attribute__ ((__nothrow__ , __leaf__));





extern int fchmodat (int __fd, const char *__file, __mode_t __mode,
       int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;






extern __mode_t umask (__mode_t __mask) __attribute__ ((__nothrow__ , __leaf__));
extern int mkdir (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mkdirat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






extern int mknod (const char *__path, __mode_t __mode, __dev_t __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mknodat (int __fd, const char *__path, __mode_t __mode,
      __dev_t __dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));





extern int mkfifo (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mkfifoat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));





extern int utimensat (int __fd, const char *__path,
        const struct timespec __times[2],
        int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern int futimens (int __fd, const struct timespec __times[2]) __attribute__ ((__nothrow__ , __leaf__));
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int __xstat (int __ver, const char *__filename,
      struct stat *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat (int __ver, const char *__filename,
       struct stat *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat (int __ver, int __fildes, const char *__filename,
         struct stat *__stat_buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4)));
extern int __xmknod (int __ver, const char *__path, __mode_t __mode,
       __dev_t *__dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int __xmknodat (int __ver, int __fd, const char *__path,
         __mode_t __mode, __dev_t *__dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 5)));


union VALUETYPE {
 uint8_t b;
 uint16_t h;
 uint32_t l;
 uint64_t q;
 uint8_t hs[2];
 uint8_t hl[4];
 uint8_t hq[8];
 char s[64];
 unsigned char us[64];
 float f;
 double d;
};

struct magic {

 uint16_t cont_level;
 uint8_t flag;
 uint8_t factor;


 uint8_t reln;
 uint8_t vallen;
 uint8_t type;
 uint8_t in_type;
 uint8_t in_op;
 uint8_t mask_op;

 uint8_t cond;



 uint8_t factor_op;
 uint32_t offset;

 int32_t in_offset;

 uint32_t lineno;

 union {
  uint64_t _mask;
  struct {
   uint32_t _count;
   uint32_t _flags;
  } _s;
 } _u;




 union VALUETYPE value;

 char desc[64];

 char mimetype[80];

 char apple[8];
};
struct mlist {
 struct magic *magic;
 uint32_t nmagic;
 void *map;
 struct mlist *next, *prev;
};
struct level_info {
 int32_t off;
 int got_match;

 int last_match;
 int last_cond;

};



struct magic_set {
 struct mlist *mlist[2];
 struct cont {
  size_t len;
  struct level_info *li;
 } c;
 struct out {
  char *buf;
  char *pbuf;
 } o;
 uint32_t offset;
 int error;
 int flags;
 int event_flags;

 const char *file;
 size_t line;


 struct {
  const char *s;
  size_t s_len;
  size_t offset;
  size_t rm_len;
 } search;



 union VALUETYPE ms_value;
 uint16_t indir_max;
 uint16_t name_max;
 uint16_t elf_shnum_max;
 uint16_t elf_phnum_max;
 uint16_t elf_notes_max;





};


typedef unsigned long unichar;

struct stat;


__attribute__ ((__visibility__("hidden"))) const char *file_fmttime(int *data_flow, uint64_t, int, char *);
__attribute__ ((__visibility__("hidden"))) struct magic_set *file_ms_alloc(int *data_flow, int);
__attribute__ ((__visibility__("hidden"))) void file_ms_free(int *data_flow, struct magic_set *);
__attribute__ ((__visibility__("hidden"))) int file_buffer(int *data_flow, struct magic_set *, int, const char *, const void *,
    size_t);
__attribute__ ((__visibility__("hidden"))) int file_fsmagic(int *data_flow, struct magic_set *, const char *, struct stat *);
__attribute__ ((__visibility__("hidden"))) int file_pipe2file(int *data_flow, struct magic_set *, int, const void *, size_t);
__attribute__ ((__visibility__("hidden"))) int file_vprintf(int *data_flow, struct magic_set *, const char *, va_list)
    __attribute__((__format__(__printf__, 2, 0)));
__attribute__ ((__visibility__("hidden"))) size_t file_printedlen(int *data_flow, const struct magic_set *);
__attribute__ ((__visibility__("hidden"))) int file_replace(int *data_flow, struct magic_set *, const char *, const char *);
__attribute__ ((__visibility__("hidden"))) int file_printf(int *data_flow, struct magic_set *, const char *, ...)
    __attribute__((__format__(__printf__, 2, 3)));
__attribute__ ((__visibility__("hidden"))) int file_reset(int *data_flow, struct magic_set *);
__attribute__ ((__visibility__("hidden"))) int file_tryelf(int *data_flow, struct magic_set *, int, const unsigned char *,
    size_t);
__attribute__ ((__visibility__("hidden"))) int file_trycdf(int *data_flow, struct magic_set *, int, const unsigned char *,
    size_t);

__attribute__ ((__visibility__("hidden"))) int file_zmagic(int *data_flow, struct magic_set *, int, const char *,
    const unsigned char *, size_t);

__attribute__ ((__visibility__("hidden"))) int file_ascmagic(int *data_flow, struct magic_set *, const unsigned char *, size_t,
    int);
__attribute__ ((__visibility__("hidden"))) int file_ascmagic_with_encoding(int *data_flow, struct magic_set *,
    const unsigned char *, size_t, unichar *, size_t, const char *,
    const char *, int);
__attribute__ ((__visibility__("hidden"))) int file_encoding(int *data_flow, struct magic_set *, const unsigned char *, size_t,
    unichar **, size_t *, const char **, const char **, const char **);
__attribute__ ((__visibility__("hidden"))) int file_is_tar(int *data_flow, struct magic_set *, const unsigned char *, size_t);
__attribute__ ((__visibility__("hidden"))) int file_softmagic(int *data_flow, struct magic_set *, const unsigned char *, size_t,
    uint16_t, uint16_t *, int, int);
__attribute__ ((__visibility__("hidden"))) int file_apprentice(int *data_flow, struct magic_set *, const char *, int);
__attribute__ ((__visibility__("hidden"))) int buffer_apprentice(int *data_flow, struct magic_set *, struct magic **,
    size_t *, size_t);
__attribute__ ((__visibility__("hidden"))) int file_magicfind(int *data_flow, struct magic_set *, const char *, struct mlist *);
__attribute__ ((__visibility__("hidden"))) uint64_t file_signextend(int *data_flow, struct magic_set *, struct magic *,
    uint64_t);
__attribute__ ((__visibility__("hidden"))) void file_badread(int *data_flow, struct magic_set *);
__attribute__ ((__visibility__("hidden"))) void file_badseek(int *data_flow, struct magic_set *);
__attribute__ ((__visibility__("hidden"))) void file_oomem(int *data_flow, struct magic_set *, size_t);
__attribute__ ((__visibility__("hidden"))) void file_error(int *data_flow, struct magic_set *, int, const char *, ...)
    __attribute__((__format__(__printf__, 3, 4)));
__attribute__ ((__visibility__("hidden"))) void file_magerror(int *data_flow, struct magic_set *, const char *, ...)
    __attribute__((__format__(__printf__, 2, 3)));
__attribute__ ((__visibility__("hidden"))) void file_magwarn(int *data_flow, struct magic_set *, const char *, ...)
    __attribute__((__format__(__printf__, 2, 3)));
__attribute__ ((__visibility__("hidden"))) void file_mdump(int *data_flow, struct magic *);
__attribute__ ((__visibility__("hidden"))) void file_showstr(int *data_flow, FILE *, const char *, size_t);
__attribute__ ((__visibility__("hidden"))) size_t file_mbswidth(int *data_flow, const char *);
__attribute__ ((__visibility__("hidden"))) const char *file_getbuffer(int *data_flow, struct magic_set *);
__attribute__ ((__visibility__("hidden"))) ssize_t sread(int *data_flow, int, void *, size_t, int);
__attribute__ ((__visibility__("hidden"))) int file_check_mem(int *data_flow, struct magic_set *, unsigned int);
__attribute__ ((__visibility__("hidden"))) int file_looks_utf8(int *data_flow, const unsigned char *, size_t, unichar *,
    size_t *);
__attribute__ ((__visibility__("hidden"))) size_t file_pstring_length_size(int *data_flow, const struct magic *);
__attribute__ ((__visibility__("hidden"))) size_t file_pstring_get_length(int *data_flow, const struct magic *, const char *);
__attribute__ ((__visibility__("hidden"))) char * file_printable(int *data_flow, char *, size_t, const char *);












struct lconv
{


  char *decimal_point;
  char *thousands_sep;





  char *grouping;





  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;

  char p_cs_precedes;

  char p_sep_by_space;

  char n_cs_precedes;

  char n_sep_by_space;






  char p_sign_posn;
  char n_sign_posn;


  char int_p_cs_precedes;

  char int_p_sep_by_space;

  char int_n_cs_precedes;

  char int_n_sep_by_space;






  char int_p_sign_posn;
  char int_n_sign_posn;
};



extern char *setlocale (int __category, const char *__locale) __attribute__ ((__nothrow__ , __leaf__));


extern struct lconv *localeconv (void) __attribute__ ((__nothrow__ , __leaf__));


extern __locale_t newlocale (int __category_mask, const char *__locale,
        __locale_t __base) __attribute__ ((__nothrow__ , __leaf__));
extern __locale_t duplocale (__locale_t __dataset) __attribute__ ((__nothrow__ , __leaf__));



extern void freelocale (__locale_t __dataset) __attribute__ ((__nothrow__ , __leaf__));






extern __locale_t uselocale (__locale_t __dataset) __attribute__ ((__nothrow__ , __leaf__));














typedef struct {
 const char *pat;


 locale_t old_lc_ctype;
 locale_t c_lc_ctype;

 int rc;
 regex_t rx;
} file_regex_t;

__attribute__ ((__visibility__("hidden"))) int file_regcomp(int *data_flow, file_regex_t *, const char *, int);
__attribute__ ((__visibility__("hidden"))) int file_regexec(int *data_flow, file_regex_t *, const char *, size_t, regmatch_t *,
    int);
__attribute__ ((__visibility__("hidden"))) void file_regfree(int *data_flow, file_regex_t *);
__attribute__ ((__visibility__("hidden"))) void file_regerror(int *data_flow, file_regex_t *, int, struct magic_set *);

typedef struct {
 char *buf;
 uint32_t offset;
} file_pushbuf_t;

__attribute__ ((__visibility__("hidden"))) file_pushbuf_t *file_push_buffer(int *data_flow, struct magic_set *);
__attribute__ ((__visibility__("hidden"))) char *file_pop_buffer(int *data_flow, struct magic_set *, file_pushbuf_t *);


extern const char *file_names[];
extern const size_t file_nnames;
size_t strlcpy(int *data_flow, char *, const char *, size_t);


size_t strlcat(int *data_flow, char *, const char *, size_t);
const char *fmtcheck(int *data_flow, const char *, const char *)
     __attribute__((__format_arg__(2)));


static const char rcsid[] __attribute__((__used__)) = "@(#)$File: readelf.c,v 1.117 2014/12/16 23:29:42 christos Exp $";


















extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));




extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));

extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));


extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));

extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__))

                        __attribute__ ((__nonnull__ (2)));
extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
extern const unsigned short int **__ctype_b_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_tolower_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_toupper_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern int isalnum (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha (int) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit (int) __attribute__ ((__nothrow__ , __leaf__));
extern int islower (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint (int) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit (int) __attribute__ ((__nothrow__ , __leaf__));



extern int tolower (int __c) __attribute__ ((__nothrow__ , __leaf__));


extern int toupper (int __c) __attribute__ ((__nothrow__ , __leaf__));








extern int isblank (int) __attribute__ ((__nothrow__ , __leaf__));


extern int isascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int toascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int _toupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int _tolower (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isalnum_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int islower_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));

extern int isblank_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));



extern int __tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));


extern int __toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));

typedef long int wchar_t;








typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };
typedef union
  {
    union wait *__uptr;
    int *__iptr;
  } __WAIT_STATUS __attribute__ ((__transparent_union__));


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


extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) ;




extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;
extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







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
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));










extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));











extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (2))) ;




extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (int *data_flowvoid)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int at_quick_exit (void (*__func) (int *data_flowvoid)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int on_exit (void (*__func) (int *data_flow, int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void quick_exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));







extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;

extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;





extern int system (const char *__command) ;

extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;






typedef int (*__compar_fn_t) (int *data_flow, const void *, const void *);



extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;

extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));






extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));








extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));








typedef __useconds_t useconds_t;
typedef __socklen_t socklen_t;
extern int access (const char *__name, int __type) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__ , __leaf__));
extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, const void *__buf, size_t __n) ;
extern ssize_t pread (int *data_flow, int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset) ;
extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__ , __leaf__)) ;
extern unsigned int alarm (unsigned int __seconds) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     __attribute__ ((__nothrow__ , __leaf__));






extern int usleep (__useconds_t __useconds);
extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;



extern int chdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__ , __leaf__)) ;
extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__ , __leaf__));
extern char **__environ;







extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern int execv (const char *__path, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execle (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execl (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (const char *__file, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (const char *__file, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nice (int __inc) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void _exit (int __status) __attribute__ ((__noreturn__));





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
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) __attribute__ ((__nothrow__ , __leaf__));


extern long int sysconf (int __name) __attribute__ ((__nothrow__ , __leaf__));



extern size_t confstr (int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__ , __leaf__));




extern __pid_t getpid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getppid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getpgrp (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t __getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));

extern __pid_t getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));






extern int setpgid (__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__ , __leaf__));
extern int setpgrp (void) __attribute__ ((__nothrow__ , __leaf__));






extern __pid_t setsid (void) __attribute__ ((__nothrow__ , __leaf__));



extern __pid_t getsid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));



extern __uid_t getuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __uid_t geteuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getgid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getegid (void) __attribute__ ((__nothrow__ , __leaf__));




extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;
extern __pid_t fork (void) __attribute__ ((__nothrow__));







extern __pid_t vfork (void) __attribute__ ((__nothrow__ , __leaf__));





extern char *ttyname (int __fd) __attribute__ ((__nothrow__ , __leaf__));



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;



extern int isatty (int __fd) __attribute__ ((__nothrow__ , __leaf__));





extern int ttyslot (void) __attribute__ ((__nothrow__ , __leaf__));




extern int link (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4))) ;




extern int symlink (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int symlinkat (const char *__from, int __tofd,
        const char *__to) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3))) ;


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3))) ;



extern int unlink (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, const char *__name, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern int rmdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__ , __leaf__));


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__ , __leaf__));






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern char *optarg;
extern int optind;




extern int opterr;



extern int optopt;
extern int getopt (int *data_flow, int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__ , __leaf__));







extern int gethostname (char *__name, size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int sethostname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int sethostid (long int __id) __attribute__ ((__nothrow__ , __leaf__)) ;





extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;





extern int vhangup (void) __attribute__ ((__nothrow__ , __leaf__));


extern int revoke (const char *__file) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int acct (const char *__name) __attribute__ ((__nothrow__ , __leaf__));



extern char *getusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void endusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void setusershell (void) __attribute__ ((__nothrow__ , __leaf__));





extern int daemon (int __nochdir, int __noclose) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int chroot (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern char *getpass (const char *__prompt) __attribute__ ((__nonnull__ (1)));







extern int fsync (int __fd);
extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__ , __leaf__));





extern int getpagesize (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__ , __leaf__));
extern int truncate (const char *__file, __off_t __length)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern int ftruncate (int __fd, __off_t __length) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int brk (void *__addr) __attribute__ ((__nothrow__ , __leaf__)) ;





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__ , __leaf__));
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__ , __leaf__));
extern int fdatasync (int __fildes);




typedef uint32_t Elf32_Addr;
typedef uint32_t Elf32_Off;
typedef uint16_t Elf32_Half;
typedef uint32_t Elf32_Word;
typedef uint8_t Elf32_Char;

typedef uint64_t Elf64_Addr;
typedef uint64_t Elf64_Off;
typedef uint64_t Elf64_Xword;
typedef uint16_t Elf64_Half;
typedef uint32_t Elf64_Word;
typedef uint8_t Elf64_Char;



typedef struct {
    Elf32_Char e_ident[16];
    Elf32_Half e_type;
    Elf32_Half e_machine;
    Elf32_Word e_version;
    Elf32_Addr e_entry;
    Elf32_Off e_phoff;
    Elf32_Off e_shoff;
    Elf32_Word e_flags;
    Elf32_Half e_ehsize;
    Elf32_Half e_phentsize;
    Elf32_Half e_phnum;
    Elf32_Half e_shentsize;
    Elf32_Half e_shnum;
    Elf32_Half e_shstrndx;
} Elf32_Ehdr;

typedef struct {
    Elf64_Char e_ident[16];
    Elf64_Half e_type;
    Elf64_Half e_machine;
    Elf64_Word e_version;
    Elf64_Addr e_entry;
    Elf64_Off e_phoff;
    Elf64_Off e_shoff;
    Elf64_Word e_flags;
    Elf64_Half e_ehsize;
    Elf64_Half e_phentsize;
    Elf64_Half e_phnum;
    Elf64_Half e_shentsize;
    Elf64_Half e_shnum;
    Elf64_Half e_shstrndx;
} Elf64_Ehdr;
typedef struct {
    Elf32_Word p_type;
    Elf32_Off p_offset;
    Elf32_Addr p_vaddr;
    Elf32_Addr p_paddr;
    Elf32_Word p_filesz;
    Elf32_Word p_memsz;
    Elf32_Word p_flags;
    Elf32_Word p_align;
} Elf32_Phdr;

typedef struct {
    Elf64_Word p_type;
    Elf64_Word p_flags;
    Elf64_Off p_offset;
    Elf64_Addr p_vaddr;
    Elf64_Addr p_paddr;
    Elf64_Xword p_filesz;
    Elf64_Xword p_memsz;
    Elf64_Xword p_align;
} Elf64_Phdr;
typedef struct {
    Elf32_Word sh_name;
    Elf32_Word sh_type;
    Elf32_Word sh_flags;
    Elf32_Addr sh_addr;
    Elf32_Off sh_offset;
    Elf32_Word sh_size;
    Elf32_Word sh_link;
    Elf32_Word sh_info;
    Elf32_Word sh_addralign;
    Elf32_Word sh_entsize;
} Elf32_Shdr;

typedef struct {
    Elf64_Word sh_name;
    Elf64_Word sh_type;
    Elf64_Off sh_flags;
    Elf64_Addr sh_addr;
    Elf64_Off sh_offset;
    Elf64_Off sh_size;
    Elf64_Word sh_link;
    Elf64_Word sh_info;
    Elf64_Off sh_addralign;
    Elf64_Off sh_entsize;
} Elf64_Shdr;




typedef struct elf_note {
    Elf32_Word n_namesz;
    Elf32_Word n_descsz;
    Elf32_Word n_type;
} Elf32_Nhdr;

typedef struct {
    Elf64_Word n_namesz;
    Elf64_Word n_descsz;
    Elf64_Word n_type;
} Elf64_Nhdr;
typedef struct {
 Elf32_Word c_tag;
 union {
  Elf32_Word c_val;
  Elf32_Addr c_ptr;
 } c_un;
} Elf32_Cap;

typedef struct {
 Elf64_Xword c_tag;
 union {
  Elf64_Xword c_val;
  Elf64_Addr c_ptr;
 } c_un;
} Elf64_Cap;
typedef struct magic_set *magic_t;
magic_t magic_open(int *data_flow, int);
void magic_close(int *data_flow, magic_t);

const char *magic_getpath(int *data_flow, const char *, int);
const char *magic_file(int *data_flow, magic_t, const char *);
const char *magic_descriptor(int *data_flow, magic_t, int);
const char *magic_buffer(int *data_flow, magic_t, const void *, size_t);

const char *magic_error(int *data_flow, magic_t);
int magic_setflags(int *data_flow, magic_t, int);

int magic_version(int *data_flowvoid);
int magic_load(int *data_flow, magic_t, const char *);
int magic_load_buffers(int *data_flow, magic_t, void **, size_t *, size_t);

int magic_compile(int *data_flow, magic_t, const char *);
int magic_check(int *data_flow, magic_t, const char *);
int magic_list(int *data_flow, magic_t, const char *);
int magic_errno(int *data_flow, magic_t);







int magic_setparam(int *data_flow, magic_t, int, const void *);
int magic_getparam(int *data_flow, magic_t, int, void *);


static int dophn_core(int *data_flow, struct magic_set *, int, int, int, off_t, int, size_t,
    off_t, int *, uint16_t *);

static int dophn_exec(int *data_flow, struct magic_set *, int, int, int, off_t, int, size_t,
    off_t, int, int *, uint16_t *);
static int doshn(int *data_flow, struct magic_set *, int, int, int, off_t, int, size_t,
    off_t, int, int, int *, uint16_t *);
static size_t donote(int *data_flow, struct magic_set *, void *, size_t, size_t, int,
    int, size_t, int *, uint16_t *);





static uint16_t getu16(int *data_flow, int, uint16_t);
static uint32_t getu32(int *data_flow, int, uint32_t);
static uint64_t getu64(int *data_flow, int, uint64_t);





static int
toomany(int *data_flow, struct magic_set *ms, const char *name, uint16_t num)
{
 if (file_printf(data_flow, ms, ", too many %s (%u)", name, num
     ) == -1)
  return -1;
 return 0;
}

static uint16_t
getu16(int *data_flow, int swap, uint16_t value)
{
 union {
  uint16_t ui;
  char c[2];
 } retval, tmpval;

 if (swap) {
  tmpval.ui = value;

  retval.c[0] = tmpval.c[1];
  retval.c[1] = tmpval.c[0];

  return retval.ui;
 } else
  return value;
}

static uint32_t
getu32(int *data_flow, int swap, uint32_t value)
{
 union {
  uint32_t ui;
  char c[4];
 } retval, tmpval;

 if (swap) {
  tmpval.ui = value;

  retval.c[0] = tmpval.c[3];
  retval.c[1] = tmpval.c[2];
  retval.c[2] = tmpval.c[1];
  retval.c[3] = tmpval.c[0];

  return retval.ui;
 } else
  return value;
}

static uint64_t
getu64(int *data_flow, int swap, uint64_t value)
{
 union {
  uint64_t ui;
  char c[8];
 } retval, tmpval;

 if (swap) {
  tmpval.ui = value;

  retval.c[0] = tmpval.c[7];
  retval.c[1] = tmpval.c[6];
  retval.c[2] = tmpval.c[5];
  retval.c[3] = tmpval.c[4];
  retval.c[4] = tmpval.c[3];
  retval.c[5] = tmpval.c[2];
  retval.c[6] = tmpval.c[1];
  retval.c[7] = tmpval.c[0];

  return retval.ui;
 } else
  return value;
}
static const size_t prpsoffsets32[] = {





 100,
 84,

 44,
 28,

 8,
};

static const size_t prpsoffsets64[] = {





 136,
 120,

 56,
 40,

 16,
};
static const char os_style_names[][8] = {
 "SVR4",
 "FreeBSD",
 "NetBSD",
};
static int
dophn_core(int *data_flow, struct magic_set *ms, int clazz, int swap, int fd, off_t off,
    int num, size_t size, off_t fsize, int *flags, uint16_t *notecount)
{
 Elf32_Phdr ph32;
 Elf64_Phdr ph64;
 size_t offset, len;
 unsigned char nbuf[
                   8192
                         ];
 ssize_t bufsize;

 if (size != (clazz == 1 ? sizeof(ph32) : sizeof(ph64))) {
  if (file_printf(data_flow, ms, ", corrupted program header size") == -1)
   return -1;
  return 0;
 }




 for ( ; num; num--) {
  if (pread(data_flow, fd, (clazz == 1 ? (void *) &ph32 : (void *) &ph64), (clazz == 1 ? sizeof(ph32) : sizeof(ph64)), off) < (ssize_t)(clazz == 1 ? sizeof(ph32) : sizeof(ph64))) {
   file_badread(data_flow, ms);
   return -1;
  }
  off += size;

  if (fsize != ((off_t)-1) && (off_t)(clazz == 1 ? getu32(data_flow, swap, ph32.p_offset) : getu64(data_flow, swap, ph64.p_offset)) > fsize) {

   continue;
  }

  if ((clazz == 1 ? getu32(data_flow, swap, ph32.p_type) : getu32(data_flow, swap, ph64.p_type)) != 4)
   continue;





  len = (size_t)((clazz == 1 ? getu32(data_flow, swap, ph32.p_filesz) : getu64(data_flow, swap, ph64.p_filesz))) < sizeof(nbuf) ? (size_t)((clazz == 1 ? getu32(data_flow, swap, ph32.p_filesz) : getu64(data_flow, swap, ph64.p_filesz))) : sizeof(nbuf);
  if ((bufsize = pread(data_flow, fd, nbuf, len, (off_t)(clazz == 1 ? getu32(data_flow, swap, ph32.p_offset) : getu64(data_flow, swap, ph64.p_offset)))) == -1) {
   file_badread(data_flow, ms);
   return -1;
  }
  offset = 0;
  for (;;) {
   if (offset >= (size_t)bufsize)
    break;
   offset = donote(data_flow, ms, nbuf, offset, (size_t)bufsize,
       clazz, swap, 4, flags, notecount);
   if (offset == 0)
    break;

  }
 }
 return 0;
}


static void
do_note_netbsd_version(int *data_flow, struct magic_set *ms, int swap, void *v)
{
 uint32_t desc;
 (void)memcpy(&desc, v, sizeof(desc));
 desc = getu32(data_flow, swap, desc);

 if (file_printf(data_flow, ms, ", for NetBSD") == -1)
  return;
 if (desc > 100000000U) {
  uint32_t ver_patch = (desc / 100) % 100;
  uint32_t ver_rel = (desc / 10000) % 100;
  uint32_t ver_min = (desc / 1000000) % 100;
  uint32_t ver_maj = desc / 100000000;

  if (file_printf(data_flow, ms, " %u.%u", ver_maj, ver_min) == -1)
   return;
  if (ver_rel == 0 && ver_patch != 0) {
   if (file_printf(data_flow, ms, ".%u", ver_patch) == -1)
    return;
  } else if (ver_rel != 0) {
   while (ver_rel > 26) {
    if (file_printf(data_flow, ms, "Z") == -1)
     return;
    ver_rel -= 26;
   }
   if (file_printf(data_flow, ms, "%c", 'A' + ver_rel - 1)
       == -1)
    return;
  }
 }
}

static void
do_note_freebsd_version(int *data_flow, struct magic_set *ms, int swap, void *v)
{
 uint32_t desc;

 (void)memcpy(&desc, v, sizeof(desc));
 desc = getu32(data_flow, swap, desc);
 if (file_printf(data_flow, ms, ", for FreeBSD") == -1)
  return;
 if (desc == 460002) {
  if (file_printf(data_flow, ms, " 4.6.2") == -1)
   return;
 } else if (desc < 460100) {
  if (file_printf(data_flow, ms, " %d.%d", desc / 100000,
      desc / 10000 % 10) == -1)
   return;
  if (desc / 1000 % 10 > 0)
   if (file_printf(data_flow, ms, ".%d", desc / 1000 % 10) == -1)
    return;
  if ((desc % 1000 > 0) || (desc % 100000 == 0))
   if (file_printf(data_flow, ms, " (%d)", desc) == -1)
    return;
 } else if (desc < 500000) {
  if (file_printf(data_flow, ms, " %d.%d", desc / 100000,
      desc / 10000 % 10 + desc / 1000 % 10) == -1)
   return;
  if (desc / 100 % 10 > 0) {
   if (file_printf(data_flow, ms, " (%d)", desc) == -1)
    return;
  } else if (desc / 10 % 10 > 0) {
   if (file_printf(data_flow, ms, ".%d", desc / 10 % 10) == -1)
    return;
  }
 } else {
  if (file_printf(data_flow, ms, " %d.%d", desc / 100000,
      desc / 1000 % 100) == -1)
   return;
  if ((desc / 100 % 10 > 0) ||
      (desc % 100000 / 100 == 0)) {
   if (file_printf(data_flow, ms, " (%d)", desc) == -1)
    return;
  } else if (desc / 10 % 10 > 0) {
   if (file_printf(data_flow, ms, ".%d", desc / 10 % 10) == -1)
    return;
  }
 }
}

static int
do_bid_note(int *data_flow, struct magic_set *ms, unsigned char *nbuf, uint32_t type,
    int swap __attribute__((__unused__)), uint32_t namesz, uint32_t descsz,
    size_t noff, size_t doff, int *flags)
{
 if (namesz == 4 && strcmp((char *)&nbuf[noff], "GNU") == 0 &&
     type == 3 && (descsz == 16 || descsz == 20)) {
  uint8_t desc[20];
  uint32_t i;
  *flags |= 0x004;
  if (file_printf(data_flow, ms, ", BuildID[%s]=", descsz == 16 ? "md5/uuid" :
      "sha1") == -1)
   return 1;
  (void)memcpy(desc, &nbuf[doff], descsz);
  for (i = 0; i < descsz; i++)
      if (file_printf(data_flow, ms, "%02x", desc[i]) == -1)
   return 1;
  return 1;
 }
 return 0;
}

static int
do_os_note(int *data_flow, struct magic_set *ms, unsigned char *nbuf, uint32_t type,
    int swap, uint32_t namesz, uint32_t descsz,
    size_t noff, size_t doff, int *flags)
{
 if (namesz == 5 && strcmp((char *)&nbuf[noff], "SuSE") == 0 &&
     type == 1 && descsz == 2) {
     *flags |= 0x002;
     file_printf(data_flow, ms, ", for SuSE %d.%d", nbuf[doff], nbuf[doff + 1]);
     return 1;
 }

 if (namesz == 4 && strcmp((char *)&nbuf[noff], "GNU") == 0 &&
     type == 1 && descsz == 16) {
  uint32_t desc[4];
  (void)memcpy(desc, &nbuf[doff], sizeof(desc));

  *flags |= 0x002;
  if (file_printf(data_flow, ms, ", for GNU/") == -1)
   return 1;
  switch (getu32(data_flow, swap, desc[0])) {
  case 0:
   if (file_printf(data_flow, ms, "Linux") == -1)
    return 1;
   break;
  case 1:
   if (file_printf(data_flow, ms, "Hurd") == -1)
    return 1;
   break;
  case 2:
   if (file_printf(data_flow, ms, "Solaris") == -1)
    return 1;
   break;
  case 3:
   if (file_printf(data_flow, ms, "kFreeBSD") == -1)
    return 1;
   break;
  case 4:
   if (file_printf(data_flow, ms, "kNetBSD") == -1)
    return 1;
   break;
  default:
   if (file_printf(data_flow, ms, "<unknown>") == -1)
    return 1;
  }
  if (file_printf(data_flow, ms, " %d.%d.%d", getu32(data_flow, swap, desc[1]),
      getu32(data_flow, swap, desc[2]), getu32(data_flow, swap, desc[3])) == -1)
   return 1;
  return 1;
 }

 if (namesz == 7 && strcmp((char *)&nbuf[noff], "NetBSD") == 0) {
      if (type == 1 && descsz == 4) {
   *flags |= 0x002;
   do_note_netbsd_version(data_flow, ms, swap, &nbuf[doff]);
   return 1;
  }
 }

 if (namesz == 8 && strcmp((char *)&nbuf[noff], "FreeBSD") == 0) {
      if (type == 1 && descsz == 4) {
   *flags |= 0x002;
   do_note_freebsd_version(data_flow, ms, swap, &nbuf[doff]);
   return 1;
  }
 }

 if (namesz == 8 && strcmp((char *)&nbuf[noff], "OpenBSD") == 0 &&
     type == 1 && descsz == 4) {
  *flags |= 0x002;
  if (file_printf(data_flow, ms, ", for OpenBSD") == -1)
   return 1;

  return 1;
 }

 if (namesz == 10 && strcmp((char *)&nbuf[noff], "DragonFly") == 0 &&
     type == 1 && descsz == 4) {
  uint32_t desc;
  *flags |= 0x002;
  if (file_printf(data_flow, ms, ", for DragonFly") == -1)
   return 1;
  (void)memcpy(&desc, &nbuf[doff], sizeof(desc));
  desc = getu32(data_flow, swap, desc);
  if (file_printf(data_flow, ms, " %d.%d.%d", desc / 100000,
      desc / 10000 % 10, desc % 10000) == -1)
   return 1;
  return 1;
 }
 return 0;
}

static int
do_pax_note(int *data_flow, struct magic_set *ms, unsigned char *nbuf, uint32_t type,
    int swap, uint32_t namesz, uint32_t descsz,
    size_t noff, size_t doff, int *flags)
{
 if (namesz == 4 && strcmp((char *)&nbuf[noff], "PaX") == 0 &&
     type == 3 && descsz == 4) {
  static const char *pax[] = {
      "+mprotect",
      "-mprotect",
      "+segvguard",
      "-segvguard",
      "+ASLR",
      "-ASLR",
  };
  uint32_t desc;
  size_t i;
  int did = 0;

  *flags |= 0x010;
  (void)memcpy(&desc, &nbuf[doff], sizeof(desc));
  desc = getu32(data_flow, swap, desc);

  if (desc && file_printf(data_flow, ms, ", PaX: ") == -1)
   return 1;

  for (i = 0; i < (sizeof(pax) / sizeof(pax[0])); i++) {
   if (((1 << i) & desc) == 0)
    continue;
   if (file_printf(data_flow, ms, "%s%s", did++ ? "," : "",
       pax[i]) == -1)
    return 1;
  }
  return 1;
 }
 return 0;
}

static int
do_core_note(int *data_flow, struct magic_set *ms, unsigned char *nbuf, uint32_t type,
    int swap, uint32_t namesz, uint32_t descsz,
    size_t noff, size_t doff, int *flags, size_t size, int clazz)
{

 int os_style = -1;
 if ((namesz == 4 && strncmp((char *)&nbuf[noff], "CORE", 4) == 0) ||
     (namesz == 5 && strcmp((char *)&nbuf[noff], "CORE") == 0)) {
  os_style = 0;
 }

 if ((namesz == 8 && strcmp((char *)&nbuf[noff], "FreeBSD") == 0)) {
  os_style = 1;
 }

 if ((namesz >= 11 && strncmp((char *)&nbuf[noff], "NetBSD-CORE", 11)
     == 0)) {
  os_style = 2;
 }

 if (os_style != -1 && (*flags & 0x008) == 0) {
  if (file_printf(data_flow, ms, ", %s-style", os_style_names[os_style])
      == -1)
   return 1;
  *flags |= 0x008;
 }

 switch (os_style) {
 case 2:
  if (type == 1) {
   char sbuf[512];
   uint32_t signo;





   if (file_printf(data_flow, ms, ", from '%.31s'",
       file_printable(data_flow, sbuf, sizeof(sbuf),
       (const char *)&nbuf[doff + 0x7c])) == -1)
    return 1;





   (void)memcpy(&signo, &nbuf[doff + 0x08],
       sizeof(signo));
   if (file_printf(data_flow, ms, " (signal %u)",
       getu32(data_flow, swap, signo)) == -1)
    return 1;
   *flags |= 0x001;
   return 1;
  }
  break;

 default:
  if (type == 3 && *flags & 0x100) {
   size_t i, j;
   unsigned char c;
   for (i = 0; i < (clazz == 1 ? (sizeof prpsoffsets32 / sizeof prpsoffsets32[0]) : (sizeof prpsoffsets64 / sizeof prpsoffsets64[0])); i++) {
    unsigned char *cname, *cp;
    size_t reloffset = (clazz == 1 ? prpsoffsets32[i] : prpsoffsets64[i]);
    size_t noffset = doff + reloffset;
    size_t k;
    for (j = 0; j < 16; j++, noffset++,
        reloffset++) {





     if (noffset >= size)
      goto tryanother;







     if (reloffset >= descsz)
      goto tryanother;

     c = nbuf[noffset];
     if (c == '\0') {







      if (j == 0)
       goto tryanother;
      else
       break;
     } else {





      if (!
          ((*__ctype_b_loc ())[(int) ((
          c
          ))] & (unsigned short int) _ISprint) 
                     || (strchr("'\"`", (c)) != 
                        ((void *)0)
                        ))
       goto tryanother;
     }
    }
    for (k = i + 1 ; k < (clazz == 1 ? (sizeof prpsoffsets32 / sizeof prpsoffsets32[0]) : (sizeof prpsoffsets64 / sizeof prpsoffsets64[0])); k++) {
     size_t no;
     int adjust = 1;
     if ((clazz == 1 ? prpsoffsets32[k] : prpsoffsets64[k]) >= (clazz == 1 ? prpsoffsets32[i] : prpsoffsets64[i]))
      continue;
     for (no = doff + (clazz == 1 ? prpsoffsets32[k] : prpsoffsets64[k]);
          no < doff + (clazz == 1 ? prpsoffsets32[i] : prpsoffsets64[i]); no++)
      adjust = adjust
               && 
                 ((*__ctype_b_loc ())[(int) ((
                 nbuf[no]
                 ))] & (unsigned short int) _ISprint)
                                  ;
     if (adjust)
      i = k;
    }

    cname = (unsigned char *)
        &nbuf[doff + (clazz == 1 ? prpsoffsets32[i] : prpsoffsets64[i])];
    for (cp = cname; *cp && 
                           ((*__ctype_b_loc ())[(int) ((
                           *cp
                           ))] & (unsigned short int) _ISprint)
                                       ; cp++)
     continue;




    while (cp > cname && 
                        ((*__ctype_b_loc ())[(int) ((
                        cp[-1]
                        ))] & (unsigned short int) _ISspace)
                                       )
     cp--;
    if (file_printf(data_flow, ms, ", from '%.*s'",
        (int)(cp - cname), cname) == -1)
     return 1;
    *flags |= 0x001;
    return 1;

   tryanother:
    ;
   }
  }
  break;
 }

 return 0;
}

static size_t
donote(int *data_flow, struct magic_set *ms, void *vbuf, size_t offset, size_t size,
    int clazz, int swap, size_t align, int *flags, uint16_t *notecount)
{
 Elf32_Nhdr nh32;
 Elf64_Nhdr nh64;
 size_t noff, doff;
 uint32_t namesz, descsz;
 unsigned char *nbuf = (unsigned char *)(vbuf);

 if (*notecount == 0)
  return 0;
 --*notecount;

 if ((clazz == 1 ? sizeof nh32 : sizeof nh64) + offset > size) {



  return (clazz == 1 ? sizeof nh32 : sizeof nh64) + offset;
 }

 (void)memcpy((clazz == 1 ? (void *)&nh32 : (void *)&nh64), &nbuf[offset], (clazz == 1 ? sizeof nh32 : sizeof nh64));
 offset += (clazz == 1 ? sizeof nh32 : sizeof nh64);

 namesz = (clazz == 1 ? getu32(data_flow, swap, nh32.n_namesz) : getu32(data_flow, swap, nh64.n_namesz));
 descsz = (clazz == 1 ? getu32(data_flow, swap, nh32.n_descsz) : getu32(data_flow, swap, nh64.n_descsz));
 if ((namesz == 0) && (descsz == 0)) {



  return (offset >= size) ? offset : size;
 }

 if (namesz & 0x80000000) {
     (void)file_printf(data_flow, ms, ", bad note name size 0x%lx",
  (unsigned long)namesz);
     return 0;
 }

 if (descsz & 0x80000000) {
     (void)file_printf(data_flow, ms, ", bad note description size 0x%lx",
  (unsigned long)descsz);
     return 0;
 }

 noff = offset;
 doff = ((((offset + namesz) + align - 1) / align) * align);

 if (offset + namesz > size) {



  return doff;
 }

 offset = ((((doff + descsz) + align - 1) / align) * align);
 if (doff + descsz > size) {



  return (offset >= size) ? offset : size;
 }

 if ((*flags & 0x002) == 0) {
  if (do_os_note(data_flow, ms, nbuf, (clazz == 1 ? getu32(data_flow, swap, nh32.n_type) : getu32(data_flow, swap, nh64.n_type)), swap,
      namesz, descsz, noff, doff, flags))
   return size;
 }

 if ((*flags & 0x004) == 0) {
  if (do_bid_note(data_flow, ms, nbuf, (clazz == 1 ? getu32(data_flow, swap, nh32.n_type) : getu32(data_flow, swap, nh64.n_type)), swap,
      namesz, descsz, noff, doff, flags))
   return size;
 }

 if ((*flags & 0x010) == 0) {
  if (do_pax_note(data_flow, ms, nbuf, (clazz == 1 ? getu32(data_flow, swap, nh32.n_type) : getu32(data_flow, swap, nh64.n_type)), swap,
      namesz, descsz, noff, doff, flags))
   return size;
 }

 if ((*flags & 0x001) == 0) {
  if (do_core_note(data_flow, ms, nbuf, (clazz == 1 ? getu32(data_flow, swap, nh32.n_type) : getu32(data_flow, swap, nh64.n_type)), swap,
      namesz, descsz, noff, doff, flags, size, clazz))
   return size;
 }

 if (namesz == 7 && strcmp((char *)&nbuf[noff], "NetBSD") == 0) {
  if (descsz > 100)
   descsz = 100;
  switch ((clazz == 1 ? getu32(data_flow, swap, nh32.n_type) : getu32(data_flow, swap, nh64.n_type))) {
      case 1:
   return size;
  case 5:
   if (*flags & 0x020)
    return size;
   *flags |= 0x020;
   if (file_printf(data_flow, ms, ", compiled for: %.*s",
       (int)descsz, (const char *)&nbuf[doff]) == -1)
    return size;
   break;
  case 6:
   if (*flags & 0x040)
    return size;
   *flags |= 0x040;
   if (file_printf(data_flow, ms, ", compiler model: %.*s",
       (int)descsz, (const char *)&nbuf[doff]) == -1)
    return size;
   break;
  default:
   if (*flags & 0x080)
    return size;
   *flags |= 0x080;
   if (file_printf(data_flow, ms, ", note=%u", (clazz == 1 ? getu32(data_flow, swap, nh32.n_type) : getu32(data_flow, swap, nh64.n_type))) == -1)
    return size;
   break;
  }
  return size;
 }

 return offset;
}


typedef struct cap_desc {
 uint64_t cd_mask;
 const char *cd_name;
} cap_desc_t;

static const cap_desc_t cap_desc_sparc[] = {
 { 0x0001, "MUL32" },
 { 0x0002, "DIV32" },
 { 0x0004, "FSMULD" },
 { 0x0008, "V8PLUS" },
 { 0x0010, "POPC" },
 { 0x0020, "VIS" },
 { 0x0040, "VIS2" },
 { 0x0080, "ASI_BLK_INIT" },
 { 0x0100, "FMAF" },
 { 0x4000, "FJFMAU" },
 { 0x8000, "IMA" },
 { 0, 
     ((void *)0) 
          }
};

static const cap_desc_t cap_desc_386[] = {
 { 0x00000001, "FPU" },
 { 0x00000002, "TSC" },
 { 0x00000004, "CX8" },
 { 0x00000008, "SEP" },
 { 0x00000010, "AMD_SYSC" },
 { 0x00000020, "CMOV" },
 { 0x00000040, "MMX" },
 { 0x00000080, "AMD_MMX" },
 { 0x00000100, "AMD_3DNow" },
 { 0x00000200, "AMD_3DNowx" },
 { 0x00000400, "FXSR" },
 { 0x00000800, "SSE" },
 { 0x00001000, "SSE2" },
 { 0x00002000, "PAUSE" },
 { 0x00004000, "SSE3" },
 { 0x00008000, "MON" },
 { 0x00010000, "CX16" },
 { 0x00020000, "AHF" },
 { 0x00040000, "TSCP" },
 { 0x00080000, "AMD_SSE4A" },
 { 0x00100000, "POPCNT" },
 { 0x00200000, "AMD_LZCNT" },
 { 0x00400000, "SSSE3" },
 { 0x00800000, "SSE4.1" },
 { 0x01000000, "SSE4.2" },
 { 0, 
     ((void *)0) 
          }
};

static int
doshn(int *data_flow, struct magic_set *ms, int clazz, int swap, int fd, off_t off, int num,
    size_t size, off_t fsize, int mach, int strtab, int *flags,
    uint16_t *notecount)
{
 Elf32_Shdr sh32;
 Elf64_Shdr sh64;
 int stripped = 1;
 size_t nbadcap = 0;
 void *nbuf;
 off_t noff, coff, name_off;
 uint64_t cap_hw1 = 0;
 uint64_t cap_sf1 = 0;
 char name[50];
 ssize_t namesize;

 if (size != (clazz == 1 ? sizeof(sh32) : sizeof(sh64))) {
  if (file_printf(data_flow, ms, ", corrupted section header size") == -1)
   return -1;
  return 0;
 }


 if (pread(data_flow, fd, (clazz == 1 ? (void *)&sh32 : (void *)&sh64), (clazz == 1 ? sizeof(sh32) : sizeof(sh64)), off + size * strtab) < (ssize_t)(clazz == 1 ? sizeof(sh32) : sizeof(sh64))) {
  file_badread(data_flow, ms);
  return -1;
 }
 name_off = (off_t)(clazz == 1 ? getu32(data_flow, swap, sh32.sh_offset) : getu64(data_flow, swap, sh64.sh_offset));

 for ( ; num; num--) {

  if ((namesize = pread(data_flow, fd, name, sizeof(name) - 1, name_off + (clazz == 1 ? getu32(data_flow, swap, sh32.sh_name) : getu32(data_flow, swap, sh64.sh_name)))) == -1) {
   file_badread(data_flow, ms);
   return -1;
  }
  name[namesize] = '\0';
  if (strcmp(name, ".debug_info") == 0)
   stripped = 0;

  if (pread(data_flow, fd, (clazz == 1 ? (void *)&sh32 : (void *)&sh64), (clazz == 1 ? sizeof(sh32) : sizeof(sh64)), off) < (ssize_t)(clazz == 1 ? sizeof(sh32) : sizeof(sh64))) {
   file_badread(data_flow, ms);
   return -1;
  }
  off += size;


  switch ((clazz == 1 ? getu32(data_flow, swap, sh32.sh_type) : getu32(data_flow, swap, sh64.sh_type))) {
  case 2:



   stripped = 0;
   break;
  default:
   if (fsize != ((off_t)-1) && (off_t)(clazz == 1 ? getu32(data_flow, swap, sh32.sh_offset) : getu64(data_flow, swap, sh64.sh_offset)) > fsize) {

    continue;
   }
   break;
  }


  switch ((clazz == 1 ? getu32(data_flow, swap, sh32.sh_type) : getu32(data_flow, swap, sh64.sh_type))) {
  case 7:
   if ((nbuf = malloc((size_t)(clazz == 1 ? getu32(data_flow, swap, sh32.sh_size) : getu64(data_flow, swap, sh64.sh_size)))) == 
                                   ((void *)0)
                                       ) {
    file_error(data_flow, ms, 
                  (*__errno_location ())
                       , "Cannot allocate memory"
        " for note");
    return -1;
   }
   if (pread(data_flow, fd, nbuf, (size_t)(clazz == 1 ? getu32(data_flow, swap, sh32.sh_size) : getu64(data_flow, swap, sh64.sh_size)), (off_t)(clazz == 1 ? getu32(data_flow, swap, sh32.sh_offset) : getu64(data_flow, swap, sh64.sh_offset))) < (ssize_t)(size_t)(clazz == 1 ? getu32(data_flow, swap, sh32.sh_size) : getu64(data_flow, swap, sh64.sh_size))) {
    file_badread(data_flow, ms);
    free(nbuf);
    return -1;
   }

   noff = 0;
   for (;;) {
    if (noff >= (off_t)(size_t)(clazz == 1 ? getu32(data_flow, swap, sh32.sh_size) : getu64(data_flow, swap, sh64.sh_size)))
     break;
    noff = donote(data_flow, ms, nbuf, (size_t)noff,
        (size_t)(clazz == 1 ? getu32(data_flow, swap, sh32.sh_size) : getu64(data_flow, swap, sh64.sh_size)), clazz, swap, 4, flags, notecount);
    if (noff == 0)
     break;
   }
   free(nbuf);
   break;
  case 0x6ffffff5:
   switch (mach) {
   case 2:
   case 43:
   case 50:
   case 3:
   case 62:
    break;
   default:
    goto skip;
   }

   if (nbadcap > 5)
    break;
   if (lseek(fd, (off_t)(clazz == 1 ? getu32(data_flow, swap, sh32.sh_offset) : getu64(data_flow, swap, sh64.sh_offset)), 
                            0
                                    ) == (off_t)-1) {
    file_badseek(data_flow, ms);
    return -1;
   }
   coff = 0;
   for (;;) {
    Elf32_Cap cap32;
    Elf64_Cap cap64;
    char cbuf[
        
       (((
       sizeof cap32
       )>(
       sizeof cap64
       ))?(
       sizeof cap32
       ):(
       sizeof cap64
       ))
                                      ];
    if ((coff += (clazz == 1 ? sizeof cap32 : sizeof cap64)) > (off_t)(size_t)(clazz == 1 ? getu32(data_flow, swap, sh32.sh_size) : getu64(data_flow, swap, sh64.sh_size)))
     break;
    if (read(fd, cbuf, (size_t)(clazz == 1 ? sizeof cap32 : sizeof cap64)) !=
        (ssize_t)(clazz == 1 ? sizeof cap32 : sizeof cap64)) {
     file_badread(data_flow, ms);
     return -1;
    }
    if (cbuf[0] == 'A') {
     break;
    }
    (void)memcpy((clazz == 1 ? (void *)&cap32 : (void *)&cap64), cbuf, (clazz == 1 ? sizeof cap32 : sizeof cap64));
    switch ((clazz == 1 ? getu32(data_flow, swap, cap32.c_tag) : getu64(data_flow, swap, cap64.c_tag))) {
    case 0:
     break;
    case 1:
     cap_hw1 |= (clazz == 1 ? getu32(data_flow, swap, cap32.c_un.c_val) : getu64(data_flow, swap, cap64.c_un.c_val));
     break;
    case 2:
     cap_sf1 |= (clazz == 1 ? getu32(data_flow, swap, cap32.c_un.c_val) : getu64(data_flow, swap, cap64.c_un.c_val));
     break;
    default:
     if (file_printf(data_flow, ms,
         ", with unknown capability "
         "0x%" "ll" "x = 0x%"
         "ll" "x",
         (unsigned long long)(clazz == 1 ? getu32(data_flow, swap, cap32.c_tag) : getu64(data_flow, swap, cap64.c_tag)),
         (unsigned long long)(clazz == 1 ? getu32(data_flow, swap, cap32.c_un.c_val) : getu64(data_flow, swap, cap64.c_un.c_val))) == -1)
      return -1;
     if (nbadcap++ > 2)
      coff = (size_t)(clazz == 1 ? getu32(data_flow, swap, sh32.sh_size) : getu64(data_flow, swap, sh64.sh_size));
     break;
    }
   }

  skip:
  default:
   break;
  }
 }

 if (file_printf(data_flow, ms, ", %sstripped", stripped ? "" : "not ") == -1)
  return -1;
 if (cap_hw1) {
  const cap_desc_t *cdp;
  switch (mach) {
  case 2:
  case 18:
  case 43:
   cdp = cap_desc_sparc;
   break;
  case 3:
  case 50:
  case 62:
   cdp = cap_desc_386;
   break;
  default:
   cdp = 
        ((void *)0)
            ;
   break;
  }
  if (file_printf(data_flow, ms, ", uses") == -1)
   return -1;
  if (cdp) {
   while (cdp->cd_name) {
    if (cap_hw1 & cdp->cd_mask) {
     if (file_printf(data_flow, ms,
         " %s", cdp->cd_name) == -1)
      return -1;
     cap_hw1 &= ~cdp->cd_mask;
    }
    ++cdp;
   }
   if (cap_hw1)
    if (file_printf(data_flow, ms,
        " unknown hardware capability 0x%"
        "ll" "x",
        (unsigned long long)cap_hw1) == -1)
     return -1;
  } else {
   if (file_printf(data_flow, ms,
       " hardware capability 0x%" "ll" "x",
       (unsigned long long)cap_hw1) == -1)
    return -1;
  }
 }
 if (cap_sf1) {
  if (cap_sf1 & 0x02) {
   if (file_printf(data_flow, ms,
       (cap_sf1 & 0x01)
       ? ", uses frame pointer"
       : ", not known to use frame pointer") == -1)
    return -1;
  }
  cap_sf1 &= ~0x03;
  if (cap_sf1)
   if (file_printf(data_flow, ms,
       ", with unknown software capability 0x%"
       "ll" "x",
       (unsigned long long)cap_sf1) == -1)
    return -1;
 }
 return 0;
}






static int
dophn_exec(int *data_flow, struct magic_set *ms, int clazz, int swap, int fd, off_t off,
    int num, size_t size, off_t fsize, int sh_num, int *flags,
    uint16_t *notecount)
{
 Elf32_Phdr ph32;
 Elf64_Phdr ph64;
 const char *linking_style = "statically";
 const char *interp = "";
 unsigned char nbuf[
                   8192
                         ];
 char ibuf[
          8192
                ];
 ssize_t bufsize;
 size_t offset, align, len;

 if (size != (clazz == 1 ? sizeof(ph32) : sizeof(ph64))) {
  if (file_printf(data_flow, ms, ", corrupted program header size") == -1)
   return -1;
  return 0;
 }

   for ( ; num; num--) {
  if (pread(data_flow, fd, (clazz == 1 ? (void *) &ph32 : (void *) &ph64), (clazz == 1 ? sizeof(ph32) : sizeof(ph64)), off) < (ssize_t)(clazz == 1 ? sizeof(ph32) : sizeof(ph64))) {
   file_badread(data_flow, ms);
   return -1;
  }

  off += size;
  bufsize = 0;
  align = 4;


  switch ((clazz == 1 ? getu32(data_flow, swap, ph32.p_type) : getu32(data_flow, swap, ph64.p_type))) {
  case 2:
   linking_style = "dynamically";
   break;
  case 4:
   if (sh_num)
    continue;
   if (((align = (size_t)((clazz == 1 ? (off_t) (ph32.p_align ? getu32(data_flow, swap, ph32.p_align) : 4) : (off_t) (ph64.p_align ? getu64(data_flow, swap, ph64.p_align) : 4)))) & 0x80000000UL) != 0 ||
       align < 4) {
    if (file_printf(data_flow, ms,
        ", invalid note alignment 0x%lx",
        (unsigned long)align) == -1)
     return -1;
    align = 4;
   }

  case 3:
   len = (size_t)((clazz == 1 ? getu32(data_flow, swap, ph32.p_filesz) : getu64(data_flow, swap, ph64.p_filesz))) < sizeof(nbuf) ? (size_t)((clazz == 1 ? getu32(data_flow, swap, ph32.p_filesz) : getu64(data_flow, swap, ph64.p_filesz)))
       : sizeof(nbuf);
   bufsize = pread(data_flow, fd, nbuf, len, (off_t)(clazz == 1 ? getu32(data_flow, swap, ph32.p_offset) : getu64(data_flow, swap, ph64.p_offset)));
   if (bufsize == -1) {
    file_badread(data_flow, ms);
    return -1;
   }
   break;
  default:
   if (fsize != ((off_t)-1) && (off_t)(clazz == 1 ? getu32(data_flow, swap, ph32.p_offset) : getu64(data_flow, swap, ph64.p_offset)) > fsize) {

    continue;
   }
   break;
  }


  switch ((clazz == 1 ? getu32(data_flow, swap, ph32.p_type) : getu32(data_flow, swap, ph64.p_type))) {
  case 3:
   if (bufsize && nbuf[0]) {
    nbuf[bufsize - 1] = '\0';
    interp = (const char *)nbuf;
   } else
    interp = "*empty*";
   break;
  case 4:




   offset = 0;
   for (;;) {
    if (offset >= (size_t)bufsize)
     break;
    offset = donote(data_flow, ms, nbuf, offset,
        (size_t)bufsize, clazz, swap, align,
        flags, notecount);
    if (offset == 0)
     break;
   }
   break;
  default:
   break;
  }
 }
 if (file_printf(data_flow, ms, ", %s linked", linking_style)
     == -1)
  return -1;
 if (interp[0])
  if (file_printf(data_flow, ms, ", interpreter %s",
      file_printable(data_flow, ibuf, sizeof(ibuf), interp)) == -1)
   return -1;
 return 0;
}


__attribute__ ((__visibility__("hidden"))) int
file_tryelf(int *data_flow, struct magic_set *ms, int fd, const unsigned char *buf,
    size_t nbytes)
{
 union {
  int32_t l;
  char c[sizeof (int32_t)];
 } u;
 int clazz;
 int swap;
 struct stat st;
 off_t fsize;
 int flags = 0;
 Elf32_Ehdr elf32hdr;
 Elf64_Ehdr elf64hdr;
 uint16_t type, phnum, shnum, notecount;

 if (ms->flags & ((0x000010|0x000400)|0x000800))
  return 0;







 if (buf[0] != 0x7f
     || (buf[1] != 'E' && buf[1] != 'O')
     || buf[2] != 'L' || buf[3] != 'F')
  return 0;




 if((lseek(fd, (off_t)0, 
                        0
                                ) == (off_t)-1) && (
                                                    (*__errno_location ()) 
                                                          == 
                                                             29
                                                                   ))
  fd = file_pipe2file(data_flow, ms, fd, buf, nbytes);

 if (fstat(fd, &st) == -1) {
    file_badread(data_flow, ms);
  return -1;
 }
 if (
    ((((
    st.st_mode
    )) & 0170000) == (0100000)) 
                        || st.st_size != 0)
  fsize = st.st_size;
 else
  fsize = ((off_t)-1);

 clazz = buf[4];

 switch (clazz) {
 case 1:




 if (nbytes <= sizeof(elf32hdr))
  return 0;

 u.l = 1;
 (void)memcpy(&elf32hdr, buf, sizeof elf32hdr);
 swap = (u.c[sizeof(int32_t) - 1] + 1) != elf32hdr.e_ident[5];

 type = getu16(data_flow, swap, elf32hdr.e_type);
 notecount = ms->elf_notes_max;
 switch (type) {

 case 4:
  phnum = getu16(data_flow, swap, elf32hdr.e_phnum);
  if (phnum > ms->elf_phnum_max)
   return toomany(data_flow, ms, "program headers", phnum);
  flags |= 0x100;
  if (dophn_core(data_flow, ms, clazz, swap, fd,
      (off_t)getu32(data_flow, swap, elf32hdr.e_phoff), phnum,
      (size_t)getu16(data_flow, swap, elf32hdr.e_phentsize),
      fsize, &flags, &notecount) == -1)
   return -1;
  break;

 case 2:
 case 3:
  phnum = getu16(data_flow, swap, elf32hdr.e_phnum);
  if (phnum > ms->elf_phnum_max)
   return toomany(data_flow, ms, "program", phnum);
  shnum = getu16(data_flow, swap, elf32hdr.e_shnum);
  if (shnum > ms->elf_shnum_max)
   return toomany(data_flow, ms, "section", shnum);
  if (dophn_exec(data_flow, ms, clazz, swap, fd,
      (off_t)getu32(data_flow, swap, elf32hdr.e_phoff), phnum,
      (size_t)getu16(data_flow, swap, elf32hdr.e_phentsize),
      fsize, shnum, &flags, &notecount) == -1)
   return -1;

 case 1:
  shnum = getu16(data_flow, swap, elf32hdr.e_shnum);
  if (shnum > ms->elf_shnum_max)
   return toomany(data_flow, ms, "section headers", shnum);
  if (doshn(data_flow, ms, clazz, swap, fd,
      (off_t)getu32(data_flow, swap, elf32hdr.e_shoff), shnum,
      (size_t)getu16(data_flow, swap, elf32hdr.e_shentsize),
      fsize, getu16(data_flow, swap, elf32hdr.e_machine),
      (int)getu16(data_flow, swap, elf32hdr.e_shstrndx),
      &flags, &notecount) == -1)
   return -1;
  break;

 default:
  break;
 }
 if (notecount == 0)
  return toomany(data_flow, ms, "notes", ms->elf_notes_max);
 return 1;
 case 2:




 if (nbytes <= sizeof(elf64hdr))
  return 0;

 u.l = 1;
 (void)memcpy(&elf64hdr, buf, sizeof elf64hdr);
 swap = (u.c[sizeof(int32_t) - 1] + 1) != elf64hdr.e_ident[5];

 type = getu16(data_flow, swap, elf64hdr.e_type);
 notecount = ms->elf_notes_max;
 switch (type) {

 case 4:
  phnum = getu16(data_flow, swap, elf64hdr.e_phnum);
  if (phnum > ms->elf_phnum_max)
   return toomany(data_flow, ms, "program headers", phnum);
  flags |= 0x100;
  if (dophn_core(data_flow, ms, clazz, swap, fd,
      (off_t)getu64(data_flow, swap, elf64hdr.e_phoff), phnum,
      (size_t)getu16(data_flow, swap, elf64hdr.e_phentsize),
      fsize, &flags, &notecount) == -1)
   return -1;
  break;

 case 2:
 case 3:
  phnum = getu16(data_flow, swap, elf64hdr.e_phnum);
  if (phnum > ms->elf_phnum_max)
   return toomany(data_flow, ms, "program", phnum);
  shnum = getu16(data_flow, swap, elf64hdr.e_shnum);
  if (shnum > ms->elf_shnum_max)
   return toomany(data_flow, ms, "section", shnum);
  if (dophn_exec(data_flow, ms, clazz, swap, fd,
      (off_t)getu64(data_flow, swap, elf64hdr.e_phoff), phnum,
      (size_t)getu16(data_flow, swap, elf64hdr.e_phentsize),
      fsize, shnum, &flags, &notecount) == -1)
   return -1;

 case 1:
  shnum = getu16(data_flow, swap, elf64hdr.e_shnum);
  if (shnum > ms->elf_shnum_max)
   return toomany(data_flow, ms, "section headers", shnum);
  if (doshn(data_flow, ms, clazz, swap, fd,
      (off_t)getu64(data_flow, swap, elf64hdr.e_shoff), shnum,
      (size_t)getu16(data_flow, swap, elf64hdr.e_shentsize),
      fsize, getu16(data_flow, swap, elf64hdr.e_machine),
      (int)getu16(data_flow, swap, elf64hdr.e_shstrndx),
      &flags, &notecount) == -1)
   return -1;
  break;

 default:
  break;
 }
 if (notecount == 0)
  return toomany(data_flow, ms, "notes", ms->elf_notes_max);
 return 1;
 default:
     if (file_printf(data_flow, ms, ", unknown class %d", clazz) == -1)
      return -1;
     break;
 }
 return 0;
}

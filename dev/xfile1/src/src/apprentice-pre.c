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


    void (*sa_restorer) (int *data_flow);
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


static const char rcsid[] __attribute__((__used__)) = "@(#)$File: apprentice.c,v 1.229 2015/01/01 17:07:34 christos Exp $";


typedef struct magic_set *magic_t;
magic_t magic_open(int *data_flow, int);
void magic_close(int *data_flow, magic_t);

const char *magic_getpath(int *data_flow, const char *, int);
const char *magic_file(int *data_flow, magic_t, const char *);
const char *magic_descriptor(int *data_flow, magic_t, int);
const char *magic_buffer(int *data_flow, magic_t, const void *, size_t);

const char *magic_error(int *data_flow, magic_t);
int magic_setflags(int *data_flow, magic_t, int);

int magic_version(int *data_flow);
int magic_load(int *data_flow, magic_t, const char *);
int magic_load_buffers(int *data_flow, magic_t, void **, size_t *, size_t);

int magic_compile(int *data_flow, magic_t, const char *);
int magic_check(int *data_flow, magic_t, const char *);
int magic_list(int *data_flow, magic_t, const char *);
int magic_errno(int *data_flow, magic_t);







int magic_setparam(int *data_flow, magic_t, int, const void *);
int magic_getparam(int *data_flow, magic_t, int, void *);

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



extern int atexit (void (*__func) (int *data_flow)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int at_quick_exit (void (*__func) (int *data_flow)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







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



typedef int ptrdiff_t;
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;















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




extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




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








extern void *mmap (void *__addr, size_t __len, int __prot,
     int __flags, int __fd, __off_t __offset) __attribute__ ((__nothrow__ , __leaf__));
extern int munmap (void *__addr, size_t __len) __attribute__ ((__nothrow__ , __leaf__));




extern int mprotect (void *__addr, size_t __len, int __prot) __attribute__ ((__nothrow__ , __leaf__));







extern int msync (void *__addr, size_t __len, int __flags);




extern int madvise (void *__addr, size_t __len, int __advice) __attribute__ ((__nothrow__ , __leaf__));



extern int posix_madvise (void *__addr, size_t __len, int __advice) __attribute__ ((__nothrow__ , __leaf__));




extern int mlock (const void *__addr, size_t __len) __attribute__ ((__nothrow__ , __leaf__));


extern int munlock (const void *__addr, size_t __len) __attribute__ ((__nothrow__ , __leaf__));




extern int mlockall (int __flags) __attribute__ ((__nothrow__ , __leaf__));



extern int munlockall (void) __attribute__ ((__nothrow__ , __leaf__));







extern int mincore (void *__start, size_t __len, unsigned char *__vec)
     __attribute__ ((__nothrow__ , __leaf__));
extern int shm_open (const char *__name, int __oflag, mode_t __mode);


extern int shm_unlink (const char *__name);




struct dirent
  {

    __ino_t d_ino;
    __off_t d_off;




    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
  };
enum
  {
    DT_UNKNOWN = 0,

    DT_FIFO = 1,

    DT_CHR = 2,

    DT_DIR = 4,

    DT_BLK = 6,

    DT_REG = 8,

    DT_LNK = 10,

    DT_SOCK = 12,

    DT_WHT = 14

  };
typedef struct __dirstream DIR;






extern DIR *opendir (const char *__name) __attribute__ ((__nonnull__ (1)));






extern DIR *fdopendir (int __fd);







extern int closedir (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
extern struct dirent *readdir (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
extern int readdir_r (DIR *__restrict __dirp,
        struct dirent *__restrict __entry,
        struct dirent **__restrict __result)
     __attribute__ ((__nonnull__ (1, 2, 3)));
extern void rewinddir (DIR *__dirp) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern void seekdir (DIR *__dirp, long int __pos) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int telldir (DIR *__dirp) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int dirfd (DIR *__dirp) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int scandir (const char *__restrict __dir,
      struct dirent ***__restrict __namelist,
      int (*__selector) (int *data_flow, const struct dirent *),
      int (*__cmp) (int *data_flow, const struct dirent **,
      const struct dirent **))
     __attribute__ ((__nonnull__ (1, 2)));
extern int alphasort (const struct dirent **__e1,
        const struct dirent **__e2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern __ssize_t getdirentries (int __fd, char *__restrict __buf,
    size_t __nbytes,
    __off_t *__restrict __basep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));



struct magic_entry {
 struct magic *mp;
 uint32_t cont_count;
 uint32_t max_count;
};

struct magic_entry_set {
 struct magic_entry *me;
 uint32_t count;
 uint32_t max;
};

struct magic_map {
 void *p;
 size_t len;
 int type;
 struct magic *magic[2];
 uint32_t nmagic[2];
};

int file_formats[48];
const size_t file_nformats = 48;
const char *file_names[48];
const size_t file_nnames = 48;

static int getvalue(int *data_flow, struct magic_set *ms, struct magic *, const char **, int);
static int hextoint(int *data_flow, int);
static const char *getstr(int *data_flow, struct magic_set *, struct magic *, const char *,
    int);
static int parse(int *data_flow, struct magic_set *, struct magic_entry *, const char *,
    size_t, int);
static void eatsize(int *data_flow, const char **);
static int apprentice_1(int *data_flow, struct magic_set *, const char *, int);
static size_t apprentice_magic_strength(const struct magic *);
static int apprentice_sort(const void *, const void *);
static void apprentice_list(int *data_flow, struct mlist *, int );
static struct magic_map *apprentice_load(int *data_flow, struct magic_set *,
    const char *, int);
static struct mlist *mlist_alloc(int *data_flow);
static void mlist_free(int *data_flow, struct mlist *);
static void byteswap(int *data_flow, struct magic *, uint32_t);
static void bs1(int *data_flow, struct magic *);
static uint16_t swap2(int *data_flow, uint16_t);
static uint32_t swap4(int *data_flow, uint32_t);
static uint64_t swap8(int *data_flow, uint64_t);
static char *mkdbname(int *data_flow, struct magic_set *, const char *, int);
static struct magic_map *apprentice_buf(int *data_flow, struct magic_set *, struct magic *,
    size_t);
static struct magic_map *apprentice_map(int *data_flow, struct magic_set *, const char *);
static int check_buffer(int *data_flow, struct magic_set *, struct magic_map *, const char *);
static void apprentice_unmap(int *data_flow, struct magic_map *);
static int apprentice_compile(int *data_flow, struct magic_set *, struct magic_map *,
    const char *);
static int check_format_type(int *data_flow, const char *, int);
static int check_format(int *data_flow, struct magic_set *, struct magic *);
static int get_op(int *data_flow, char);
static int parse_mime(int *data_flow, struct magic_set *, struct magic_entry *, const char *);
static int parse_strength(int *data_flow, struct magic_set *, struct magic_entry *, const char *);
static int parse_apple(int *data_flow, struct magic_set *, struct magic_entry *, const char *);


static size_t magicsize = sizeof(struct magic);

static const char usg_hdr[] = "cont\toffset\ttype\topcode\tmask\tvalue\tdesc";

static struct {
 const char *name;
 size_t len;
 int (*fun)(int *data_flow, struct magic_set *, struct magic_entry *, const char *);
} bang[] = {

 { "mime", sizeof("mime") - 1, parse_mime },
 { "apple", sizeof("apple") - 1, parse_apple },
 { "strength", sizeof("strength") - 1, parse_strength },

 { 
  ((void *)0)
      , 0, 
           ((void *)0) 
                }
};
struct type_tbl_s {
 const char name[16];
 const size_t len;
 const int type;
 const int format;
};
static const struct type_tbl_s type_tbl[] = {


 { "invalid", (sizeof("invalid") - 1), 0, 0 },
 { "byte", (sizeof("byte") - 1), 1, 1 },
 { "short", (sizeof("short") - 1), 2, 1 },
 { "default", (sizeof("default") - 1), 3, 0 },
 { "long", (sizeof("long") - 1), 4, 1 },
 { "string", (sizeof("string") - 1), 5, 2 },
 { "date", (sizeof("date") - 1), 6, 2 },
 { "beshort", (sizeof("beshort") - 1), 7, 1 },
 { "belong", (sizeof("belong") - 1), 8, 1 },
 { "bedate", (sizeof("bedate") - 1), 9, 2 },
 { "leshort", (sizeof("leshort") - 1), 10, 1 },
 { "lelong", (sizeof("lelong") - 1), 11, 1 },
 { "ledate", (sizeof("ledate") - 1), 12, 2 },
 { "pstring", (sizeof("pstring") - 1), 13, 2 },
 { "ldate", (sizeof("ldate") - 1), 14, 2 },
 { "beldate", (sizeof("beldate") - 1), 15, 2 },
 { "leldate", (sizeof("leldate") - 1), 16, 2 },
 { "regex", (sizeof("regex") - 1), 17, 2 },
 { "bestring16", (sizeof("bestring16") - 1), 18, 2 },
 { "lestring16", (sizeof("lestring16") - 1), 19, 2 },
 { "search", (sizeof("search") - 1), 20, 2 },
 { "medate", (sizeof("medate") - 1), 21, 2 },
 { "meldate", (sizeof("meldate") - 1), 22, 2 },
 { "melong", (sizeof("melong") - 1), 23, 1 },
 { "quad", (sizeof("quad") - 1), 24, 3 },
 { "lequad", (sizeof("lequad") - 1), 25, 3 },
 { "bequad", (sizeof("bequad") - 1), 26, 3 },
 { "qdate", (sizeof("qdate") - 1), 27, 2 },
 { "leqdate", (sizeof("leqdate") - 1), 28, 2 },
 { "beqdate", (sizeof("beqdate") - 1), 29, 2 },
 { "qldate", (sizeof("qldate") - 1), 30, 2 },
 { "leqldate", (sizeof("leqldate") - 1), 31, 2 },
 { "beqldate", (sizeof("beqldate") - 1), 32, 2 },
 { "float", (sizeof("float") - 1), 33, 4 },
 { "befloat", (sizeof("befloat") - 1), 34, 4 },
 { "lefloat", (sizeof("lefloat") - 1), 35, 4 },
 { "double", (sizeof("double") - 1), 36, 5 },
 { "bedouble", (sizeof("bedouble") - 1), 37, 5 },
 { "ledouble", (sizeof("ledouble") - 1), 38, 5 },
 { "leid3", (sizeof("leid3") - 1), 40, 1 },
 { "beid3", (sizeof("beid3") - 1), 39, 1 },
 { "indirect", (sizeof("indirect") - 1), 41, 1 },
 { "qwdate", (sizeof("qwdate") - 1), 42, 2 },
 { "leqwdate", (sizeof("leqwdate") - 1), 43, 2 },
 { "beqwdate", (sizeof("beqwdate") - 1), 44, 2 },
 { "name", (sizeof("name") - 1), 45, 0 },
 { "use", (sizeof("use") - 1), 46, 0 },
 { "clear", (sizeof("clear") - 1), 47, 0 },
 { "", 0, 0, 0 },
};





static const struct type_tbl_s special_tbl[] = {
 { "name", (sizeof("name") - 1), 45, 2 },
 { "use", (sizeof("use") - 1), 46, 2 },
 { "", 0, 0, 0 },
};



static int
get_type(int *data_flow, const struct type_tbl_s *tbl, const char *l, const char **t)
{
 const struct type_tbl_s *p;

 for (p = tbl; p->len; p++) {
  if (strncmp(l, p->name, p->len) == 0) {
   if (t)
    *t = l + p->len;
   break;
  }
 }
 return p->type;
}

static int
get_standard_integer_type(int *data_flow, const char *l, const char **t)
{
 int type;

 if (
    ((*__ctype_b_loc ())[(int) ((
    (unsigned char)l[1]
    ))] & (unsigned short int) _ISalpha)
                                ) {
  switch (l[1]) {
  case 'C':

   type = 1;
   break;
  case 'S':

   type = 2;
   break;
  case 'I':
  case 'L':
   type = 4;
   break;
  case 'Q':

   type = 24;
   break;
  default:

   return 0;
  }
  l += 2;
 } else if (
           ((*__ctype_b_loc ())[(int) ((
           (unsigned char)l[1]
           ))] & (unsigned short int) _ISdigit)
                                       ) {
  if (
     ((*__ctype_b_loc ())[(int) ((
     (unsigned char)l[2]
     ))] & (unsigned short int) _ISdigit)
                                 ) {

   return 0;
  }
  switch (l[1]) {
  case '1':
   type = 1;
   break;
  case '2':
   type = 2;
   break;
  case '4':
   type = 4;
   break;
  case '8':
   type = 24;
   break;
  default:

   return 0;
  }
  l += 2;
 } else {



  type = 4;
  ++l;
 }
 if (t)
  *t = l;
 return type;
}

static void
init_file_tables(int *data_flow)
{
 static int done = 0;
 const struct type_tbl_s *p;

 if (done)
  return;
 done++;

 for (p = type_tbl; p->len; p++) {
  
 ((
 p->type < 48
 ) ? (void) (0) : __assert_fail (
 "p->type < FILE_NAMES_SIZE"
 , "apprentice.c", 395, __PRETTY_FUNCTION__))
                                  ;
  file_names[p->type] = p->name;
  file_formats[p->type] = p->format;
 }
 
((
p - type_tbl == 48
) ? (void) (0) : __assert_fail (
"p - type_tbl == FILE_NAMES_SIZE"
, "apprentice.c", 399, __PRETTY_FUNCTION__))
                                       ;
}

static int
add_mlist(int *data_flow, struct mlist *mlp, struct magic_map *map, size_t idx)
{
 struct mlist *ml;

 mlp->map = idx == 0 ? map : 
                            ((void *)0)
                                ;
 if ((ml = (struct mlist *)(malloc(sizeof(*ml)))) == 
                                                        ((void *)0)
                                                            )
  return -1;

 ml->map = 
          ((void *)0)
              ;
 ml->magic = map->magic[idx];
 ml->nmagic = map->nmagic[idx];

 mlp->prev->next = ml;
 ml->prev = mlp->prev;
 ml->next = mlp;
 mlp->prev = ml;
 return 0;
}




static int
apprentice_1(int *data_flow, struct magic_set *ms, const char *fn, int action)
{
 struct magic_map *map;

 struct mlist *ml;
 size_t i;


 if (magicsize != 248) {
  file_error(data_flow, ms, 0, "magic element size %lu != %lu",
      (unsigned long)sizeof(*map->magic[0]),
      (unsigned long)248);
  return -1;
 }

 if (action == 2) {
  map = apprentice_load(data_flow, ms, fn, action);
  if (map == 
            ((void *)0)
                )
   return -1;
  return apprentice_compile(data_flow, ms, map, fn);
 }


 map = apprentice_map(data_flow, ms, fn);
 if (map == 
           ((void *)0)
               ) {
  if (ms->flags & 0x000040)
   file_magwarn(data_flow, ms, "using regular magic file `%s'", fn);
  map = apprentice_load(data_flow, ms, fn, action);
  if (map == 
            ((void *)0)
                )
   return -1;
 }

 for (i = 0; i < 2; i++) {
  if (add_mlist(data_flow, ms->mlist[i], map, i) == -1) {
   file_oomem(data_flow, ms, sizeof(*ml));
   goto fail;
  }
 }

 if (action == 3) {
  for (i = 0; i < 2; i++) {
   printf("Set %" "z" "u:\nBinary patterns:\n",
       i);
   apprentice_list(data_flow, ms->mlist[i], 0x20);
   printf("Text patterns:\n");
   apprentice_list(data_flow, ms->mlist[i], 0x40);
  }
 }
 return 0;
fail:
 for (i = 0; i < 2; i++) {
  mlist_free(data_flow, ms->mlist[i]);
  ms->mlist[i] = 
                ((void *)0)
                    ;
 }
 return -1;



}

__attribute__ ((__visibility__("hidden"))) void
file_ms_free(int *data_flow, struct magic_set *ms)
{
 size_t i;
 if (ms == 
          ((void *)0)
              )
  return;
 for (i = 0; i < 2; i++)
  mlist_free(data_flow, ms->mlist[i]);
 free(ms->o.pbuf);
 free(ms->o.buf);
 free(ms->c.li);
 free(ms);
}

__attribute__ ((__visibility__("hidden"))) struct magic_set *
file_ms_alloc(int *data_flow, int flags)
{
 struct magic_set *ms;
 size_t i, len;

 if ((ms = (struct magic_set *)(calloc((size_t)1, sizeof(struct magic_set)))
                               ) == 
                                   ((void *)0)
                                       )
  return 
        ((void *)0)
            ;

 if (magic_setflags(data_flow, ms, flags) == -1) {
  
 (*__errno_location ()) 
       = 
         22
               ;
  goto free;
 }

 ms->o.buf = ms->o.pbuf = 
                         ((void *)0)
                             ;
 len = (ms->c.len = 10) * sizeof(*ms->c.li);

 if ((ms->c.li = (struct level_info *)(malloc(len))) == 
                                                           ((void *)0)
                                                               )
  goto free;

 ms->event_flags = 0;
 ms->error = -1;
 for (i = 0; i < 2; i++)
  ms->mlist[i] = 
                ((void *)0)
                    ;
 ms->file = "unknown";
 ms->line = 0;
 ms->indir_max = 15;
 ms->name_max = 30;
 ms->elf_shnum_max = 32768;
 ms->elf_phnum_max = 128;
 ms->elf_notes_max = 256;
 return ms;
free:
 free(ms);
 return 
       ((void *)0)
           ;
}

static void
apprentice_unmap(int *data_flow, struct magic_map *map)
{
 if (map == 
           ((void *)0)
               )
  return;

 switch (map->type) {

 case 0:
  if (map->p)
   (void)munmap(map->p, map->len);
  break;

 case 1:
  free(map->p);
  break;
 case 2:
  break;
 default:
  abort();
 }
 free(map);
}

static struct mlist *
mlist_alloc(int *data_flow)
{
 struct mlist *mlist;
 if ((mlist = (struct mlist *)(calloc(1, sizeof(*mlist)))) == 
                                                                 ((void *)0)
                                                                     ) {
  return 
        ((void *)0)
            ;
 }
 mlist->next = mlist->prev = mlist;
 return mlist;
}

static void
mlist_free(int *data_flow, struct mlist *mlist)
{
 struct mlist *ml, *next;

 if (mlist == 
             ((void *)0)
                 )
  return;

 ml = mlist->next;
 for (ml = mlist->next; (next = ml->next) != 
                                            ((void *)0)
                                                ; ml = next) {
  if (ml->map)
   apprentice_unmap(data_flow, ml->map);
  free(ml);
  if (ml == mlist)
   break;
 }
}



__attribute__ ((__visibility__("hidden"))) int
buffer_apprentice(int *data_flow, struct magic_set *ms, struct magic **bufs,
    size_t *sizes, size_t nbufs)
{
 size_t i, j;
 struct mlist *ml;
 struct magic_map *map;

 if (nbufs == 0)
  return -1;

 if (ms->mlist[0] != 
                    ((void *)0)
                        )
  file_reset(data_flow, ms);

 init_file_tables(data_flow);

 for (i = 0; i < 2; i++) {
  mlist_free(data_flow, ms->mlist[i]);
  if ((ms->mlist[i] = mlist_alloc(data_flow)) == 
                                       ((void *)0)
                                           ) {
   file_oomem(data_flow, ms, sizeof(*ms->mlist[i]));
   goto fail;
  }
 }

 for (i = 0; i < nbufs; i++) {
  map = apprentice_buf(data_flow, ms, bufs[i], sizes[i]);
  if (map == 
            ((void *)0)
                )
   goto fail;

  for (j = 0; j < 2; j++) {
   if (add_mlist(data_flow, ms->mlist[j], map, j) == -1) {
    file_oomem(data_flow, ms, sizeof(*ml));
    goto fail;
   }
  }
 }

 return 0;
fail:
 for (i = 0; i < 2; i++) {
  mlist_free(data_flow, ms->mlist[i]);
  ms->mlist[i] = 
                ((void *)0)
                    ;
 }
 return -1;
}



__attribute__ ((__visibility__("hidden"))) int
file_apprentice(int *data_flow, struct magic_set *ms, const char *fn, int action)
{
 char *p, *mfn;
 int file_err, errs = -1;
 size_t i;

 if (ms->mlist[0] != 
                    ((void *)0)
                        )
  file_reset(data_flow, ms);

 if ((fn = magic_getpath(data_flow, fn, action)) == 
                                        ((void *)0)
                                            )
  return -1;

 init_file_tables(data_flow);

 if ((mfn = strdup(fn)) == 
                          ((void *)0)
                              ) {
  file_oomem(data_flow, ms, strlen(fn));
  return -1;
 }

 for (i = 0; i < 2; i++) {
  mlist_free(data_flow, ms->mlist[i]);
  if ((ms->mlist[i] = mlist_alloc(data_flow)) == 
                                       ((void *)0)
                                           ) {
   file_oomem(data_flow, ms, sizeof(*ms->mlist[i]));
   while (i-- > 0) {
    mlist_free(data_flow, ms->mlist[i]);
    ms->mlist[i] = 
                  ((void *)0)
                      ;
   }
   free(mfn);
   return -1;
  }
 }
 fn = mfn;

 while (fn) {
  p = strchr(fn, ':');
  if (p)
   *p++ = '\0';
  if (*fn == '\0')
   break;
  file_err = apprentice_1(data_flow, ms, fn, action);
  errs = 
        (((
        errs
        )>(
        file_err
        ))?(
        errs
        ):(
        file_err
        ))
                           ;
  fn = p;
 }

 free(mfn);

 if (errs == -1) {
  for (i = 0; i < 2; i++) {
   mlist_free(data_flow, ms->mlist[i]);
   ms->mlist[i] = 
                 ((void *)0)
                     ;
  }
  file_error(data_flow, ms, 0, "could not find any valid magic files!");
  return -1;
 }
 switch (action) {
 case 0:
 case 2:
 case 1:
 case 3:
  return 0;
 default:
  file_error(data_flow, ms, 0, "Invalid action %d", action);
  return -1;
 }
}
static size_t
nonmagic(const char *str)
{
 const char *p;
 size_t rv = 0;

 for (p = str; *p; p++)
  switch (*p) {
  case '\\':
   if (!*++p)
    p--;
   rv++;
   continue;
  case '?':
  case '*':
  case '.':
  case '+':
  case '^':
  case '$':
   continue;
  case '[':
   while (*p && *p != ']')
    p++;
   p--;
   continue;
  case '{':
   while (*p && *p != '}')
    p++;
   if (!*p)
    p--;
   continue;
  default:
   rv++;
   continue;
  }

 return rv == 0 ? 1 : rv;
}




static size_t
apprentice_magic_strength(const struct magic *m)
{

 size_t v, val = 2 * 10;

 switch (m->type) {
 case 3:
  if (m->factor_op != '\0')
   abort();
  return 0;

 case 1:
  val += 1 * 10;
  break;

 case 2:
 case 10:
 case 7:
  val += 2 * 10;
  break;

 case 4:
 case 11:
 case 8:
 case 23:
  val += 4 * 10;
  break;

 case 13:
 case 5:
  val += m->vallen * 10;
  break;

 case 18:
 case 19:
  val += m->vallen * 10 / 2;
  break;

 case 20:
  val += m->vallen * 
                    (((
                    10 / m->vallen
                    )>(
                    1
                    ))?(
                    10 / m->vallen
                    ):(
                    1
                    ))
                                            ;
  break;

 case 17:
  v = nonmagic(m->value.s);
  val += v * 
            (((
            10 / v
            )>(
            1
            ))?(
            10 / v
            ):(
            1
            ))
                            ;
  break;

 case 6:
 case 12:
 case 9:
 case 21:
 case 14:
 case 16:
 case 15:
 case 22:
 case 33:
 case 34:
 case 35:
  val += 4 * 10;
  break;

 case 24:
 case 26:
 case 25:
 case 27:
 case 28:
 case 29:
 case 30:
 case 31:
 case 32:
 case 42:
 case 43:
 case 44:
 case 36:
 case 37:
 case 38:
  val += 8 * 10;
  break;

 case 41:
 case 45:
 case 46:
  break;

 default:
  (void)fprintf(
               stderr
                     , "Bad type %d\n", m->type);
  abort();
 }

 switch (m->reln) {
 case 'x':
 case '!':
  val = 0;
  break;

 case '=':
  val += 10;
  break;

 case '>':
 case '<':
  val -= 2 * 10;
  break;

 case '^':
 case '&':
  val -= 10;
  break;

 default:
  (void)fprintf(
               stderr
                     , "Bad relation %c\n", m->reln);
  abort();
 }

 if (val == 0)
  val = 1;

 switch (m->factor_op) {
 case '\0':
  break;
 case '+':
  val += m->factor;
  break;
 case '-':
  val -= m->factor;
  break;
 case '*':
  val *= m->factor;
  break;
 case '/':
  val /= m->factor;
  break;
 default:
  abort();
 }





 if (m->desc[0] == '\0')
  val++;
 return val;
}




static int
apprentice_sort(const void *a, const void *b)
{
 const struct magic_entry *ma = (const struct magic_entry *)(a);
 const struct magic_entry *mb = (const struct magic_entry *)(b);
 size_t sa = apprentice_magic_strength(ma->mp);
 size_t sb = apprentice_magic_strength(mb->mp);
 if (sa == sb)
  return 0;
 else if (sa > sb)
  return -1;
 else
  return 1;
}




static void
apprentice_list(int *data_flow, struct mlist *mlist, int mode)
{
 uint32_t magindex = 0;
 struct mlist *ml;
 for (ml = mlist->next; ml != mlist; ml = ml->next) {
  for (magindex = 0; magindex < ml->nmagic; magindex++) {
   struct magic *m = &ml->magic[magindex];
   if ((m->flag & mode) != mode) {

    while (magindex + 1 < ml->nmagic &&
           ml->magic[magindex + 1].cont_level != 0)
     ++magindex;
    continue;
   }





   while (magindex + 1 < ml->nmagic &&
          ml->magic[magindex + 1].cont_level != 0 &&
          *ml->magic[magindex].desc == '\0' &&
          *ml->magic[magindex].mimetype == '\0')
    magindex++;

   printf("Strength = %3" "z" "u : %s [%s]\n",
       apprentice_magic_strength(m),
       ml->magic[magindex].desc,
       ml->magic[magindex].mimetype);
  }
 }
}

static void
set_test_type(int *data_flow, struct magic *mstart, struct magic *m)
{
 switch (m->type) {
 case 1:
 case 2:
 case 4:
 case 6:
 case 7:
 case 8:
 case 9:
 case 10:
 case 11:
 case 12:
 case 14:
 case 15:
 case 16:
 case 21:
 case 22:
 case 23:
 case 24:
 case 25:
 case 26:
 case 27:
 case 28:
 case 29:
 case 30:
 case 31:
 case 32:
 case 42:
 case 43:
 case 44:
 case 33:
 case 34:
 case 35:
 case 36:
 case 37:
 case 38:
  mstart->flag |= 0x20;
  break;
 case 5:
 case 13:
 case 18:
 case 19:

  if (mstart->_u._s._flags & (1 << (5)))
   mstart->flag |= 0x40;
  else
   mstart->flag |= 0x20;
  break;
 case 17:
 case 20:

  if (mstart->_u._s._flags & (1 << (6)))
   mstart->flag |= 0x20;
  if (mstart->_u._s._flags & (1 << (5)))
   mstart->flag |= 0x40;

  if (mstart->flag & (0x40|0x20))
   break;


  if (file_looks_utf8(data_flow, m->value.us, (size_t)m->vallen, 
                                                     ((void *)0)
                                                         ,
      
     ((void *)0)
         ) <= 0)
   mstart->flag |= 0x20;
  else
   mstart->flag |= 0x40;
  break;
 case 3:


  break;
 case 0:
 default:

  break;
 }
}

static int
addentry(int *data_flow, struct magic_set *ms, struct magic_entry *me,
   struct magic_entry_set *mset)
{
 size_t i = me->mp->type == 45 ? 1 : 0;
 if (mset[i].count == mset[i].max) {
  struct magic_entry *mp;

  mset[i].max += (size_t)200;
  if ((mp = (struct magic_entry *)(realloc(mset[i].me, sizeof(*mp) * mset[i].max))
                                                     ) ==
      
     ((void *)0)
         ) {
   file_oomem(data_flow, ms, sizeof(*mp) * mset[i].max);
   return -1;
  }
  (void)memset(&mp[mset[i].count], 0, sizeof(*mp) *
      (size_t)200);
  mset[i].me = mp;
 }
 mset[i].me[mset[i].count++] = *me;
 memset(me, 0, sizeof(*me));
 return 0;
}




static void
load_1(int *data_flow, struct magic_set *ms, int action, const char *fn, int *errs,
   struct magic_entry_set *mset)
{
 size_t lineno = 0, llen = 0;
 char *line = 
             ((void *)0)
                 ;
 ssize_t len;
 struct magic_entry me;

 FILE *f = fopen(ms->file = fn, "r");
 if (f == 
         ((void *)0)
             ) {
  if (
     (*__errno_location ()) 
           != 
              2
                    )
   file_error(data_flow, ms, 
                 (*__errno_location ())
                      , "cannot read magic file `%s'",
       fn);
  (*errs)++;
  return;
 }

 memset(&me, 0, sizeof(me));

 for (ms->line = 1; (len = getline(&line, &llen, f)) != -1;
     ms->line++) {
  if (len == 0)
   continue;
  if (line[len - 1] == '\n') {
   lineno++;
   line[len - 1] = '\0';
  }
  switch (line[0]) {
  case '\0':
  case '#':
   continue;
  case '!':
   if (line[1] == ':') {
    size_t i;

    for (i = 0; bang[i].name != 
                               ((void *)0)
                                   ; i++) {
     if ((size_t)(len - 2) > bang[i].len &&
         memcmp(bang[i].name, line + 2,
         bang[i].len) == 0)
      break;
    }
    if (bang[i].name == 
                       ((void *)0)
                           ) {
     file_error(data_flow, ms, 0,
         "Unknown !: entry `%s'", line);
     (*errs)++;
     continue;
    }
    if (me.mp == 
                ((void *)0)
                    ) {
     file_error(data_flow, ms, 0,
         "No current entry for :!%s type",
      bang[i].name);
     (*errs)++;
     continue;
    }
    if ((*bang[i].fun)(data_flow, ms, &me,
        line + bang[i].len + 2) != 0) {
     (*errs)++;
     continue;
    }
    continue;
   }

  default:
  again:
   switch (parse(data_flow, ms, &me, line, lineno, action)) {
   case 0:
    continue;
   case 1:
    (void)addentry(data_flow, ms, &me, mset);
    goto again;
   default:
    (*errs)++;
    break;
   }
  }
 }
 if (me.mp)
  (void)addentry(data_flow, ms, &me, mset);
 free(line);
 (void)fclose(f);
}





static int
cmpstrp(const void *p1, const void *p2)
{
        return strcmp(*(char *const *)p1, *(char *const *)p2);
}


static uint32_t
set_text_binary(int *data_flow, struct magic_set *ms, struct magic_entry *me, uint32_t nme,
    uint32_t starttest)
{
 static const char text[] = "text";
 static const char binary[] = "binary";
 static const size_t len = sizeof(text);

 uint32_t i = starttest;

 do {
  set_test_type(data_flow, me[starttest].mp, me[i].mp);
  if ((ms->flags & 0x000001) == 0)
   continue;
  (void)fprintf(
               stderr
                     , "%s%s%s: %s\n",
      me[i].mp->mimetype,
      me[i].mp->mimetype[0] == '\0' ? "" : "; ",
      me[i].mp->desc[0] ? me[i].mp->desc : "(no description)",
      me[i].mp->flag & 0x20 ? binary : text);
  if (me[i].mp->flag & 0x20) {
   char *p = strstr(me[i].mp->desc, text);
   if (p && (p == me[i].mp->desc ||
       
      ((*__ctype_b_loc ())[(int) ((
      (unsigned char)p[-1]
      ))] & (unsigned short int) _ISspace)
                                   ) &&
       (p + len - me[i].mp->desc == 64
       || (p[len] == '\0' ||
       
      ((*__ctype_b_loc ())[(int) ((
      (unsigned char)p[len]
      ))] & (unsigned short int) _ISspace)
                                    )))
    (void)fprintf(
                 stderr
                       , "*** Possible "
        "binary test for text type\n");
  }
 } while (++i < nme && me[i].mp->cont_level != 0);
 return i;
}

static void
set_last_default(int *data_flow, struct magic_set *ms, struct magic_entry *me, uint32_t nme)
{
 uint32_t i;
 for (i = 0; i < nme; i++) {
  if (me[i].mp->cont_level == 0 &&
      me[i].mp->type == 3) {
   while (++i < nme)
    if (me[i].mp->cont_level == 0)
     break;
   if (i != nme) {

    ms->line = me[i].mp->lineno;
    file_magwarn(data_flow, ms,
        "level 0 \"default\" did not sort last");
   }
   return;
  }
 }
}

static int
coalesce_entries(int *data_flow, struct magic_set *ms, struct magic_entry *me, uint32_t nme,
    struct magic **ma, uint32_t *nma)
{
 uint32_t i, mentrycount = 0;
 size_t slen;

 for (i = 0; i < nme; i++)
  mentrycount += me[i].cont_count;

 slen = sizeof(**ma) * mentrycount;
 if ((*ma = (struct magic *)(malloc(slen))) == 
                                                  ((void *)0)
                                                      ) {
  file_oomem(data_flow, ms, slen);
  return -1;
 }

 mentrycount = 0;
 for (i = 0; i < nme; i++) {
  (void)memcpy(*ma + mentrycount, me[i].mp,
      me[i].cont_count * sizeof(**ma));
  mentrycount += me[i].cont_count;
 }
 *nma = mentrycount;
 return 0;
}

static void
magic_entry_free(int *data_flow, struct magic_entry *me, uint32_t nme)
{
 uint32_t i;
 if (me == 
          ((void *)0)
              )
  return;
 for (i = 0; i < nme; i++)
  free(me[i].mp);
 free(me);
}

static struct magic_map *
apprentice_load(int *data_flow, struct magic_set *ms, const char *fn, int action)
{
 int errs = 0;
 uint32_t i, j;
 size_t files = 0, maxfiles = 0;
 char **filearr = 
                 ((void *)0)
                     , *mfn;
 struct stat st;
 struct magic_map *map;
 struct magic_entry_set mset[2];
 DIR *dir;
 struct dirent *d;

 memset(mset, 0, sizeof(mset));
 ms->flags |= 0x000040;


 if ((map = (struct magic_map *)(calloc(1, sizeof(*map)))) == 
                                                                 ((void *)0)
                                                                     )
 {
  file_oomem(data_flow, ms, sizeof(*map));
  return 
        ((void *)0)
            ;
 }


 if (action == 1)
  (void)fprintf(
               stderr
                     , "%s\n", usg_hdr);


 if (stat(fn, &st) == 0 && 
                          ((((
                          st.st_mode
                          )) & 0170000) == (0040000))
                                             ) {
  dir = opendir(fn);
  if (!dir) {
   errs++;
   goto out;
  }
  while ((d = readdir(dir)) != 
                              ((void *)0)
                                  ) {
   if (asprintf(data_flow, &mfn, "%s/%s", fn, d->d_name) < 0) {
    file_oomem(data_flow, ms,
        strlen(fn) + strlen(d->d_name) + 2);
    errs++;
    closedir(dir);
    goto out;
   }
   if (stat(mfn, &st) == -1 || !
                               ((((
                               st.st_mode
                               )) & 0170000) == (0100000))
                                                  ) {
    free(mfn);
    continue;
   }
   if (files >= maxfiles) {
    size_t mlen;
    maxfiles = (maxfiles + 1) * 2;
    mlen = maxfiles * sizeof(*filearr);
    if ((filearr = (char **)(realloc(filearr, mlen))
                               ) == 
                                   ((void *)0)
                                       ) {
     file_oomem(data_flow, ms, mlen);
     free(mfn);
     closedir(dir);
     errs++;
     goto out;
    }
   }
   filearr[files++] = mfn;
  }
  closedir(dir);
  qsort(filearr, files, sizeof(*filearr), cmpstrp);
  for (i = 0; i < files; i++) {
   load_1(data_flow, ms, action, filearr[i], &errs, mset);
   free(filearr[i]);
  }
  free(filearr);
 } else
  load_1(data_flow, ms, action, fn, &errs, mset);
 if (errs)
  goto out;

 for (j = 0; j < 2; j++) {

  for (i = 0; i < mset[j].count; ) {
   if (mset[j].me[i].mp->cont_level != 0) {
    i++;
    continue;
   }
   i = set_text_binary(data_flow, ms, mset[j].me, mset[j].count, i);
  }
  qsort(mset[j].me, mset[j].count, sizeof(*mset[j].me),
      apprentice_sort);





  set_last_default(data_flow, ms, mset[j].me, mset[j].count);


  if (coalesce_entries(data_flow, ms, mset[j].me, mset[j].count,
      &map->magic[j], &map->nmagic[j]) == -1) {
   errs++;
   goto out;
  }
 }

out:
 for (j = 0; j < 2; j++)
  magic_entry_free(data_flow, mset[j].me, mset[j].count);

 if (errs) {
  apprentice_unmap(data_flow, map);
  return 
        ((void *)0)
            ;
 }
 return map;
}




__attribute__ ((__visibility__("hidden"))) uint64_t
file_signextend(int *data_flow, struct magic_set *ms, struct magic *m, uint64_t v)
{
 if (!(m->flag & 0x08)) {
  switch(m->type) {





  case 1:
   v = (signed char) v;
   break;
  case 2:
  case 7:
  case 10:
   v = (short) v;
   break;
  case 6:
  case 9:
  case 12:
  case 21:
  case 14:
  case 15:
  case 16:
  case 22:
  case 4:
  case 8:
  case 11:
  case 23:
  case 33:
  case 34:
  case 35:
   v = (int32_t) v;
   break;
  case 24:
  case 26:
  case 25:
  case 27:
  case 30:
  case 42:
  case 29:
  case 32:
  case 44:
  case 28:
  case 31:
  case 43:
  case 36:
  case 37:
  case 38:
   v = (int64_t) v;
   break;
  case 5:
  case 13:
  case 18:
  case 19:
  case 17:
  case 20:
  case 3:
  case 41:
  case 45:
  case 46:
  case 47:
   break;
  default:
   if (ms->flags & 0x000040)
       file_magwarn(data_flow, ms, "cannot happen: m->type=%d\n",
        m->type);
   return ~0U;
  }
 }
 return v;
}

static int
string_modifier_check(int *data_flow, struct magic_set *ms, struct magic *m)
{
 if ((ms->flags & 0x000040) == 0)
  return 0;

 if ((m->type != 17 || (m->_u._s._flags & (1 << (11))) == 0) &&
     (m->type != 13 && (m->_u._s._flags & ((1 << (7))|(1 << (9))|(1 << (8))|(1 << (11))|(1 << (10)))) != 0)) {
  file_magwarn(data_flow, ms,
      "'/BHhLl' modifiers are only allowed for pascal strings\n");
  return -1;
 }
 switch (m->type) {
 case 18:
 case 19:
  if (m->_u._s._flags != 0) {
   file_magwarn(data_flow, ms,
       "no modifiers allowed for 16-bit strings\n");
   return -1;
  }
  break;
 case 5:
 case 13:
  if ((m->_u._s._flags & (1 << (4))) != 0) {
   file_magwarn(data_flow, ms,
       "'/%c' only allowed on regex and search\n",
       's');
   return -1;
  }
  break;
 case 20:
  if (m->_u._s._count == 0) {
   file_magwarn(data_flow, ms,
       "missing range; defaulting to %d\n",
                            100);
   m->_u._s._count = 100;
   return -1;
  }
  break;
 case 17:
  if ((m->_u._s._flags & (1 << (0))) != 0) {
   file_magwarn(data_flow, ms, "'/%c' not allowed on regex\n",
       'W');
   return -1;
  }
  if ((m->_u._s._flags & (1 << (1))) != 0) {
   file_magwarn(data_flow, ms, "'/%c' not allowed on regex\n",
       'w');
   return -1;
  }
  break;
 default:
  file_magwarn(data_flow, ms, "coding error: m->type=%d\n",
      m->type);
  return -1;
 }
 return 0;
}

static int
get_op(int *data_flow, char c)
{
 switch (c) {
 case '&':
  return 0;
 case '|':
  return 1;
 case '^':
  return 2;
 case '+':
  return 3;
 case '-':
  return 4;
 case '*':
  return 5;
 case '/':
  return 6;
 case '%':
  return 7;
 default:
  return -1;
 }
}


static int
get_cond(int *data_flow, const char *l, const char **t)
{
 static const struct cond_tbl_s {
  char name[8];
  size_t len;
  int cond;
 } cond_tbl[] = {
  { "if", 2, 1 },
  { "elif", 4, 2 },
  { "else", 4, 3 },
  { "", 0, 0 },
 };
 const struct cond_tbl_s *p;

 for (p = cond_tbl; p->len; p++) {
  if (strncmp(l, p->name, p->len) == 0 &&
      
     ((*__ctype_b_loc ())[(int) ((
     (unsigned char)l[p->len]
     ))] & (unsigned short int) _ISspace)
                                      ) {
   if (t)
    *t = l + p->len;
   break;
  }
 }
 return p->cond;
}

static int
check_cond(int *data_flow, struct magic_set *ms, int cond, uint32_t cont_level)
{
 int last_cond;
 last_cond = ms->c.li[cont_level].last_cond;

 switch (cond) {
 case 1:
  if (last_cond != 0 && last_cond != 2) {
   if (ms->flags & 0x000040)
    file_magwarn(data_flow, ms, "syntax error: `if'");
   return -1;
  }
  last_cond = 1;
  break;

 case 2:
  if (last_cond != 1 && last_cond != 2) {
   if (ms->flags & 0x000040)
    file_magwarn(data_flow, ms, "syntax error: `elif'");
   return -1;
  }
  last_cond = 2;
  break;

 case 3:
  if (last_cond != 1 && last_cond != 2) {
   if (ms->flags & 0x000040)
    file_magwarn(data_flow, ms, "syntax error: `else'");
   return -1;
  }
  last_cond = 0;
  break;

 case 0:
  last_cond = 0;
  break;
 }

 ms->c.li[cont_level].last_cond = last_cond;
 return 0;
}


static int
parse_indirect_modifier(int *data_flow, struct magic_set *ms, struct magic *m, const char **lp)
{
 const char *l = *lp;

 while (!
        ((*__ctype_b_loc ())[(int) ((
        (unsigned char)*++l
        ))] & (unsigned short int) _ISspace)
                                    )
  switch (*l) {
  case 'r':
   m->_u._s._flags |= (1 << (0));
   break;
  default:
   if (ms->flags & 0x000040)
    file_magwarn(data_flow, ms, "indirect modifier `%c' "
     "invalid", *l);
   *lp = l;
   return -1;
  }
 *lp = l;
 return 0;
}

static void
parse_op_modifier(int *data_flow, struct magic_set *ms, struct magic *m, const char **lp,
    int op)
{
 const char *l = *lp;
 char *t;
 uint64_t val;

 ++l;
 m->mask_op |= op;
 val = (uint64_t)strtoull(l, &t, 0);
 l = t;
 m->_u._mask = file_signextend(data_flow, ms, m, val);
 eatsize(data_flow, &l);
 *lp = l;
}

static int
parse_string_modifier(int *data_flow, struct magic_set *ms, struct magic *m, const char **lp)
{
 const char *l = *lp;
 char *t;
 int have_range = 0;

 while (!
        ((*__ctype_b_loc ())[(int) ((
        (unsigned char)*++l
        ))] & (unsigned short int) _ISspace)
                                    ) {
  switch (*l) {
  case '0': case '1': case '2':
  case '3': case '4': case '5':
  case '6': case '7': case '8':
  case '9':
   if (have_range && (ms->flags & 0x000040))
    file_magwarn(data_flow, ms, "multiple ranges");
   have_range = 1;
   m->_u._s._count = (uint32_t)(strtoul(l, &t, 0));
   if (m->_u._s._count == 0)
    file_magwarn(data_flow, ms, "zero range");
   l = t - 1;
   break;
  case 'W':
   m->_u._s._flags |= (1 << (0));
   break;
  case 'w':
   m->_u._s._flags |= (1 << (1));
   break;
  case 'c':
   m->_u._s._flags |= (1 << (2));
   break;
  case 'C':
   m->_u._s._flags |= (1 << (3));
   break;
  case 's':
   m->_u._s._flags |= (1 << (4));
   break;
  case 'b':
   m->_u._s._flags |= (1 << (6));
   break;
  case 't':
   m->_u._s._flags |= (1 << (5));
   break;
  case 'T':
   m->_u._s._flags |= (1 << (13));
   break;
  case 'B':

   if (m->type != 13)
    goto bad;
   m->_u._s._flags = (m->_u._s._flags & ~((1 << (7))|(1 << (9))|(1 << (8))|(1 << (11))|(1 << (10)))) | ((1 << (7)));
   break;
  case 'H':
   if (m->type != 13)
    goto bad;
   m->_u._s._flags = (m->_u._s._flags & ~((1 << (7))|(1 << (9))|(1 << (8))|(1 << (11))|(1 << (10)))) | ((1 << (8)));
   break;
  case 'h':
   if (m->type != 13)
    goto bad;
   m->_u._s._flags = (m->_u._s._flags & ~((1 << (7))|(1 << (9))|(1 << (8))|(1 << (11))|(1 << (10)))) | ((1 << (9)));
   break;
  case 'L':
   if (m->type != 13)
    goto bad;
   m->_u._s._flags = (m->_u._s._flags & ~((1 << (7))|(1 << (9))|(1 << (8))|(1 << (11))|(1 << (10)))) | ((1 << (10)));
   break;
  case 'l':
   switch (m->type) {
   case 13:
   case 17:
    break;
   default:
    goto bad;
   }
   m->_u._s._flags = (m->_u._s._flags & ~((1 << (7))|(1 << (9))|(1 << (8))|(1 << (11))|(1 << (10)))) | ((1 << (11)));
   break;
  case 'J':
   if (m->type != 13)
    goto bad;
   m->_u._s._flags |= (1 << (12));
   break;
  default:
  bad:
   if (ms->flags & 0x000040)
    file_magwarn(data_flow, ms, "string modifier `%c' "
     "invalid", *l);
   goto out;
  }

  if (l[1] == '/' && !
                     ((*__ctype_b_loc ())[(int) ((
                     (unsigned char)l[2]
                     ))] & (unsigned short int) _ISspace)
                                                 )
   l++;
 }
 if (string_modifier_check(data_flow, ms, m) == -1)
  goto out;
 *lp = l;
 return 0;
out:
 *lp = l;
 return -1;
}




static int
parse(int *data_flow, struct magic_set *ms, struct magic_entry *me, const char *line,
    size_t lineno, int action)
{

 static uint32_t last_cont_level = 0;

 size_t i;
 struct magic *m;
 const char *l = line;
 char *t;
 int op;
 uint32_t cont_level;
 int32_t diff;

 cont_level = 0;




 while (*l == '>') {
  ++l;
  cont_level++;
 }

 if (cont_level == 0 || cont_level > last_cont_level)
  if (file_check_mem(data_flow, ms, cont_level) == -1)
   return -1;
 last_cont_level = cont_level;

 if (cont_level != 0) {
  if (me->mp == 
               ((void *)0)
                   ) {
   file_magerror(data_flow, ms, "No current entry for continuation");
   return -1;
  }
  if (me->cont_count == 0) {
   file_magerror(data_flow, ms, "Continuations present with 0 count");
   return -1;
  }
  m = &me->mp[me->cont_count - 1];
  diff = (int32_t)cont_level - (int32_t)m->cont_level;
  if (diff > 1)
   file_magwarn(data_flow, ms, "New continuation level %u is more "
       "than one larger than current level %u", cont_level,
       m->cont_level);
  if (me->cont_count == me->max_count) {
   struct magic *nm;
   size_t cnt = me->max_count + (size_t)10;
   if ((nm = (struct magic *)(realloc(me->mp, sizeof(*nm) * cnt))
                          ) == 
                              ((void *)0)
                                  ) {
    file_oomem(data_flow, ms, sizeof(*nm) * cnt);
    return -1;
   }
   me->mp = m = nm;
   me->max_count = (uint32_t)(cnt);
  }
  m = &me->mp[me->cont_count++];
  (void)memset(m, 0, sizeof(*m));
  m->cont_level = cont_level;
 } else {
  static const size_t len = sizeof(*m) * (size_t)10;
  if (me->mp != 
               ((void *)0)
                   )
   return 1;
  if ((m = (struct magic *)(malloc(len))) == 
                                                ((void *)0)
                                                    ) {
   file_oomem(data_flow, ms, len);
   return -1;
  }
  me->mp = m;
  me->max_count = (size_t)10;
  (void)memset(m, 0, sizeof(*m));
  m->factor_op = '\0';
  m->cont_level = 0;
  me->cont_count = 1;
 }
 m->lineno = (uint32_t)(lineno);

 if (*l == '&') {
                ++l;
                m->flag |= 0x02;
        }
 if (*l == '(') {
  ++l;
  m->flag |= 0x01;
  if (m->flag & 0x02)
   m->flag = (m->flag & ~0x02) | 0x04;

  if (*l == '&') {
   ++l;
   m->flag |= 0x02;
  }
 }

 if (m->cont_level == 0 && (m->flag & (0x02 | 0x04)))
  if (ms->flags & 0x000040)
   file_magwarn(data_flow, ms, "relative offset at level 0");


 m->offset = (uint32_t)strtoul(l, &t, 0);
        if (l == t)
  if (ms->flags & 0x000040)
   file_magwarn(data_flow, ms, "offset `%s' invalid", l);
        l = t;

 if (m->flag & 0x01) {
  m->in_type = 4;
  m->in_offset = 0;



  if (*l == '.') {
   l++;
   switch (*l) {
   case 'l':
    m->in_type = 11;
    break;
   case 'L':
    m->in_type = 8;
    break;
   case 'm':
    m->in_type = 23;
    break;
   case 'h':
   case 's':
    m->in_type = 10;
    break;
   case 'H':
   case 'S':
    m->in_type = 7;
    break;
   case 'c':
   case 'b':
   case 'C':
   case 'B':
    m->in_type = 1;
    break;
   case 'e':
   case 'f':
   case 'g':
    m->in_type = 38;
    break;
   case 'E':
   case 'F':
   case 'G':
    m->in_type = 37;
    break;
   case 'i':
    m->in_type = 40;
    break;
   case 'I':
    m->in_type = 39;
    break;
   default:
    if (ms->flags & 0x000040)
     file_magwarn(data_flow, ms,
         "indirect offset type `%c' invalid",
         *l);
    break;
   }
   l++;
  }

  m->in_op = 0;
  if (*l == '~') {
   m->in_op |= 0x40;
   l++;
  }
  if ((op = get_op(data_flow, *l)) != -1) {
   m->in_op |= op;
   l++;
  }
  if (*l == '(') {
   m->in_op |= 0x80;
   l++;
  }
  if (
     ((*__ctype_b_loc ())[(int) ((
     (unsigned char)*l
     ))] & (unsigned short int) _ISdigit) 
                                || *l == '-') {
   m->in_offset = (int32_t)strtol(l, &t, 0);
   if (l == t)
    if (ms->flags & 0x000040)
     file_magwarn(data_flow, ms,
         "in_offset `%s' invalid", l);
   l = t;
  }
  if (*l++ != ')' ||
      ((m->in_op & 0x80) && *l++ != ')'))
   if (ms->flags & 0x000040)
    file_magwarn(data_flow, ms,
        "missing close-paren in indirect offset");
 }
 {while (
(((
(unsigned char) *l
) & ~0x7f) == 0) 
&& 
((*__ctype_b_loc ())[(int) ((
(unsigned char) *l
))] & (unsigned short int) _ISspace)
) ++l;};


 m->cond = get_cond(data_flow, l, &l);
 if (check_cond(data_flow, ms, m->cond, cont_level) == -1)
  return -1;

 {while (
(((
(unsigned char) *l
) & ~0x7f) == 0) 
&& 
((*__ctype_b_loc ())[(int) ((
(unsigned char) *l
))] & (unsigned short int) _ISspace)
) ++l;};





 if (*l == 'u') {





  m->type = get_type(data_flow, type_tbl, l + 1, &l);
  if (m->type == 0) {




   m->type = get_standard_integer_type(data_flow, l, &l);
  }

  if (m->type != 0)
   m->flag |= 0x08;
 } else {






  m->type = get_type(data_flow, type_tbl, l, &l);
  if (m->type == 0) {





   if (*l == 'd')
    m->type = get_standard_integer_type(data_flow, l, &l);
   else if (*l == 's' && !
                         ((*__ctype_b_loc ())[(int) ((
                         (unsigned char)l[1]
                         ))] & (unsigned short int) _ISalpha)
                                                     ) {
    m->type = 5;
    ++l;
   }
  }
 }

 if (m->type == 0) {

  m->type = get_type(data_flow, special_tbl, l, &l);
 }

 if (m->type == 0) {
  if (ms->flags & 0x000040)
   file_magwarn(data_flow, ms, "type `%s' invalid", l);
  return -1;
 }




 m->mask_op = 0;
 if (*l == '~') {
  if (!((m->type) == 5 || (m->type) == 13 || (m->type) == 18 || (m->type) == 19 || (m->type) == 17 || (m->type) == 20 || (m->type) == 41 || (m->type) == 45 || (m->type) == 46))
   m->mask_op |= 0x40;
  else if (ms->flags & 0x000040)
   file_magwarn(data_flow, ms, "'~' invalid for string types");
  ++l;
 }
 m->_u._s._count = 0;
 m->_u._s._flags = m->type == 13 ? (1 << (7)) : 0;
 if ((op = get_op(data_flow, *l)) != -1) {
  if (((m->type) == 5 || (m->type) == 13 || (m->type) == 18 || (m->type) == 19 || (m->type) == 17 || (m->type) == 20 || (m->type) == 41 || (m->type) == 45 || (m->type) == 46)) {
   int r;

   if (op != 6) {
    if (ms->flags & 0x000040)
     file_magwarn(data_flow, ms,
         "invalid string/indirect op: "
         "`%c'", *t);
    return -1;
   }

   if (m->type == 41)
    r = parse_indirect_modifier(data_flow, ms, m, &l);
   else
    r = parse_string_modifier(data_flow, ms, m, &l);
   if (r == -1)
    return -1;
  } else
   parse_op_modifier(data_flow, ms, m, &l, op);
 }





 {while (
(((
(unsigned char) *l
) & ~0x7f) == 0) 
&& 
((*__ctype_b_loc ())[(int) ((
(unsigned char) *l
))] & (unsigned short int) _ISspace)
) ++l;};

 switch (*l) {
 case '>':
 case '<':
    m->reln = *l;
    ++l;
  if (*l == '=') {
   if (ms->flags & 0x000040) {
    file_magwarn(data_flow, ms, "%c= not supported",
        m->reln);
    return -1;
   }
     ++l;
  }
  break;

 case '&':
 case '^':
 case '=':
    m->reln = *l;
    ++l;
  if (*l == '=') {

     ++l;
  }
  break;
 case '!':
  m->reln = *l;
  ++l;
  break;
 default:
    m->reln = '=';
  if (*l == 'x' && ((
                    (((
                    (unsigned char)l[1]
                    ) & ~0x7f) == 0) 
                                                 &&
      
     ((*__ctype_b_loc ())[(int) ((
     (unsigned char)l[1]
     ))] & (unsigned short int) _ISspace)
                                 ) || !l[1])) {
   m->reln = *l;
   ++l;
  }
  break;
 }



 if (m->reln != 'x' && getvalue(data_flow, ms, m, &l, action))
  return -1;
 {while (
(((
(unsigned char) *l
) & ~0x7f) == 0) 
&& 
((*__ctype_b_loc ())[(int) ((
(unsigned char) *l
))] & (unsigned short int) _ISspace)
) ++l;};
 if (l[0] == '\b') {
  ++l;
  m->flag |= 0x10;
 } else if ((l[0] == '\\') && (l[1] == 'b')) {
  ++l;
  ++l;
  m->flag |= 0x10;
 }
 for (i = 0; (m->desc[i++] = *l++) != '\0' && i < sizeof(m->desc); )
  continue;
 if (i == sizeof(m->desc)) {
  m->desc[sizeof(m->desc) - 1] = '\0';
  if (ms->flags & 0x000040)
   file_magwarn(data_flow, ms, "description `%s' truncated", m->desc);
 }





        if (ms->flags & 0x000040) {
  if (check_format(data_flow, ms, m) == -1)
   return -1;
 }

 if (action == 1) {
  file_mdump(data_flow, m);
 }

 m->mimetype[0] = '\0';
 return 0;
}





static int
parse_strength(int *data_flow, struct magic_set *ms, struct magic_entry *me, const char *line)
{
 const char *l = line;
 char *el;
 unsigned long factor;
 struct magic *m = &me->mp[0];

 if (m->factor_op != '\0') {
  file_magwarn(data_flow, ms,
      "Current entry already has a strength type: %c %d",
      m->factor_op, m->factor);
  return -1;
 }
 if (m->type == 45) {
  file_magwarn(data_flow, ms, "%s: Strength setting is not supported in "
      "\"name\" magic entries", m->value.s);
  return -1;
 }
 {while (
(((
(unsigned char) *l
) & ~0x7f) == 0) 
&& 
((*__ctype_b_loc ())[(int) ((
(unsigned char) *l
))] & (unsigned short int) _ISspace)
) ++l;};
 switch (*l) {
 case '\0':
 case '+':
 case '-':
 case '*':
 case '/':
  m->factor_op = *l++;
  break;
 default:
  file_magwarn(data_flow, ms, "Unknown factor op `%c'", *l);
  return -1;
 }
 {while (
(((
(unsigned char) *l
) & ~0x7f) == 0) 
&& 
((*__ctype_b_loc ())[(int) ((
(unsigned char) *l
))] & (unsigned short int) _ISspace)
) ++l;};
 factor = strtoul(l, &el, 0);
 if (factor > 255) {
  file_magwarn(data_flow, ms, "Too large factor `%lu'", factor);
  goto out;
 }
 if (*el && !
            ((*__ctype_b_loc ())[(int) ((
            (unsigned char)*el
            ))] & (unsigned short int) _ISspace)
                                       ) {
  file_magwarn(data_flow, ms, "Bad factor `%s'", l);
  goto out;
 }
 m->factor = (uint8_t)factor;
 if (m->factor == 0 && m->factor_op == '/') {
  file_magwarn(data_flow, ms, "Cannot have factor op `%c' and factor %u",
      m->factor_op, m->factor);
  goto out;
 }
 return 0;
out:
 m->factor_op = '\0';
 m->factor = 0;
 return -1;
}

static int
goodchar(int *data_flow, unsigned char x, const char *extra)
{
 return (
        (((
        x
        ) & ~0x7f) == 0) 
                   && 
                      ((*__ctype_b_loc ())[(int) ((
                      x
                      ))] & (unsigned short int) _ISalnum)
                                ) || strchr(extra, x);
}

static int
parse_extra(int *data_flow, struct magic_set *ms, struct magic_entry *me, const char *line,
    off_t off, size_t len, const char *name, const char *extra, int nt)
{
 size_t i;
 const char *l = line;
 struct magic *m = &me->mp[me->cont_count == 0 ? 0 : me->cont_count - 1];
 char *buf = (char *)m + off;

 if (buf[0] != '\0') {
  len = nt ? strlen(buf) : len;
  file_magwarn(data_flow, ms, "Current entry already has a %s type "
      "`%.*s', new type `%s'", name, (int)len, buf, l);
  return -1;
 }

 if (*m->desc == '\0') {
  file_magwarn(data_flow, ms, "Current entry does not yet have a "
      "description for adding a %s type", name);
  return -1;
 }

 {while (
(((
(unsigned char) *l
) & ~0x7f) == 0) 
&& 
((*__ctype_b_loc ())[(int) ((
(unsigned char) *l
))] & (unsigned short int) _ISspace)
) ++l;};
 for (i = 0; *l && i < len && goodchar(data_flow, *l, extra); buf[i++] = *l++)
  continue;

 if (i == len && *l) {
  if (nt)
   buf[len - 1] = '\0';
  if (ms->flags & 0x000040)
   file_magwarn(data_flow, ms, "%s type `%s' truncated %"
       "z" "u", name, line, i);
 } else {
  if (!
      ((*__ctype_b_loc ())[(int) ((
      (unsigned char)*l
      ))] & (unsigned short int) _ISspace) 
                                 && !goodchar(data_flow, *l, extra))
   file_magwarn(data_flow, ms, "%s type `%s' has bad char '%c'",
       name, line, *l);
  if (nt)
   buf[i] = '\0';
 }

 if (i > 0)
  return 0;

 file_magerror(data_flow, ms, "Bad magic entry '%s'", line);
 return -1;
}





static int
parse_apple(int *data_flow, struct magic_set *ms, struct magic_entry *me, const char *line)
{
 struct magic *m = &me->mp[0];

 return parse_extra(data_flow, ms, me, line, 
                                 __builtin_offsetof (
                                 struct magic
                                 , 
                                 apple
                                 )
                                                              ,
     sizeof(m->apple), "APPLE", "!+-./", 0);
}





static int
parse_mime(int *data_flow, struct magic_set *ms, struct magic_entry *me, const char *line)
{
 struct magic *m = &me->mp[0];

 return parse_extra(data_flow, ms, me, line, 
                                 __builtin_offsetof (
                                 struct magic
                                 , 
                                 mimetype
                                 )
                                                                 ,
     sizeof(m->mimetype), "MIME", "+-/.", 1);
}

static int
check_format_type(int *data_flow, const char *ptr, int type)
{
 int quad = 0, h;
 if (*ptr == '\0') {

  return -1;
 }

 switch (file_formats[type]) {
 case 3:
  quad = 1;

 case 1:
  if (quad == 0) {
   switch (type) {
   case 1:
    h = 2;
    break;
   case 2:
   case 7:
   case 10:
    h = 1;
    break;
   case 4:
   case 8:
   case 11:
   case 23:
   case 40:
   case 39:
   case 41:
    h = 0;
    break;
   default:
    abort();
   }
  } else
   h = 0;
  if (*ptr == '-')
   ptr++;
  if (*ptr == '.')
   ptr++;
  while (
        ((*__ctype_b_loc ())[(int) ((
        (unsigned char)*ptr
        ))] & (unsigned short int) _ISdigit)
                                    ) ptr++;
  if (*ptr == '.')
   ptr++;
  while (
        ((*__ctype_b_loc ())[(int) ((
        (unsigned char)*ptr
        ))] & (unsigned short int) _ISdigit)
                                    ) ptr++;
  if (quad) {
   if (*ptr++ != 'l')
    return -1;
   if (*ptr++ != 'l')
    return -1;
  }

  switch (*ptr++) {
  case 'c':
   return h != 2 ? -1 : 0;
  case 'i':
  case 'd':
  case 'u':
  case 'o':
  case 'x':
  case 'X':



   return 0;

  default:
   return -1;
  }

 case 4:
 case 5:
  if (*ptr == '-')
   ptr++;
  if (*ptr == '.')
   ptr++;
  while (
        ((*__ctype_b_loc ())[(int) ((
        (unsigned char)*ptr
        ))] & (unsigned short int) _ISdigit)
                                    ) ptr++;
  if (*ptr == '.')
   ptr++;
  while (
        ((*__ctype_b_loc ())[(int) ((
        (unsigned char)*ptr
        ))] & (unsigned short int) _ISdigit)
                                    ) ptr++;

  switch (*ptr++) {
  case 'e':
  case 'E':
  case 'f':
  case 'F':
  case 'g':
  case 'G':
   return 0;

  default:
   return -1;
  }


 case 2:
  if (*ptr == '-')
   ptr++;
  while (
        ((*__ctype_b_loc ())[(int) ((
        (unsigned char )*ptr
        ))] & (unsigned short int) _ISdigit)
                                     )
   ptr++;
  if (*ptr == '.') {
   ptr++;
   while (
         ((*__ctype_b_loc ())[(int) ((
         (unsigned char )*ptr
         ))] & (unsigned short int) _ISdigit)
                                      )
    ptr++;
  }

  switch (*ptr++) {
  case 's':
   return 0;
  default:
   return -1;
  }

 default:

  abort();
 }

 return -1;
}





static int
check_format(int *data_flow, struct magic_set *ms, struct magic *m)
{
 char *ptr;

 for (ptr = m->desc; *ptr; ptr++)
  if (*ptr == '%')
   break;
 if (*ptr == '\0') {

  return 1;
 }

 
((
file_nformats == file_nnames
) ? (void) (0) : __assert_fail (
"file_nformats == file_nnames"
, "apprentice.c", 2455, __PRETTY_FUNCTION__))
                                    ;

 if (m->type >= file_nformats) {
  file_magwarn(data_flow, ms, "Internal error inconsistency between "
      "m->type and format strings");
  return -1;
 }
 if (file_formats[m->type] == 0) {
  file_magwarn(data_flow, ms, "No format string for `%s' with description "
      "`%s'", m->desc, file_names[m->type]);
  return -1;
 }

 ptr++;
 if (check_format_type(data_flow, ptr, m->type) == -1) {




  file_magwarn(data_flow, ms, "Printf format `%c' is not valid for type "
      "`%s' in description `%s'", *ptr ? *ptr : '?',
      file_names[m->type], m->desc);
  return -1;
 }

 for (; *ptr; ptr++) {
  if (*ptr == '%') {
   file_magwarn(data_flow, ms,
       "Too many format strings (should have at most one) "
       "for `%s' with description `%s'",
       file_names[m->type], m->desc);
   return -1;
  }
 }
 return 0;
}






static int
getvalue(int *data_flow, struct magic_set *ms, struct magic *m, const char **p, int action)
{
 switch (m->type) {
 case 18:
 case 19:
 case 5:
 case 13:
 case 17:
 case 20:
 case 45:
 case 46:
  *p = getstr(data_flow, ms, m, *p, action == 2);
  if (*p == 
           ((void *)0)
               ) {
   if (ms->flags & 0x000040)
    file_magwarn(data_flow, ms, "cannot get string from `%s'",
        m->value.s);
   return -1;
  }
  if (m->type == 17) {
   file_regex_t rx;
   int rc = file_regcomp(data_flow, &rx, m->value.s, 
                                         1
                                                     );
   if (rc) {
    if (ms->flags & 0x000040)
     file_regerror(data_flow, &rx, rc, ms);
   }
   file_regfree(data_flow, &rx);
   return rc ? -1 : 0;
  }
  return 0;
 case 33:
 case 34:
 case 35:
  if (m->reln != 'x') {
   char *ep;

   m->value.f = strtof(*p, &ep);



   *p = ep;
  }
  return 0;
 case 36:
 case 37:
 case 38:
  if (m->reln != 'x') {
   char *ep;
   m->value.d = strtod(*p, &ep);
   *p = ep;
  }
  return 0;
 default:
  if (m->reln != 'x') {
   char *ep;
   m->value.q = file_signextend(data_flow, ms, m,
       (uint64_t)strtoull(*p, &ep, 0));
   *p = ep;
   eatsize(data_flow, p);
  }
  return 0;
 }
}







static const char *
getstr(int *data_flow, struct magic_set *ms, struct magic *m, const char *s, int warn)
{
 const char *origs = s;
 char *p = m->value.s;
 size_t plen = sizeof(m->value.s);
 char *origp = p;
 char *pmax = p + plen - 1;
 int c;
 int val;

 while ((c = *s++) != '\0') {
  if (
     ((*__ctype_b_loc ())[(int) ((
     (unsigned char) c
     ))] & (unsigned short int) _ISspace)
                               )
   break;
  if (p >= pmax) {
   file_error(data_flow, ms, 0, "string too long: `%s'", origs);
   return 
         ((void *)0)
             ;
  }
  if (c == '\\') {
   switch(c = *s++) {

   case '\0':
    if (warn)
     file_magwarn(data_flow, ms, "incomplete escape");
    goto out;

   case '\t':
    if (warn) {
     file_magwarn(data_flow, ms,
         "escaped tab found, use \\t instead");
     warn = 0;
    }

   default:
    if (warn) {
     if (
        ((*__ctype_b_loc ())[(int) ((
        (unsigned char)c
        ))] & (unsigned short int) _ISprint)
                                 ) {


      if (strchr("<>&^=!", c) == 
                                ((void *)0)
          
         && (m->type != 17 ||
          strchr("[]().*?^$|{}", c)
          == 
            ((void *)0)
                )) {
       file_magwarn(data_flow, ms, "no "
           "need to escape "
           "`%c'", c);
      }
     } else {
      file_magwarn(data_flow, ms,
          "unknown escape sequence: "
          "\\%03o", c);
     }
    }


   case ' ':
   case '>':
   case '<':
   case '&':
   case '^':
   case '=':
   case '!':

   case '\\':
    *p++ = (char) c;
    break;

   case 'a':
    *p++ = '\a';
    break;

   case 'b':
    *p++ = '\b';
    break;

   case 'f':
    *p++ = '\f';
    break;

   case 'n':
    *p++ = '\n';
    break;

   case 'r':
    *p++ = '\r';
    break;

   case 't':
    *p++ = '\t';
    break;

   case 'v':
    *p++ = '\v';
    break;


   case '0':
   case '1':
   case '2':
   case '3':
   case '4':
   case '5':
   case '6':
   case '7':
    val = c - '0';
    c = *s++;
    if (c >= '0' && c <= '7') {
     val = (val << 3) | (c - '0');
     c = *s++;
     if (c >= '0' && c <= '7')
      val = (val << 3) | (c-'0');
     else
      --s;
    }
    else
     --s;
    *p++ = (char)val;
    break;


   case 'x':
    val = 'x';
    c = hextoint(data_flow, *s++);
    if (c >= 0) {
     val = c;
     c = hextoint(data_flow, *s++);
     if (c >= 0)
      val = (val << 4) + c;
     else
      --s;
    } else
     --s;
    *p++ = (char)val;
    break;
   }
  } else
   *p++ = (char)c;
 }
out:
 *p = '\0';
 m->vallen = (unsigned char)((p - origp));
 if (m->type == 13)
  m->vallen += (unsigned char)file_pstring_length_size(data_flow, m);
 return s;
}



static int
hextoint(int *data_flow, int c)
{
 if (!
     (((
     (unsigned char) c
     ) & ~0x7f) == 0)
                               )
  return -1;
 if (
    ((*__ctype_b_loc ())[(int) ((
    (unsigned char) c
    ))] & (unsigned short int) _ISdigit)
                              )
  return c - '0';
 if ((c >= 'a') && (c <= 'f'))
  return c + 10 - 'a';
 if (( c>= 'A') && (c <= 'F'))
  return c + 10 - 'A';
 return -1;
}





__attribute__ ((__visibility__("hidden"))) void
file_showstr(int *data_flow, FILE *fp, const char *s, size_t len)
{
 char c;

 for (;;) {
  if (len == ~0U) {
   c = *s++;
   if (c == '\0')
    break;
  }
  else {
   if (len-- == 0)
    break;
   c = *s++;
  }
  if (c >= 040 && c <= 0176)
   (void) fputc(c, fp);
  else {
   (void) fputc('\\', fp);
   switch (c) {
   case '\a':
    (void) fputc('a', fp);
    break;

   case '\b':
    (void) fputc('b', fp);
    break;

   case '\f':
    (void) fputc('f', fp);
    break;

   case '\n':
    (void) fputc('n', fp);
    break;

   case '\r':
    (void) fputc('r', fp);
    break;

   case '\t':
    (void) fputc('t', fp);
    break;

   case '\v':
    (void) fputc('v', fp);
    break;

   default:
    (void) fprintf(fp, "%.3o", c & 0377);
    break;
   }
  }
 }
}




static void
eatsize(int *data_flow, const char **p)
{
 const char *l = *p;

 if ((
    ((*__ctype_b_loc ())[(int) ((
    (unsigned char) (*l)
    ))] & (unsigned short int) _ISupper) 
    ? tolower((unsigned char) (*l)) : (*l)) == 'u')
  l++;

 switch ((
        ((*__ctype_b_loc ())[(int) ((
        (unsigned char) (*l)
        ))] & (unsigned short int) _ISupper) 
        ? tolower((unsigned char) (*l)) : (*l))) {
 case 'l':
 case 's':
 case 'h':
 case 'b':
 case 'c':
  l++;

 default:
  break;
 }

 *p = l;
}




static struct magic_map *
apprentice_buf(int *data_flow, struct magic_set *ms, struct magic *buf, size_t len)
{
 struct magic_map *map;

 if ((map = (struct magic_map *)(calloc(1, sizeof(*map)))) == 
                                                                 ((void *)0)
                                                                     ) {
  file_oomem(data_flow, ms, sizeof(*map));
  return 
        ((void *)0)
            ;
 }
 map->len = len;
 map->p = buf;
 map->type = 2;
 if (check_buffer(data_flow, ms, map, "buffer") != 0) {
  apprentice_unmap(data_flow, map);
  return 
        ((void *)0)
            ;
 }
 return map;
}





static struct magic_map *
apprentice_map(int *data_flow, struct magic_set *ms, const char *fn)
{
 int fd;
 struct stat st;
 char *dbname = 
               ((void *)0)
                   ;
 struct magic_map *map;

 fd = -1;
 if ((map = (struct magic_map *)(calloc(1, sizeof(*map)))) == 
                                                                 ((void *)0)
                                                                     ) {
  file_oomem(data_flow, ms, sizeof(*map));
  goto error;
 }

 dbname = mkdbname(data_flow, ms, fn, 0);
 if (dbname == 
              ((void *)0)
                  )
  goto error;

 if ((fd = open(dbname, 
                       00
                               |0)) == -1)
  goto error;

 if (fstat(fd, &st) == -1) {
  file_error(data_flow, ms, 
                (*__errno_location ())
                     , "cannot stat `%s'", dbname);
  goto error;
 }
 if (st.st_size < 8 || st.st_size > 0x7fffffffL) {
  file_error(data_flow, ms, 0, "file `%s' is too %s", dbname,
      st.st_size < 8 ? "small" : "large");
  goto error;
 }

 map->len = (size_t)st.st_size;

 if ((map->p = mmap(0, (size_t)st.st_size, 
                                          0x1
                                                   |
                                                    0x2
                                                              ,
     
    0x02
               |
                0
                        , fd, (off_t)0)) == 
                                            ((void *) -1)
                                                      ) {
  file_error(data_flow, ms, 
                (*__errno_location ())
                     , "cannot map `%s'", dbname);
  goto error;
 }
 map->type = 0;
 (void)close(fd);
 fd = -1;

 if (check_buffer(data_flow, ms, map, dbname) != 0)
  goto error;

 free(dbname);
 return map;

error:
 if (fd != -1)
  (void)close(fd);
 apprentice_unmap(data_flow, map);
 free(dbname);
 return 
       ((void *)0)
           ;
}

static int
check_buffer(int *data_flow, struct magic_set *ms, struct magic_map *map, const char *dbname)
{
 uint32_t *ptr;
 uint32_t entries, nentries;
 uint32_t version;
 int i, needsbyteswap;

 ptr = (uint32_t *)(map->p);
 if (*ptr != 0xF11E041C) {
  if (swap4(data_flow, *ptr) != 0xF11E041C) {
   file_error(data_flow, ms, 0, "bad magic in `%s'", dbname);
   return -1;
  }
  needsbyteswap = 1;
 } else
  needsbyteswap = 0;
 if (needsbyteswap)
  version = swap4(data_flow, ptr[1]);
 else
  version = ptr[1];
 if (version != 12) {
  file_error(data_flow, ms, 0, "File %s supports only version %d magic "
      "files. `%s' is version %d", "5.22",
      12, dbname, version);
  return -1;
 }
 entries = (uint32_t)(map->len / sizeof(struct magic));
 if ((entries * sizeof(struct magic)) != map->len) {
  file_error(data_flow, ms, 0, "Size of `%s' %" "z" "u is not "
      "a multiple of %" "z" "u",
      dbname, map->len, sizeof(struct magic));
  return -1;
 }
 map->magic[0] = (struct magic *)(map->p) + 1;
 nentries = 0;
 for (i = 0; i < 2; i++) {
  if (needsbyteswap)
   map->nmagic[i] = swap4(data_flow, ptr[i + 2]);
  else
   map->nmagic[i] = ptr[i + 2];
  if (i != 2 - 1)
   map->magic[i + 1] = map->magic[i] + map->nmagic[i];
  nentries += map->nmagic[i];
 }
 if (entries != nentries + 1) {
  file_error(data_flow, ms, 0, "Inconsistent entries in `%s' %u != %u",
      dbname, entries, nentries + 1);
  return -1;
 }
 if (needsbyteswap)
  for (i = 0; i < 2; i++)
   byteswap(data_flow, map->magic[i], map->nmagic[i]);
 return 0;
}




static int
apprentice_compile(int *data_flow, struct magic_set *ms, struct magic_map *map, const char *fn)
{
 static const size_t nm = sizeof(*map->nmagic) * 2;
 static const size_t m = sizeof(**map->magic);
 int fd = -1;
 size_t len;
 char *dbname;
 int rv = -1;
 uint32_t i;
 union {
  struct magic m;
  uint32_t h[2 + 2];
 } hdr;

 dbname = mkdbname(data_flow, ms, fn, 1);

 if (dbname == 
              ((void *)0)
                  )
  goto out;

 if ((fd = open(dbname, 
                       01
                               |
                                0100
                                       |
                                        01000
                                               |0, 0644)) == -1)
 {
  file_error(data_flow, ms, 
                (*__errno_location ())
                     , "cannot open `%s'", dbname);
  goto out;
 }
 memset(&hdr, 0, sizeof(hdr));
 hdr.h[0] = 0xF11E041C;
 hdr.h[1] = 12;
 memcpy(hdr.h + 2, map->nmagic, nm);

 if (write(fd, &hdr, sizeof(hdr)) != (ssize_t)sizeof(hdr)) {
  file_error(data_flow, ms, 
                (*__errno_location ())
                     , "error writing `%s'", dbname);
  goto out;
 }

 for (i = 0; i < 2; i++) {
  len = m * map->nmagic[i];
  if (write(fd, map->magic[i], len) != (ssize_t)len) {
   file_error(data_flow, ms, 
                 (*__errno_location ())
                      , "error writing `%s'", dbname);
   goto out;
  }
 }

 if (fd != -1)
  (void)close(fd);
 rv = 0;
out:
 free(dbname);
 return rv;
}

static const char ext[] = ".mgc";



static char *
mkdbname(int *data_flow, struct magic_set *ms, const char *fn, int strip)
{
 const char *p, *q;
 char *buf;

 if (strip) {
  if ((p = strrchr(fn, '/')) != 
                               ((void *)0)
                                   )
   fn = ++p;
 }

 for (q = fn; *q; q++)
  continue;

 for (p = ext + sizeof(ext) - 1; p >= ext && q >= fn; p--, q--)
  if (*p != *q)
   break;


 if (p >= ext)
  while (*q)
   q++;

 q++;

 if (ms->flags & (0x000010|0x000400)) {
  if (asprintf(data_flow, &buf, "%.*s.mime%s", (int)(q - fn), fn, ext) < 0)
   return 
         ((void *)0)
             ;
  if (access(buf, 
                 4
                     ) != -1) {
   ms->flags &= 0x000010;
   return buf;
  }
  free(buf);
 }
 if (asprintf(data_flow, &buf, "%.*s%s", (int)(q - fn), fn, ext) < 0)
  return 
        ((void *)0)
            ;


 if (strstr(p, ".mime") != 
                          ((void *)0)
                              )
  ms->flags &= 0x000010;
 return buf;
}




static void
byteswap(int *data_flow, struct magic *magic, uint32_t nmagic)
{
 uint32_t i;
 for (i = 0; i < nmagic; i++)
  bs1(data_flow, &magic[i]);
}




static uint16_t
swap2(int *data_flow, uint16_t sv)
{
 uint16_t rv;
 uint8_t *s = (uint8_t *)(void *)&sv;
 uint8_t *d = (uint8_t *)(void *)&rv;
 d[0] = s[1];
 d[1] = s[0];
 return rv;
}




static uint32_t
swap4(int *data_flow, uint32_t sv)
{
 uint32_t rv;
 uint8_t *s = (uint8_t *)(void *)&sv;
 uint8_t *d = (uint8_t *)(void *)&rv;
 d[0] = s[3];
 d[1] = s[2];
 d[2] = s[1];
 d[3] = s[0];
 return rv;
}




static uint64_t
swap8(int *data_flow, uint64_t sv)
{
 uint64_t rv;
 uint8_t *s = (uint8_t *)(void *)&sv;
 uint8_t *d = (uint8_t *)(void *)&rv;
 d[0] = s[7];
 d[1] = s[6];
 d[2] = s[5];
 d[3] = s[4];
 d[4] = s[3];
 d[5] = s[2];
 d[6] = s[1];
 d[7] = s[0];

 return rv;
}




static void
bs1(int *data_flow, struct magic *m)
{
 m->cont_level = swap2(data_flow, m->cont_level);
 m->offset = swap4(data_flow, (uint32_t)m->offset);
 m->in_offset = swap4(data_flow, (uint32_t)m->in_offset);
 m->lineno = swap4(data_flow, (uint32_t)m->lineno);
 if (((m->type) == 5 || (m->type) == 13 || (m->type) == 18 || (m->type) == 19 || (m->type) == 17 || (m->type) == 20 || (m->type) == 41 || (m->type) == 45 || (m->type) == 46)) {
  m->_u._s._count = swap4(data_flow, m->_u._s._count);
  m->_u._s._flags = swap4(data_flow, m->_u._s._flags);
 }
 else {
  m->value.q = swap8(data_flow, m->value.q);
  m->_u._mask = swap8(data_flow, m->_u._mask);
 }
}

__attribute__ ((__visibility__("hidden"))) size_t
file_pstring_length_size(int *data_flow, const struct magic *m)
{
 switch (m->_u._s._flags & ((1 << (7))|(1 << (9))|(1 << (8))|(1 << (11))|(1 << (10)))) {
 case (1 << (7)):
  return 1;
 case (1 << (9)):
 case (1 << (8)):
  return 2;
 case (1 << (11)):
 case (1 << (10)):
  return 4;
 default:
  abort();
  return 1;
 }
}
__attribute__ ((__visibility__("hidden"))) size_t
file_pstring_get_length(int *data_flow, const struct magic *m, const char *s)
{
 size_t len = 0;

 switch (m->_u._s._flags & ((1 << (7))|(1 << (9))|(1 << (8))|(1 << (11))|(1 << (10)))) {
 case (1 << (7)):
  len = *s;
  break;
 case (1 << (9)):
  len = (s[1] << 8) | s[0];
  break;
 case (1 << (8)):
  len = (s[0] << 8) | s[1];
  break;
 case (1 << (11)):
  len = (s[3] << 24) | (s[2] << 16) | (s[1] << 8) | s[0];
  break;
 case (1 << (10)):
  len = (s[0] << 24) | (s[1] << 16) | (s[2] << 8) | s[3];
  break;
 default:
  abort();
 }

 if (m->_u._s._flags & (1 << (12)))
  len -= file_pstring_length_size(data_flow, m);

 return len;
}

__attribute__ ((__visibility__("hidden"))) int
file_magicfind(int *data_flow, struct magic_set *ms, const char *name, struct mlist *v)
{
 uint32_t i, j;
 struct mlist *mlist, *ml;

 mlist = ms->mlist[1];

 for (ml = mlist->next; ml != mlist; ml = ml->next) {
  struct magic *ma = ml->magic;
  uint32_t nma = ml->nmagic;
  for (i = 0; i < nma; i++) {
   if (ma[i].type != 45)
    continue;
   if (strcmp(ma[i].value.s, name) == 0) {
    v->magic = &ma[i];
    for (j = i + 1; j < nma; j++)
        if (ma[j].cont_level == 0)
         break;
    v->nmagic = j - i;
    return 0;
   }
  }
 }
 return -1;
}

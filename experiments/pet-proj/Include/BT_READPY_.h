# 1 "Python.h"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "Python.h"






# 1 "patchlevel.h" 1
# 8 "Python.h" 2
# 1 "pyconfig.h" 1
# 68 "pyconfig.h"
# 1 "c:\\mingw\\include\\io.h" 1 3
# 38 "c:\\mingw\\include\\io.h" 3
       
# 39 "c:\\mingw\\include\\io.h" 3
# 51 "c:\\mingw\\include\\io.h" 3
# 1 "c:\\mingw\\include\\_mingw.h" 1 3
# 55 "c:\\mingw\\include\\_mingw.h" 3
       
# 56 "c:\\mingw\\include\\_mingw.h" 3
# 66 "c:\\mingw\\include\\_mingw.h" 3
# 1 "c:\\mingw\\include\\msvcrtver.h" 1 3
# 35 "c:\\mingw\\include\\msvcrtver.h" 3
       
# 36 "c:\\mingw\\include\\msvcrtver.h" 3
# 67 "c:\\mingw\\include\\_mingw.h" 2 3






# 1 "c:\\mingw\\include\\w32api.h" 1 3
# 35 "c:\\mingw\\include\\w32api.h" 3
       
# 36 "c:\\mingw\\include\\w32api.h" 3
# 59 "c:\\mingw\\include\\w32api.h" 3
# 1 "c:\\mingw\\include\\sdkddkver.h" 1 3
# 35 "c:\\mingw\\include\\sdkddkver.h" 3
       
# 36 "c:\\mingw\\include\\sdkddkver.h" 3
# 60 "c:\\mingw\\include\\w32api.h" 2 3
# 74 "c:\\mingw\\include\\_mingw.h" 2 3
# 52 "c:\\mingw\\include\\io.h" 2 3




# 1 "c:\\mingw\\include\\sys\\types.h" 1 3
# 34 "c:\\mingw\\include\\sys\\types.h" 3
       
# 35 "c:\\mingw\\include\\sys\\types.h" 3
# 62 "c:\\mingw\\include\\sys\\types.h" 3
  
# 62 "c:\\mingw\\include\\sys\\types.h" 3
 typedef long __off32_t;




  typedef __off32_t _off_t;







  typedef _off_t off_t;
# 91 "c:\\mingw\\include\\sys\\types.h" 3
  typedef long long __off64_t;






  typedef __off64_t off64_t;
# 115 "c:\\mingw\\include\\sys\\types.h" 3
  typedef int _ssize_t;







  typedef _ssize_t ssize_t;
# 139 "c:\\mingw\\include\\sys\\types.h" 3
  typedef long __time32_t;
  typedef long long __time64_t;
# 149 "c:\\mingw\\include\\sys\\types.h" 3
   typedef __time32_t time_t;
# 174 "c:\\mingw\\include\\sys\\types.h" 3
# 1 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 1 3 4
# 149 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
typedef int ptrdiff_t;
# 216 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
typedef unsigned int size_t;
# 328 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
typedef short unsigned int wchar_t;
# 175 "c:\\mingw\\include\\sys\\types.h" 2 3
# 184 "c:\\mingw\\include\\sys\\types.h" 3
typedef unsigned int _dev_t;
# 195 "c:\\mingw\\include\\sys\\types.h" 3
typedef short _ino_t;
typedef unsigned short _mode_t;
typedef int _pid_t;
typedef int _sigset_t;
# 207 "c:\\mingw\\include\\sys\\types.h" 3
typedef _dev_t dev_t;
typedef _ino_t ino_t;
typedef _mode_t mode_t;
typedef _pid_t pid_t;
typedef _sigset_t sigset_t;


typedef long long fpos64_t;






typedef unsigned long useconds_t __attribute__((__deprecated__));
# 57 "c:\\mingw\\include\\io.h" 2 3
# 67 "c:\\mingw\\include\\io.h" 3
# 1 "c:\\mingw\\include\\stdint.h" 1 3
# 34 "c:\\mingw\\include\\stdint.h" 3
       
# 35 "c:\\mingw\\include\\stdint.h" 3
# 106 "c:\\mingw\\include\\stdint.h" 3
 typedef int __intptr_t;

typedef __intptr_t intptr_t;
# 68 "c:\\mingw\\include\\io.h" 2 3
# 104 "c:\\mingw\\include\\io.h" 3
typedef unsigned long _fsize_t;
# 174 "c:\\mingw\\include\\io.h" 3

# 184 "c:\\mingw\\include\\io.h" 3
struct _finddata_t { unsigned attrib; time_t time_create; time_t time_access; time_t time_write; _fsize_t size; char name[(260)]; };
struct _finddatai64_t { unsigned attrib; time_t time_create; time_t time_access; time_t time_write; long long size; char name[(260)]; };
# 200 "c:\\mingw\\include\\io.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _findfirst (const char *, struct _finddata_t *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
int _findnext (intptr_t, struct _finddata_t *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _findfirsti64 (const char *, struct _finddatai64_t *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
int _findnexti64 (intptr_t, struct _finddatai64_t *);
# 223 "c:\\mingw\\include\\io.h" 3
struct __finddata64_t { unsigned attrib; __time64_t time_create; __time64_t time_access; __time64_t time_write; long long size; char name[(260)]; };







 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _findfirst64 (const char *, struct __finddata64_t *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
int _findnext64 (intptr_t, struct __finddata64_t *);
# 341 "c:\\mingw\\include\\io.h" 3
struct _wfinddata_t { unsigned attrib; time_t time_create; time_t time_access; time_t time_write; _fsize_t size; wchar_t name[(260)]; };
struct _wfinddatai64_t { unsigned attrib; time_t time_create; time_t time_access; time_t time_write; long long size; wchar_t name[(260)]; };







 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wfindfirst (const wchar_t *, struct _wfinddata_t *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
int _wfindnext (intptr_t, struct _wfinddata_t *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wfindfirsti64 (const wchar_t *, struct _wfinddatai64_t *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
int _wfindnexti64 (intptr_t, struct _wfinddatai64_t *);







struct __wfinddata64_t { unsigned attrib; __time64_t time_create; __time64_t time_access; __time64_t time_write; long long size; wchar_t name[(260)]; };
# 377 "c:\\mingw\\include\\io.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wfindfirst64 (const wchar_t *, struct __wfinddata64_t *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
int _wfindnext64 (intptr_t, struct __wfinddata64_t *);
# 484 "c:\\mingw\\include\\io.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _findclose (intptr_t);





 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _chdir (const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_getcwd (char *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _mkdir (const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_mktemp (char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _rmdir (const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _chmod (const char *, int);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) long long _filelengthi64 (int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) long long _lseeki64 (int, long long, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) long long _telli64 (int);


extern inline __attribute__((__gnu_inline__)) __off64_t lseek64 (int, __off64_t, int);
extern inline __attribute__((__gnu_inline__))
__off64_t lseek64 (int fd, __off64_t offset, int whence)
{ return _lseeki64 (fd, (long long)(offset), whence); }







 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int chdir (const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *getcwd (char *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int mkdir (const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *mktemp (char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int rmdir (const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int chmod (const char *, int);






# 551 "c:\\mingw\\include\\io.h" 3





 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _access (const char *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _chsize (int, long);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _close (int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _commit (int);




 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _creat (const char *, int);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _dup (int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _dup2 (int, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) long _filelength (int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) long _get_osfhandle (int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _isatty (int);
# 579 "c:\\mingw\\include\\io.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _eof (int);





 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _locking (int, int, long);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) long _lseek (int, long, int);







 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _open (const char *, int, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _open_osfhandle (intptr_t, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _pipe (int *, unsigned int, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _read (int, void *, unsigned int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _setmode (int, int);






 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int remove (const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int rename (const char *, const char *);






 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _sopen (const char *, int, int, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) long _tell (int);




 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _umask (int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _unlink (const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _write (int, const void *, unsigned int);
# 636 "c:\\mingw\\include\\io.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _waccess (const wchar_t *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wchmod (const wchar_t *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wcreat (const wchar_t *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wunlink (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wopen (const wchar_t *, int, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wsopen (const wchar_t *, int, int, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wmktemp (wchar_t *);
# 651 "c:\\mingw\\include\\io.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int access (const char*, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int chsize (int, long );
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int close (int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int creat (const char*, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int dup (int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int dup2 (int, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int eof (int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) long filelength (int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int isatty (int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) long lseek (int, long, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int open (const char*, int, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int read (int, void*, unsigned int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int setmode (int, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int sopen (const char*, int, int, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) long tell (int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int umask (int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int unlink (const char*);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int write (int, const void*, unsigned int);
# 701 "c:\\mingw\\include\\io.h" 3

# 69 "pyconfig.h" 2
# 295 "pyconfig.h"
# 1 "c:\\mingw\\include\\stdio.h" 1 3
# 38 "c:\\mingw\\include\\stdio.h" 3
       
# 39 "c:\\mingw\\include\\stdio.h" 3
# 69 "c:\\mingw\\include\\stdio.h" 3
# 1 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 1 3 4
# 357 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
typedef short unsigned int wint_t;
# 70 "c:\\mingw\\include\\stdio.h" 2 3
# 94 "c:\\mingw\\include\\stdio.h" 3
# 1 "c:\\mingw\\include\\sys/types.h" 1 3
# 95 "c:\\mingw\\include\\stdio.h" 2 3







# 1 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stdarg.h" 1 3 4
# 40 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 103 "c:\\mingw\\include\\stdio.h" 2 3
# 210 "c:\\mingw\\include\\stdio.h" 3
typedef struct _iobuf
{
  char *_ptr;
  int _cnt;
  char *_base;
  int _flag;
  int _file;
  int _charbuf;
  int _bufsiz;
  char *_tmpfname;
} FILE;
# 239 "c:\\mingw\\include\\stdio.h" 3
extern __attribute__((__dllimport__)) FILE _iob[];
# 252 "c:\\mingw\\include\\stdio.h" 3








 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * fopen (const char *, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * freopen (const char *, const char *, FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fflush (FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fclose (FILE *);






 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int remove (const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int rename (const char *, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * tmpfile (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char * tmpnam (char *);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_tempnam (const char *, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _rmtmp (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _unlink (const char *);
# 289 "c:\\mingw\\include\\stdio.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char * tempnam (const char *, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int rmtmp (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int unlink (const char *);



 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int setvbuf (FILE *, char *, int, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void setbuf (FILE *, char *);
# 342 "c:\\mingw\\include\\stdio.h" 3
extern int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__mingw_printf__,2,3))) __mingw_fprintf(FILE*, const char*, ...);
extern int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__mingw_printf__,1,2))) __mingw_printf(const char*, ...);
extern int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__mingw_printf__,2,3))) __mingw_sprintf(char*, const char*, ...);
extern int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__mingw_printf__,3,4))) __mingw_snprintf(char*, size_t, const char*, ...);
extern int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__mingw_printf__,2,0))) __mingw_vfprintf(FILE*, const char*, __builtin_va_list);
extern int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__mingw_printf__,1,0))) __mingw_vprintf(const char*, __builtin_va_list);
extern int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__mingw_printf__,2,0))) __mingw_vsprintf(char*, const char*, __builtin_va_list);
extern int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__mingw_printf__,3,0))) __mingw_vsnprintf(char*, size_t, const char*, __builtin_va_list);
# 376 "c:\\mingw\\include\\stdio.h" 3
extern unsigned int _mingw_output_format_control( unsigned int, unsigned int );
# 453 "c:\\mingw\\include\\stdio.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fprintf (FILE *, const char *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int printf (const char *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int sprintf (char *, const char *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int vfprintf (FILE *, const char *, __builtin_va_list);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int vprintf (const char *, __builtin_va_list);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int vsprintf (char *, const char *, __builtin_va_list);
# 478 "c:\\mingw\\include\\stdio.h" 3
 int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__ms_printf__,2,3))) __msvcrt_fprintf(FILE *, const char *, ...);
 int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__ms_printf__,1,2))) __msvcrt_printf(const char *, ...);
 int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__ms_printf__,2,3))) __msvcrt_sprintf(char *, const char *, ...);
 int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__ms_printf__,2,0))) __msvcrt_vfprintf(FILE *, const char *, __builtin_va_list);
 int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__ms_printf__,1,0))) __msvcrt_vprintf(const char *, __builtin_va_list);
 int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__ms_printf__,2,0))) __msvcrt_vsprintf(char *, const char *, __builtin_va_list);






 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _snprintf (char *, size_t, const char *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _vsnprintf (char *, size_t, const char *, __builtin_va_list);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _vscprintf (const char *, __builtin_va_list);
# 501 "c:\\mingw\\include\\stdio.h" 3
__attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__mingw_printf__,3,4)))
int snprintf (char *, size_t, const char *, ...);

__attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__mingw_printf__,3,0)))
int vsnprintf (char *, size_t, const char *, __builtin_va_list);

__attribute__((__cdecl__)) __attribute__((__nothrow__))
int vscanf (const char * __restrict__, __builtin_va_list);

__attribute__((__cdecl__)) __attribute__((__nothrow__))
int vfscanf (FILE * __restrict__, const char * __restrict__, __builtin_va_list);

__attribute__((__cdecl__)) __attribute__((__nothrow__))
int vsscanf (const char * __restrict__, const char * __restrict__, __builtin_va_list);
# 646 "c:\\mingw\\include\\stdio.h" 3
__attribute__((__cdecl__)) __attribute__((__nothrow__)) ssize_t
getdelim (char ** __restrict__, size_t * __restrict__, int, FILE * __restrict__);

__attribute__((__cdecl__)) __attribute__((__nothrow__)) ssize_t
getline (char ** __restrict__, size_t * __restrict__, FILE * __restrict__);
# 666 "c:\\mingw\\include\\stdio.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fscanf (FILE *, const char *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int scanf (const char *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int sscanf (const char *, const char *, ...);



 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fgetc (FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char * fgets (char *, int, FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fputc (int, FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fputs (const char *, FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char * gets (char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int puts (const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int ungetc (int, FILE *);
# 687 "c:\\mingw\\include\\stdio.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _filbuf (FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _flsbuf (int, FILE *);



extern inline __attribute__((__gnu_inline__)) __attribute__((__cdecl__)) __attribute__((__nothrow__)) int getc (FILE *);
extern inline __attribute__((__gnu_inline__)) __attribute__((__cdecl__)) __attribute__((__nothrow__)) int getc (FILE * __F)
{
  return (--__F->_cnt >= 0)
    ? (int) (unsigned char) *__F->_ptr++
    : _filbuf (__F);
}

extern inline __attribute__((__gnu_inline__)) __attribute__((__cdecl__)) __attribute__((__nothrow__)) int putc (int, FILE *);
extern inline __attribute__((__gnu_inline__)) __attribute__((__cdecl__)) __attribute__((__nothrow__)) int putc (int __c, FILE * __F)
{
  return (--__F->_cnt >= 0)
    ? (int) (unsigned char) (*__F->_ptr++ = (char)__c)
    : _flsbuf (__c, __F);
}

extern inline __attribute__((__gnu_inline__)) __attribute__((__cdecl__)) __attribute__((__nothrow__)) int getchar (void);
extern inline __attribute__((__gnu_inline__)) __attribute__((__cdecl__)) __attribute__((__nothrow__)) int getchar (void)
{
  return (--(&_iob[0])->_cnt >= 0)
    ? (int) (unsigned char) *(&_iob[0])->_ptr++
    : _filbuf ((&_iob[0]));
}

extern inline __attribute__((__gnu_inline__)) __attribute__((__cdecl__)) __attribute__((__nothrow__)) int putchar(int);
extern inline __attribute__((__gnu_inline__)) __attribute__((__cdecl__)) __attribute__((__nothrow__)) int putchar(int __c)
{
  return (--(&_iob[1])->_cnt >= 0)
    ? (int) (unsigned char) (*(&_iob[1])->_ptr++ = (char)__c)
    : _flsbuf (__c, (&_iob[1]));}
# 734 "c:\\mingw\\include\\stdio.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t fread (void *, size_t, size_t, FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t fwrite (const void *, size_t, size_t, FILE *);



 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fseek (FILE *, long, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) long ftell (FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void rewind (FILE *);
# 787 "c:\\mingw\\include\\stdio.h" 3
typedef long long fpos_t;




 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fgetpos (FILE *, fpos_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fsetpos (FILE *, const fpos_t *);



 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int feof (FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int ferror (FILE *);
# 808 "c:\\mingw\\include\\stdio.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void clearerr (FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void perror (const char *);






 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * _popen (const char *, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _pclose (FILE *);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * popen (const char *, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int pclose (FILE *);




 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _flushall (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _fgetchar (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _fputchar (int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * _fdopen (int, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _fileno (FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _fcloseall (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * _fsopen (const char *, const char *, int);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _getmaxstdio (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _setmaxstdio (int);
# 859 "c:\\mingw\\include\\stdio.h" 3
unsigned int __attribute__((__cdecl__)) __mingw_get_output_format (void);
unsigned int __attribute__((__cdecl__)) __mingw_set_output_format (unsigned int);







int __attribute__((__cdecl__)) __mingw_get_printf_count_output (void);
int __attribute__((__cdecl__)) __mingw_set_printf_count_output (int);
# 885 "c:\\mingw\\include\\stdio.h" 3
extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) unsigned int __attribute__((__cdecl__)) _get_output_format (void)
{ return __mingw_get_output_format (); }

extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) unsigned int __attribute__((__cdecl__)) _set_output_format (unsigned int __style)
{ return __mingw_set_output_format (__style); }
# 910 "c:\\mingw\\include\\stdio.h" 3
extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) int __attribute__((__cdecl__)) _get_printf_count_output (void)
{ return 0 ? 1 : __mingw_get_printf_count_output (); }

extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) int __attribute__((__cdecl__)) _set_printf_count_output (int __mode)
{ return 0 ? 1 : __mingw_set_printf_count_output (__mode); }



 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fgetchar (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fputchar (int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * fdopen (int, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fileno (FILE *);
# 930 "c:\\mingw\\include\\stdio.h" 3
extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) FILE * __attribute__((__cdecl__)) __attribute__((__nothrow__)) fopen64 (const char *, const char *);
extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__))
FILE * __attribute__((__cdecl__)) __attribute__((__nothrow__)) fopen64 (const char * filename, const char * mode)
{ return fopen (filename, mode); }

int __attribute__((__cdecl__)) __attribute__((__nothrow__)) fseeko64 (FILE *, __off64_t, int);






extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __off64_t __attribute__((__cdecl__)) __attribute__((__nothrow__)) ftello64 (FILE *);
extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__))
__off64_t __attribute__((__cdecl__)) __attribute__((__nothrow__)) ftello64 (FILE * stream)
{ fpos_t __pos; return (fgetpos(stream, &__pos)) ? -1LL : (__off64_t)(__pos); }
# 958 "c:\\mingw\\include\\stdio.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fwprintf (FILE *, const wchar_t *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int wprintf (const wchar_t *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int vfwprintf (FILE *, const wchar_t *, __builtin_va_list);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int vwprintf (const wchar_t *, __builtin_va_list);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _snwprintf (wchar_t *, size_t, const wchar_t *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _vscwprintf (const wchar_t *, __builtin_va_list);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _vsnwprintf (wchar_t *, size_t, const wchar_t *, __builtin_va_list);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fwscanf (FILE *, const wchar_t *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int wscanf (const wchar_t *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int swscanf (const wchar_t *, const wchar_t *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t fgetwc (FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t fputwc (wchar_t, FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t ungetwc (wchar_t, FILE *);




 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int swprintf (wchar_t *, const wchar_t *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int vswprintf (wchar_t *, const wchar_t *, __builtin_va_list);



 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t * fgetws (wchar_t *, int, FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fputws (const wchar_t *, FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t getwc (FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t getwchar (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t putwc (wint_t, FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t putwchar (wint_t);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t * _getws (wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _putws (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * _wfdopen(int, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * _wfopen (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * _wfreopen (const wchar_t *, const wchar_t *, FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * _wfsopen (const wchar_t *, const wchar_t *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t * _wtmpnam (wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t * _wtempnam (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wrename (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wremove (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void _wperror (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * _wpopen (const wchar_t *, const wchar_t *);






__attribute__((__cdecl__)) __attribute__((__nothrow__)) int snwprintf (wchar_t *, size_t, const wchar_t *, ...);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int vsnwprintf (wchar_t *, size_t, const wchar_t *, __builtin_va_list);
# 1016 "c:\\mingw\\include\\stdio.h" 3
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int vwscanf (const wchar_t *__restrict__, __builtin_va_list);
__attribute__((__cdecl__)) __attribute__((__nothrow__))
int vfwscanf (FILE *__restrict__, const wchar_t *__restrict__, __builtin_va_list);
__attribute__((__cdecl__)) __attribute__((__nothrow__))
int vswscanf (const wchar_t *__restrict__, const wchar_t * __restrict__, __builtin_va_list);






 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * wpopen (const wchar_t *, const wchar_t *);




 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t _fgetwchar (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t _fputwchar (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _getw (FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _putw (int, FILE *);




 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t fgetwchar (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t fputwchar (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int getw (FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int putw (int, FILE *);





# 296 "pyconfig.h" 2
# 9 "Python.h" 2
# 1 "pymacconfig.h" 1
# 10 "Python.h" 2

# 1 "c:\\mingw\\include\\limits.h" 1 3
# 34 "c:\\mingw\\include\\limits.h" 3
       
# 35 "c:\\mingw\\include\\limits.h" 3
# 12 "Python.h" 2
# 30 "Python.h"
# 1 "c:\\mingw\\include\\string.h" 1 3
# 34 "c:\\mingw\\include\\string.h" 3
       
# 35 "c:\\mingw\\include\\string.h" 3
# 53 "c:\\mingw\\include\\string.h" 3
# 1 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 1 3 4
# 54 "c:\\mingw\\include\\string.h" 2 3
# 62 "c:\\mingw\\include\\string.h" 3
# 1 "c:\\mingw\\include\\strings.h" 1 3
# 33 "c:\\mingw\\include\\strings.h" 3
       
# 34 "c:\\mingw\\include\\strings.h" 3
# 59 "c:\\mingw\\include\\strings.h" 3
# 1 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 1 3 4
# 60 "c:\\mingw\\include\\strings.h" 2 3



int __attribute__((__cdecl__)) __attribute__((__nothrow__)) strcasecmp( const char *, const char * );
int __attribute__((__cdecl__)) __attribute__((__nothrow__)) strncasecmp( const char *, const char *, size_t );
# 80 "c:\\mingw\\include\\strings.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _stricmp( const char *, const char * );
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _strnicmp( const char *, const char *, size_t );
# 100 "c:\\mingw\\include\\strings.h" 3

# 63 "c:\\mingw\\include\\string.h" 2 3







 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void *memchr (const void *, int, size_t) __attribute__((__pure__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int memcmp (const void *, const void *, size_t) __attribute__((__pure__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void *memcpy (void *, const void *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void *memmove (void *, const void *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void *memset (void *, int, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *strcat (char *, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *strchr (const char *, int) __attribute__((__pure__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int strcmp (const char *, const char *) __attribute__((__pure__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int strcoll (const char *, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *strcpy (char *, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t strcspn (const char *, const char *) __attribute__((__pure__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *strerror (int);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t strlen (const char *) __attribute__((__pure__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *strncat (char *, const char *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int strncmp (const char *, const char *, size_t) __attribute__((__pure__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *strncpy (char *, const char *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *strpbrk (const char *, const char *) __attribute__((__pure__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *strrchr (const char *, int) __attribute__((__pure__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t strspn (const char *, const char *) __attribute__((__pure__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *strstr (const char *, const char *) __attribute__((__pure__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *strtok (char *, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t strxfrm (char *, const char *, size_t);




 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_strerror (const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void *_memccpy (void *, const void *, int, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _memicmp (const void *, const void *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_strdup (const char *) __attribute__((__malloc__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _strcmpi (const char *, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _stricoll (const char *, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_strlwr (char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_strnset (char *, int, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_strrev (char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_strset (char *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_strupr (char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void _swab (const char *, char *, size_t);
# 126 "c:\\mingw\\include\\string.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _strncoll(const char *, const char *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _strnicoll(const char *, const char *, size_t);






 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void *memccpy (void *, const void *, int, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int memicmp (const void *, const void *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *strdup (const char *) __attribute__((__malloc__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int strcmpi (const char *, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int stricmp (const char *, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int stricoll (const char *, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *strlwr (char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int strnicmp (const char *, const char *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *strnset (char *, int, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *strrev (char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *strset (char *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *strupr (char *);





 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void swab (const char *, char *, size_t);
# 170 "c:\\mingw\\include\\string.h" 3
# 1 "c:\\mingw\\include\\wchar.h" 1 3
# 35 "c:\\mingw\\include\\wchar.h" 3
       
# 36 "c:\\mingw\\include\\wchar.h" 3
# 392 "c:\\mingw\\include\\wchar.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcscat (wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcschr (const wchar_t *, wchar_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int wcscmp (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int wcscoll (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcscpy (wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t wcscspn (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t wcslen (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcsncat (wchar_t *, const wchar_t *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int wcsncmp (const wchar_t *, const wchar_t *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcsncpy (wchar_t *, const wchar_t *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcspbrk (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcsrchr (const wchar_t *, wchar_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t wcsspn (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcsstr (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcstok (wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t wcsxfrm (wchar_t *, const wchar_t *, size_t);




 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wcsdup (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wcsicmp (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wcsicoll (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wcslwr (wchar_t*);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wcsnicmp (const wchar_t *, const wchar_t *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wcsnset (wchar_t *, wchar_t, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wcsrev (wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wcsset (wchar_t *, wchar_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wcsupr (wchar_t *);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wcsncoll (const wchar_t *, const wchar_t *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wcsnicoll (const wchar_t *, const wchar_t *, size_t);
# 445 "c:\\mingw\\include\\wchar.h" 3
int __attribute__((__cdecl__)) __attribute__((__nothrow__)) wcscmpi (const wchar_t *, const wchar_t *);
# 457 "c:\\mingw\\include\\wchar.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcsdup (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int wcsicmp (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int wcsicoll (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcslwr (wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int wcsnicmp (const wchar_t *, const wchar_t *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcsnset (wchar_t *, wchar_t, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcsrev (wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcsset (wchar_t *, wchar_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcsupr (wchar_t *);
# 491 "c:\\mingw\\include\\wchar.h" 3
extern size_t __mingw_wcsnlen (const wchar_t *, size_t);


extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) size_t wcsnlen (const wchar_t *__text, size_t __maxlen)
{ return __mingw_wcsnlen (__text, __maxlen); }
# 171 "c:\\mingw\\include\\string.h" 2 3
# 193 "c:\\mingw\\include\\string.h" 3
extern size_t __mingw_strnlen (const char *, size_t);


extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) size_t strnlen (const char *__text, size_t __maxlen)
{ return __mingw_strnlen (__text, __maxlen); }
# 212 "c:\\mingw\\include\\string.h" 3
extern int strerror_r (int, char *, size_t);
# 227 "c:\\mingw\\include\\string.h" 3
extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) int strerror_s (char *__buf, size_t __len, int __err)
{ return strerror_r (__err, __buf, __len); }





# 31 "Python.h" 2

# 1 "c:\\mingw\\include\\errno.h" 1 3
# 103 "c:\\mingw\\include\\errno.h" 3

# 112 "c:\\mingw\\include\\errno.h" 3
 int* __attribute__((__cdecl__)) __attribute__((__nothrow__)) _errno(void);




# 33 "Python.h" 2

# 1 "c:\\mingw\\include\\stdlib.h" 1 3
# 34 "c:\\mingw\\include\\stdlib.h" 3
       
# 35 "c:\\mingw\\include\\stdlib.h" 3
# 55 "c:\\mingw\\include\\stdlib.h" 3
# 1 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 1 3 4
# 56 "c:\\mingw\\include\\stdlib.h" 2 3
# 90 "c:\\mingw\\include\\stdlib.h" 3

# 99 "c:\\mingw\\include\\stdlib.h" 3
extern int _argc;
extern char **_argv;




extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) int *__p___argc(void);
extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) char ***__p___argv(void);
extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t ***__p___wargv(void);
# 142 "c:\\mingw\\include\\stdlib.h" 3
   extern __attribute__((__dllimport__)) int __mb_cur_max;
# 166 "c:\\mingw\\include\\stdlib.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int *_errno(void);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int *__doserrno(void);







extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) char ***__p__environ(void);

extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t ***__p__wenviron(void);
# 202 "c:\\mingw\\include\\stdlib.h" 3
extern __attribute__((__dllimport__)) int _sys_nerr;
# 227 "c:\\mingw\\include\\stdlib.h" 3
extern __attribute__((__dllimport__)) char *_sys_errlist[];
# 238 "c:\\mingw\\include\\stdlib.h" 3
extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned int *__p__osver(void);
extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned int *__p__winver(void);
extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned int *__p__winmajor(void);
extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned int *__p__winminor(void);
# 250 "c:\\mingw\\include\\stdlib.h" 3
extern __attribute__((__dllimport__)) unsigned int _osver;
extern __attribute__((__dllimport__)) unsigned int _winver;
extern __attribute__((__dllimport__)) unsigned int _winmajor;
extern __attribute__((__dllimport__)) unsigned int _winminor;
# 289 "c:\\mingw\\include\\stdlib.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char **__p__pgmptr(void);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t **__p__wpgmptr(void);
# 325 "c:\\mingw\\include\\stdlib.h" 3
extern __attribute__((__dllimport__)) int _fmode;
# 335 "c:\\mingw\\include\\stdlib.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int atoi (const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) long atol (const char *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) double strtod (const char *, char **);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) double atof (const char *);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) double _wtof (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wtoi (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) long _wtol (const wchar_t *);
# 378 "c:\\mingw\\include\\stdlib.h" 3
__attribute__((__cdecl__)) __attribute__((__nothrow__))
float strtof (const char *__restrict__, char **__restrict__);

__attribute__((__cdecl__)) __attribute__((__nothrow__))
long double strtold (const char *__restrict__, char **__restrict__);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) long strtol (const char *, char **, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned long strtoul (const char *, char **, int);







 __attribute__((__cdecl__)) __attribute__((__nothrow__))
long wcstol (const wchar_t *, wchar_t **, int);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
unsigned long wcstoul (const wchar_t *, wchar_t **, int);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) double wcstod (const wchar_t *, wchar_t **);





__attribute__((__cdecl__)) __attribute__((__nothrow__))
float wcstof (const wchar_t *__restrict__, wchar_t **__restrict__);

__attribute__((__cdecl__)) __attribute__((__nothrow__))
long double wcstold (const wchar_t *__restrict__, wchar_t **__restrict__);
# 451 "c:\\mingw\\include\\stdlib.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wgetenv (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wputenv (const wchar_t *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
void _wsearchenv (const wchar_t *, const wchar_t *, wchar_t *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wsystem (const wchar_t *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
void _wmakepath (wchar_t *, const wchar_t *, const wchar_t *, const wchar_t *,
    const wchar_t *
  );

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
void _wsplitpath (const wchar_t *, wchar_t *, wchar_t *, wchar_t *, wchar_t *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
wchar_t *_wfullpath (wchar_t *, const wchar_t *, size_t);





 __attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t wcstombs (char *, const wchar_t *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int wctomb (char *, wchar_t);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int mblen (const char *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t mbstowcs (wchar_t *, const char *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int mbtowc (wchar_t *, const char *, size_t);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int rand (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void srand (unsigned int);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void *calloc (size_t, size_t) __attribute__((__malloc__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void *malloc (size_t) __attribute__((__malloc__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void *realloc (void *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void free (void *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void abort (void) __attribute__((__noreturn__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void exit (int) __attribute__((__noreturn__));



int __attribute__((__cdecl__)) __attribute__((__nothrow__)) atexit (void (*)(void));

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int system (const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *getenv (const char *);






 __attribute__((__cdecl__)) void *bsearch
(const void *, const void *, size_t, size_t, int (*)(const void *, const void *));

 __attribute__((__cdecl__)) void qsort
(void *, size_t, size_t, int (*)(const void *, const void *));

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int abs (int) __attribute__((__const__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) long labs (long) __attribute__((__const__));
# 519 "c:\\mingw\\include\\stdlib.h" 3
typedef struct { int quot, rem; } div_t;
typedef struct { long quot, rem; } ldiv_t;

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) div_t div (int, int) __attribute__((__const__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) ldiv_t ldiv (long, long) __attribute__((__const__));






 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void _exit (int) __attribute__((__noreturn__));





 __attribute__((__cdecl__)) __attribute__((__nothrow__)) long long _atoi64 (const char *);
# 545 "c:\\mingw\\include\\stdlib.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void _beep (unsigned int, unsigned int) __attribute__((__deprecated__));

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void _seterrormode (int) __attribute__((__deprecated__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void _sleep (unsigned long) __attribute__((__deprecated__));



typedef int (* _onexit_t)(void);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) _onexit_t _onexit( _onexit_t );

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _putenv (const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__))
void _searchenv (const char *, const char *, char *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_ecvt (double, int, int *, int *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_fcvt (double, int, int *, int *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_gcvt (double, int, char *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
void _makepath (char *, const char *, const char *, const char *, const char *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
void _splitpath (const char *, char *, char *, char *, char *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_fullpath (char*, const char*, size_t);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_itoa (int, char *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_ltoa (long, char *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_ultoa(unsigned long, char *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_itow (int, wchar_t *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_ltow (long, wchar_t *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_ultow (unsigned long, wchar_t *, int);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char* _i64toa (long long, char *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char* _ui64toa (unsigned long long, char *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) long long _wtoi64 (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t* _i64tow (long long, wchar_t *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t* _ui64tow (unsigned long long, wchar_t *, int);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned int (_rotl)(unsigned int, int) __attribute__((__const__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned int (_rotr)(unsigned int, int) __attribute__((__const__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned long (_lrotl)(unsigned long, int) __attribute__((__const__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned long (_lrotr)(unsigned long, int) __attribute__((__const__));

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _set_error_mode (int);
# 628 "c:\\mingw\\include\\stdlib.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int putenv (const char*);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void searchenv (const char*, const char*, char*);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char* itoa (int, char*, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char* ltoa (long, char*, int);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char* ecvt (double, int, int*, int*);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char* fcvt (double, int, int*, int*);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char* gcvt (double, int, char*);
# 649 "c:\\mingw\\include\\stdlib.h" 3
__attribute__((__cdecl__)) __attribute__((__nothrow__)) void _Exit(int) __attribute__((__noreturn__));






typedef struct { long long quot, rem; } lldiv_t;
__attribute__((__cdecl__)) __attribute__((__nothrow__)) lldiv_t lldiv (long long, long long) __attribute__((__const__));

__attribute__((__cdecl__)) __attribute__((__nothrow__)) long long llabs (long long);
# 670 "c:\\mingw\\include\\stdlib.h" 3
__attribute__((__cdecl__)) __attribute__((__nothrow__))
long long strtoll (const char *__restrict__, char **__restrict, int);

__attribute__((__cdecl__)) __attribute__((__nothrow__))
unsigned long long strtoull (const char *__restrict__, char **__restrict__, int);





__attribute__((__cdecl__)) __attribute__((__nothrow__)) long long atoll (const char *);
# 726 "c:\\mingw\\include\\stdlib.h" 3
__attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__deprecated__)) long long wtoll (const wchar_t *);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__deprecated__)) char *lltoa (long long, char *, int);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__deprecated__)) char *ulltoa (unsigned long long , char *, int);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__deprecated__)) wchar_t *lltow (long long, wchar_t *, int);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__deprecated__)) wchar_t *ulltow (unsigned long long, wchar_t *, int);
# 766 "c:\\mingw\\include\\stdlib.h" 3
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int mkstemp (char *);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int __mingw_mkstemp (int, char *);
# 808 "c:\\mingw\\include\\stdlib.h" 3
extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__))
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int mkstemp (char *__filename_template)
{ return __mingw_mkstemp( 0, __filename_template ); }
# 819 "c:\\mingw\\include\\stdlib.h" 3
__attribute__((__cdecl__)) __attribute__((__nothrow__)) char *mkdtemp (char *);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) char *__mingw_mkdtemp (char *);

extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__))
__attribute__((__cdecl__)) __attribute__((__nothrow__)) char *mkdtemp (char *__dirname_template)
{ return __mingw_mkdtemp( __dirname_template ); }






__attribute__((__cdecl__)) __attribute__((__nothrow__)) int setenv( const char *, const char *, int );
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int unsetenv( const char * );

__attribute__((__cdecl__)) __attribute__((__nothrow__)) int __mingw_setenv( const char *, const char *, int );

extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__))
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int setenv( const char *__n, const char *__v, int __f )
{ return __mingw_setenv( __n, __v, __f ); }

extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__))
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int unsetenv( const char *__name )
{ return __mingw_setenv( __name, ((void *)0), 1 ); }





# 35 "Python.h" 2






# 1 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 1 3 4
# 426 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;
# 42 "Python.h" 2






# 1 "c:\\mingw\\include\\assert.h" 1 3
# 38 "c:\\mingw\\include\\assert.h" 3
 void __attribute__((__cdecl__)) __attribute__((__nothrow__)) _assert (const char*, const char*, int) __attribute__((__noreturn__));
# 49 "Python.h" 2

# 1 "pyport.h" 1
# 157 "pyport.h"

# 157 "pyport.h"
typedef unsigned int Py_uintptr_t;
typedef int Py_intptr_t;
# 179 "pyport.h"
typedef Py_intptr_t Py_ssize_t;






typedef Py_ssize_t Py_hash_t;


typedef size_t Py_uhash_t;





typedef int Py_ssize_clean_t;
# 328 "pyport.h"
# 1 "c:\\mingw\\include\\math.h" 1 3
# 35 "c:\\mingw\\include\\math.h" 3
       
# 36 "c:\\mingw\\include\\math.h" 3
# 111 "c:\\mingw\\include\\math.h" 3

# 151 "c:\\mingw\\include\\math.h" 3

# 151 "c:\\mingw\\include\\math.h" 3
struct _exception
{
  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
};

 double __attribute__((__cdecl__)) sin (double);
 double __attribute__((__cdecl__)) cos (double);
 double __attribute__((__cdecl__)) tan (double);
 double __attribute__((__cdecl__)) sinh (double);
 double __attribute__((__cdecl__)) cosh (double);
 double __attribute__((__cdecl__)) tanh (double);
 double __attribute__((__cdecl__)) asin (double);
 double __attribute__((__cdecl__)) acos (double);
 double __attribute__((__cdecl__)) atan (double);
 double __attribute__((__cdecl__)) atan2 (double, double);
 double __attribute__((__cdecl__)) exp (double);
 double __attribute__((__cdecl__)) log (double);
 double __attribute__((__cdecl__)) log10 (double);
 double __attribute__((__cdecl__)) pow (double, double);
 double __attribute__((__cdecl__)) sqrt (double);
 double __attribute__((__cdecl__)) ceil (double);
 double __attribute__((__cdecl__)) floor (double);
 double __attribute__((__cdecl__)) fabs (double);
 double __attribute__((__cdecl__)) ldexp (double, int);
 double __attribute__((__cdecl__)) frexp (double, int*);
 double __attribute__((__cdecl__)) modf (double, double*);
 double __attribute__((__cdecl__)) fmod (double, double);
# 225 "c:\\mingw\\include\\math.h" 3
struct _complex
{



  double x;
  double y;
};

 double __attribute__((__cdecl__)) _cabs (struct _complex);

 double __attribute__((__cdecl__)) _hypot (double, double);
 double __attribute__((__cdecl__)) _j0 (double);
 double __attribute__((__cdecl__)) _j1 (double);
 double __attribute__((__cdecl__)) _jn (int, double);
 double __attribute__((__cdecl__)) _y0 (double);
 double __attribute__((__cdecl__)) _y1 (double);
 double __attribute__((__cdecl__)) _yn (int, double);
 int __attribute__((__cdecl__)) _matherr (struct _exception *);
# 252 "c:\\mingw\\include\\math.h" 3
 double __attribute__((__cdecl__)) _chgsign (double);
 double __attribute__((__cdecl__)) _copysign (double, double);
 double __attribute__((__cdecl__)) _logb (double);
 double __attribute__((__cdecl__)) _nextafter (double, double);
 double __attribute__((__cdecl__)) _scalb (double, long);

 int __attribute__((__cdecl__)) _finite (double);
 int __attribute__((__cdecl__)) _fpclass (double);
 int __attribute__((__cdecl__)) _isnan (double);
# 269 "c:\\mingw\\include\\math.h" 3
 double __attribute__((__cdecl__)) j0 (double);
 double __attribute__((__cdecl__)) j1 (double);
 double __attribute__((__cdecl__)) jn (int, double);
 double __attribute__((__cdecl__)) y0 (double);
 double __attribute__((__cdecl__)) y1 (double);
 double __attribute__((__cdecl__)) yn (int, double);

 double __attribute__((__cdecl__)) chgsign (double);
# 285 "c:\\mingw\\include\\math.h" 3
 int __attribute__((__cdecl__)) finite (double);
 int __attribute__((__cdecl__)) fpclass (double);
# 342 "c:\\mingw\\include\\math.h" 3
   typedef long double float_t;
   typedef long double double_t;
# 371 "c:\\mingw\\include\\math.h" 3
extern int __attribute__((__cdecl__)) __fpclassifyf (float);
extern int __attribute__((__cdecl__)) __fpclassify (double);
extern int __attribute__((__cdecl__)) __fpclassifyl (long double);
# 397 "c:\\mingw\\include\\math.h" 3
extern int __attribute__((__cdecl__)) __isnan (double);
extern int __attribute__((__cdecl__)) __isnanf (float);
extern int __attribute__((__cdecl__)) __isnanl (long double);
# 437 "c:\\mingw\\include\\math.h" 3
extern int __attribute__((__cdecl__)) __signbit (double);
extern int __attribute__((__cdecl__)) __signbitf (float);
extern int __attribute__((__cdecl__)) __signbitl (long double);
# 466 "c:\\mingw\\include\\math.h" 3
extern float __attribute__((__cdecl__)) sinf (float);
extern long double __attribute__((__cdecl__)) sinl (long double);

extern float __attribute__((__cdecl__)) cosf (float);
extern long double __attribute__((__cdecl__)) cosl (long double);

extern float __attribute__((__cdecl__)) tanf (float);
extern long double __attribute__((__cdecl__)) tanl (long double);

extern float __attribute__((__cdecl__)) asinf (float);
extern long double __attribute__((__cdecl__)) asinl (long double);

extern float __attribute__((__cdecl__)) acosf (float);
extern long double __attribute__((__cdecl__)) acosl (long double);

extern float __attribute__((__cdecl__)) atanf (float);
extern long double __attribute__((__cdecl__)) atanl (long double);

extern float __attribute__((__cdecl__)) atan2f (float, float);
extern long double __attribute__((__cdecl__)) atan2l (long double, long double);



extern float __attribute__((__cdecl__)) sinhf (float);




extern long double __attribute__((__cdecl__)) sinhl (long double);

extern float __attribute__((__cdecl__)) coshf (float);




extern long double __attribute__((__cdecl__)) coshl (long double);

extern float __attribute__((__cdecl__)) tanhf (float);




extern long double __attribute__((__cdecl__)) tanhl (long double);



extern double __attribute__((__cdecl__)) acosh (double);
extern float __attribute__((__cdecl__)) acoshf (float);
extern long double __attribute__((__cdecl__)) acoshl (long double);


extern double __attribute__((__cdecl__)) asinh (double);
extern float __attribute__((__cdecl__)) asinhf (float);
extern long double __attribute__((__cdecl__)) asinhl (long double);


extern double __attribute__((__cdecl__)) atanh (double);
extern float __attribute__((__cdecl__)) atanhf (float);
extern long double __attribute__((__cdecl__)) atanhl (long double);



extern float __attribute__((__cdecl__)) expf (float);




extern long double __attribute__((__cdecl__)) expl (long double);


extern double __attribute__((__cdecl__)) exp2(double);
extern float __attribute__((__cdecl__)) exp2f(float);
extern long double __attribute__((__cdecl__)) exp2l(long double);



extern double __attribute__((__cdecl__)) expm1(double);
extern float __attribute__((__cdecl__)) expm1f(float);
extern long double __attribute__((__cdecl__)) expm1l(long double);


extern float __attribute__((__cdecl__)) frexpf (float, int*);




extern long double __attribute__((__cdecl__)) frexpl (long double, int*);




extern int __attribute__((__cdecl__)) ilogb (double);
extern int __attribute__((__cdecl__)) ilogbf (float);
extern int __attribute__((__cdecl__)) ilogbl (long double);


extern float __attribute__((__cdecl__)) ldexpf (float, int);




extern long double __attribute__((__cdecl__)) ldexpl (long double, int);


extern float __attribute__((__cdecl__)) logf (float);
extern long double __attribute__((__cdecl__)) logl (long double);


extern float __attribute__((__cdecl__)) log10f (float);
extern long double __attribute__((__cdecl__)) log10l (long double);


extern double __attribute__((__cdecl__)) log1p(double);
extern float __attribute__((__cdecl__)) log1pf(float);
extern long double __attribute__((__cdecl__)) log1pl(long double);


extern double __attribute__((__cdecl__)) log2 (double);
extern float __attribute__((__cdecl__)) log2f (float);
extern long double __attribute__((__cdecl__)) log2l (long double);


extern double __attribute__((__cdecl__)) logb (double);
extern float __attribute__((__cdecl__)) logbf (float);
extern long double __attribute__((__cdecl__)) logbl (long double);
# 624 "c:\\mingw\\include\\math.h" 3
extern float __attribute__((__cdecl__)) modff (float, float*);
extern long double __attribute__((__cdecl__)) modfl (long double, long double*);


extern double __attribute__((__cdecl__)) scalbn (double, int);
extern float __attribute__((__cdecl__)) scalbnf (float, int);
extern long double __attribute__((__cdecl__)) scalbnl (long double, int);

extern double __attribute__((__cdecl__)) scalbln (double, long);
extern float __attribute__((__cdecl__)) scalblnf (float, long);
extern long double __attribute__((__cdecl__)) scalblnl (long double, long);



extern double __attribute__((__cdecl__)) cbrt (double);
extern float __attribute__((__cdecl__)) cbrtf (float);
extern long double __attribute__((__cdecl__)) cbrtl (long double);


extern float __attribute__((__cdecl__)) fabsf (float x);
extern long double __attribute__((__cdecl__)) fabsl (long double x);


extern double __attribute__((__cdecl__)) 
# 647 "c:\\mingw\\include\\math.h"
                     _hypot 
# 647 "c:\\mingw\\include\\math.h" 3
                           (double, double);
extern float __attribute__((__cdecl__)) hypotf (float, float);
extern long double __attribute__((__cdecl__)) hypotl (long double, long double);


extern float __attribute__((__cdecl__)) powf (float, float);
extern long double __attribute__((__cdecl__)) powl (long double, long double);


extern float __attribute__((__cdecl__)) sqrtf (float);
extern long double __attribute__((__cdecl__)) sqrtl (long double);


extern double __attribute__((__cdecl__)) erf (double);
extern float __attribute__((__cdecl__)) erff (float);
extern long double __attribute__((__cdecl__)) erfl (long double);


extern double __attribute__((__cdecl__)) erfc (double);
extern float __attribute__((__cdecl__)) erfcf (float);
extern long double __attribute__((__cdecl__)) erfcl (long double);


extern double __attribute__((__cdecl__)) lgamma (double);
extern float __attribute__((__cdecl__)) lgammaf (float);
extern long double __attribute__((__cdecl__)) lgammal (long double);


extern double __attribute__((__cdecl__)) tgamma (double);
extern float __attribute__((__cdecl__)) tgammaf (float);
extern long double __attribute__((__cdecl__)) tgammal (long double);


extern float __attribute__((__cdecl__)) ceilf (float);
extern long double __attribute__((__cdecl__)) ceill (long double);


extern float __attribute__((__cdecl__)) floorf (float);
extern long double __attribute__((__cdecl__)) floorl (long double);


extern double __attribute__((__cdecl__)) nearbyint ( double);
extern float __attribute__((__cdecl__)) nearbyintf (float);
extern long double __attribute__((__cdecl__)) nearbyintl (long double);



extern double __attribute__((__cdecl__)) rint (double);
extern float __attribute__((__cdecl__)) rintf (float);
extern long double __attribute__((__cdecl__)) rintl (long double);


extern long __attribute__((__cdecl__)) lrint (double);
extern long __attribute__((__cdecl__)) lrintf (float);
extern long __attribute__((__cdecl__)) lrintl (long double);

extern long long __attribute__((__cdecl__)) llrint (double);
extern long long __attribute__((__cdecl__)) llrintf (float);
extern long long __attribute__((__cdecl__)) llrintl (long double);
# 785 "c:\\mingw\\include\\math.h" 3
extern double __attribute__((__cdecl__)) round (double);
extern float __attribute__((__cdecl__)) roundf (float);
extern long double __attribute__((__cdecl__)) roundl (long double);


extern long __attribute__((__cdecl__)) lround (double);
extern long __attribute__((__cdecl__)) lroundf (float);
extern long __attribute__((__cdecl__)) lroundl (long double);

extern long long __attribute__((__cdecl__)) llround (double);
extern long long __attribute__((__cdecl__)) llroundf (float);
extern long long __attribute__((__cdecl__)) llroundl (long double);



extern double __attribute__((__cdecl__)) trunc (double);
extern float __attribute__((__cdecl__)) truncf (float);
extern long double __attribute__((__cdecl__)) truncl (long double);


extern float __attribute__((__cdecl__)) fmodf (float, float);
extern long double __attribute__((__cdecl__)) fmodl (long double, long double);


extern double __attribute__((__cdecl__)) remainder (double, double);
extern float __attribute__((__cdecl__)) remainderf (float, float);
extern long double __attribute__((__cdecl__)) remainderl (long double, long double);


extern double __attribute__((__cdecl__)) remquo(double, double, int *);
extern float __attribute__((__cdecl__)) remquof(float, float, int *);
extern long double __attribute__((__cdecl__)) remquol(long double, long double, int *);


extern double __attribute__((__cdecl__)) copysign (double, double);
extern float __attribute__((__cdecl__)) copysignf (float, float);
extern long double __attribute__((__cdecl__)) copysignl (long double, long double);


extern double __attribute__((__cdecl__)) nan(const char *tagp);
extern float __attribute__((__cdecl__)) nanf(const char *tagp);
extern long double __attribute__((__cdecl__)) nanl(const char *tagp);
# 835 "c:\\mingw\\include\\math.h" 3
extern double __attribute__((__cdecl__)) nextafter (double, double);
extern float __attribute__((__cdecl__)) nextafterf (float, float);
extern long double __attribute__((__cdecl__)) nextafterl (long double, long double);


extern double __attribute__((__cdecl__)) nexttoward (double, long double);
extern float __attribute__((__cdecl__)) nexttowardf (float, long double);
extern long double __attribute__((__cdecl__)) nexttowardl (long double, long double);



extern double __attribute__((__cdecl__)) fdim (double x, double y);
extern float __attribute__((__cdecl__)) fdimf (float x, float y);
extern long double __attribute__((__cdecl__)) fdiml (long double x, long double y);







extern double __attribute__((__cdecl__)) fmax (double, double);
extern float __attribute__((__cdecl__)) fmaxf (float, float);
extern long double __attribute__((__cdecl__)) fmaxl (long double, long double);


extern double __attribute__((__cdecl__)) fmin (double, double);
extern float __attribute__((__cdecl__)) fminf (float, float);
extern long double __attribute__((__cdecl__)) fminl (long double, long double);



extern double __attribute__((__cdecl__)) fma (double, double, double);
extern float __attribute__((__cdecl__)) fmaf (float, float, float);
extern long double __attribute__((__cdecl__)) fmal (long double, long double, long double);
# 911 "c:\\mingw\\include\\math.h" 3

# 329 "pyport.h" 2
# 341 "pyport.h"
# 1 "c:\\mingw\\include\\time.h" 1 3
# 33 "c:\\mingw\\include\\time.h" 3
       
# 34 "c:\\mingw\\include\\time.h" 3
# 115 "c:\\mingw\\include\\time.h" 3
struct timespec
{







  __time64_t tv_sec;
  long tv_nsec;
};


struct __mingw32_expanded_timespec
{





  union
  {



    __time64_t __tv64_sec;
    __time32_t __tv32_sec;
    time_t tv_sec;
  };
  long tv_nsec;
};
# 155 "c:\\mingw\\include\\time.h" 3


extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__))







struct __mingw32_expanded_timespec *mingw_timespec( struct timespec *__tv )
{ return (struct __mingw32_expanded_timespec *)(__tv); }


# 178 "c:\\mingw\\include\\time.h" 3
# 1 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 1 3 4
# 179 "c:\\mingw\\include\\time.h" 2 3




typedef long clock_t;

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
};



 __attribute__((__cdecl__)) __attribute__((__nothrow__)) clock_t clock (void);
# 214 "c:\\mingw\\include\\time.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) time_t time (time_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) double difftime (time_t, time_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) time_t mktime (struct tm *);
# 228 "c:\\mingw\\include\\time.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *asctime (const struct tm *);





 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *ctime (const time_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) struct tm *gmtime (const time_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) struct tm *localtime (const time_t *);


 __attribute__((__cdecl__)) __attribute__((__nothrow__))
size_t strftime (char *, size_t, const char *, const struct tm *);


extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) void _tzset (void);


extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) void tzset (void);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_strdate (char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_strtime (char *);






 __attribute__((__cdecl__)) __attribute__((__nothrow__)) __time64_t _time64( __time64_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) __time64_t _mktime64 (struct tm *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_ctime64 (const __time64_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) struct tm *_gmtime64 (const __time64_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) struct tm *_localtime64 (const __time64_t *);
# 344 "c:\\mingw\\include\\time.h" 3
extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) int *__p__daylight (void);
extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) long *__p__timezone (void);
extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) char **__p__tzname (void);

extern __attribute__((__dllimport__)) int _daylight;
extern __attribute__((__dllimport__)) long _timezone;
extern __attribute__((__dllimport__)) char *_tzname[2];
# 381 "c:\\mingw\\include\\time.h" 3
extern __attribute__((__dllimport__)) int daylight;
extern __attribute__((__dllimport__)) long timezone;
extern __attribute__((__dllimport__)) char *tzname[2];
# 407 "c:\\mingw\\include\\time.h" 3
__attribute__((__cdecl__)) __attribute__((__nothrow__))
int nanosleep( const struct timespec *, struct timespec * );
# 428 "c:\\mingw\\include\\time.h" 3

# 440 "c:\\mingw\\include\\time.h" 3



 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wasctime (const struct tm *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wstrdate (wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wstrtime (wchar_t *);






 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wctime64 (const __time64_t *);
# 466 "c:\\mingw\\include\\time.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wctime (const time_t *);
# 495 "c:\\mingw\\include\\time.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__))
size_t wcsftime (wchar_t *, size_t, const wchar_t *, const struct tm *);


# 342 "pyport.h" 2
# 383 "pyport.h"
# 1 "c:\\mingw\\include\\sys\\stat.h" 1 3
# 34 "c:\\mingw\\include\\sys\\stat.h" 3
       
# 35 "c:\\mingw\\include\\sys\\stat.h" 3
# 127 "c:\\mingw\\include\\sys\\stat.h" 3
        
# 173 "c:\\mingw\\include\\sys\\stat.h" 3
struct _stat { _dev_t st_dev; _ino_t st_ino; _mode_t st_mode; short st_nlink; short st_uid; short st_gid; _dev_t st_rdev; _off_t st_size; time_t st_atime; time_t st_mtime; time_t st_ctime; };






struct stat { _dev_t st_dev; _ino_t st_ino; _mode_t st_mode; short st_nlink; short st_uid; short st_gid; _dev_t st_rdev; _off_t st_size; time_t st_atime; time_t st_mtime; time_t st_ctime; };







struct _stati64 { _dev_t st_dev; _ino_t st_ino; _mode_t st_mode; short st_nlink; short st_uid; short st_gid; _dev_t st_rdev; __off64_t st_size; time_t st_atime; time_t st_mtime; time_t st_ctime; };






struct __stat64 { _dev_t st_dev; _ino_t st_ino; _mode_t st_mode; short st_nlink; short st_uid; short st_gid; _dev_t st_rdev; __off64_t st_size; __time64_t st_atime; __time64_t st_mtime; __time64_t st_ctime; };
# 218 "c:\\mingw\\include\\sys\\stat.h" 3






 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _umask (int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _chmod (const char *, int);






 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _fstat (int, struct _stat *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _stat (const char *, struct _stat *);






 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int umask (int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int chmod (const char *, int);
# 250 "c:\\mingw\\include\\sys\\stat.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fstat (int, struct stat *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int stat (const char *, struct stat *);
# 260 "c:\\mingw\\include\\sys\\stat.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _fstati64 (int, struct _stati64 *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _stati64 (const char *, struct _stati64 *);






 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _fstat64 (int, struct __stat64 *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _stat64 (const char *, struct __stat64 *);
# 352 "c:\\mingw\\include\\sys\\stat.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wstat(const wchar_t *, struct _stat *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wstati64 (const wchar_t *, struct _stati64 *);






 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wstat64 (const wchar_t *, struct __stat64 *);
# 398 "c:\\mingw\\include\\sys\\stat.h" 3

# 384 "pyport.h" 2
# 51 "Python.h" 2
# 1 "pymacro.h" 1
# 52 "Python.h" 2

# 1 "pyatomic.h" 1







# 1 "dynamic_annotations.h" 1
# 375 "dynamic_annotations.h"

# 375 "dynamic_annotations.h"
void AnnotateRWLockCreate(const char *file, int line,
                          const volatile void *lock);
void AnnotateRWLockDestroy(const char *file, int line,
                           const volatile void *lock);
void AnnotateRWLockAcquired(const char *file, int line,
                            const volatile void *lock, long is_w);
void AnnotateRWLockReleased(const char *file, int line,
                            const volatile void *lock, long is_w);
void AnnotateBarrierInit(const char *file, int line,
                         const volatile void *barrier, long count,
                         long reinitialization_allowed);
void AnnotateBarrierWaitBefore(const char *file, int line,
                               const volatile void *barrier);
void AnnotateBarrierWaitAfter(const char *file, int line,
                              const volatile void *barrier);
void AnnotateBarrierDestroy(const char *file, int line,
                            const volatile void *barrier);
void AnnotateCondVarWait(const char *file, int line,
                         const volatile void *cv,
                         const volatile void *lock);
void AnnotateCondVarSignal(const char *file, int line,
                           const volatile void *cv);
void AnnotateCondVarSignalAll(const char *file, int line,
                              const volatile void *cv);
void AnnotatePublishMemoryRange(const char *file, int line,
                                const volatile void *address,
                                long size);
void AnnotateUnpublishMemoryRange(const char *file, int line,
                                  const volatile void *address,
                                  long size);
void AnnotatePCQCreate(const char *file, int line,
                       const volatile void *pcq);
void AnnotatePCQDestroy(const char *file, int line,
                        const volatile void *pcq);
void AnnotatePCQPut(const char *file, int line,
                    const volatile void *pcq);
void AnnotatePCQGet(const char *file, int line,
                    const volatile void *pcq);
void AnnotateNewMemory(const char *file, int line,
                       const volatile void *address,
                       long size);
void AnnotateExpectRace(const char *file, int line,
                        const volatile void *address,
                        const char *description);
void AnnotateBenignRace(const char *file, int line,
                        const volatile void *address,
                        const char *description);
void AnnotateBenignRaceSized(const char *file, int line,
                        const volatile void *address,
                        long size,
                        const char *description);
void AnnotateMutexIsUsedAsCondVar(const char *file, int line,
                                  const volatile void *mu);
void AnnotateTraceMemory(const char *file, int line,
                         const volatile void *arg);
void AnnotateThreadName(const char *file, int line,
                        const char *name);
void AnnotateIgnoreReadsBegin(const char *file, int line);
void AnnotateIgnoreReadsEnd(const char *file, int line);
void AnnotateIgnoreWritesBegin(const char *file, int line);
void AnnotateIgnoreWritesEnd(const char *file, int line);
void AnnotateEnableRaceDetection(const char *file, int line, int enable);
void AnnotateNoOp(const char *file, int line,
                  const volatile void *arg);
void AnnotateFlushState(const char *file, int line);
# 456 "dynamic_annotations.h"
int RunningOnValgrind(void);
# 9 "pyatomic.h" 2
# 23 "pyatomic.h"
typedef enum _Py_memory_order {
    _Py_memory_order_relaxed,
    _Py_memory_order_acquire,
    _Py_memory_order_release,
    _Py_memory_order_acq_rel,
    _Py_memory_order_seq_cst
} _Py_memory_order;

typedef struct _Py_atomic_address {
    void *_value;
} _Py_atomic_address;

typedef struct _Py_atomic_int {
    int _value;
} _Py_atomic_int;





static __inline__ void
_Py_atomic_signal_fence(_Py_memory_order order)
{
    if (order != _Py_memory_order_relaxed)
        __asm__ volatile("":::"memory");
}

static __inline__ void
_Py_atomic_thread_fence(_Py_memory_order order)
{
    if (order != _Py_memory_order_relaxed)
        __asm__ volatile("mfence":::"memory");
}


static __inline__ void
_Py_ANNOTATE_MEMORY_ORDER(const volatile void *address, _Py_memory_order order)
{
    (void)address;
    switch(order) {
    case _Py_memory_order_release:
    case _Py_memory_order_acq_rel:
    case _Py_memory_order_seq_cst:
        ;
        break;
    case _Py_memory_order_relaxed:
    case _Py_memory_order_acquire:
        break;
    }
    switch(order) {
    case _Py_memory_order_acquire:
    case _Py_memory_order_acq_rel:
    case _Py_memory_order_seq_cst:
        ;
        break;
    case _Py_memory_order_relaxed:
    case _Py_memory_order_release:
        break;
    }
}
# 54 "Python.h" 2
# 64 "Python.h"
# 1 "pymath.h" 1
# 22 "pymath.h"
extern double round(double);
# 65 "Python.h" 2
# 1 "pytime.h" 1





# 1 "object.h" 1
# 105 "object.h"
typedef struct _object {
   
    Py_ssize_t ob_refcnt;
    struct _typeobject *ob_type;
} PyObject;

typedef struct {
    PyObject ob_base;
    Py_ssize_t ob_size;
} PyVarObject;
# 140 "object.h"
typedef struct _Py_Identifier {
    struct _Py_Identifier *next;
    const char* string;
    PyObject *object;
} _Py_Identifier;
# 165 "object.h"
typedef PyObject * (*unaryfunc)(PyObject *);
typedef PyObject * (*binaryfunc)(PyObject *, PyObject *);
typedef PyObject * (*ternaryfunc)(PyObject *, PyObject *, PyObject *);
typedef int (*inquiry)(PyObject *);
typedef Py_ssize_t (*lenfunc)(PyObject *);
typedef PyObject *(*ssizeargfunc)(PyObject *, Py_ssize_t);
typedef PyObject *(*ssizessizeargfunc)(PyObject *, Py_ssize_t, Py_ssize_t);
typedef int(*ssizeobjargproc)(PyObject *, Py_ssize_t, PyObject *);
typedef int(*ssizessizeobjargproc)(PyObject *, Py_ssize_t, Py_ssize_t, PyObject *);
typedef int(*objobjargproc)(PyObject *, PyObject *, PyObject *);



typedef struct bufferinfo {
    void *buf;
    PyObject *obj;
    Py_ssize_t len;
    Py_ssize_t itemsize;

    int readonly;
    int ndim;
    char *format;
    Py_ssize_t *shape;
    Py_ssize_t *strides;
    Py_ssize_t *suboffsets;
    void *internal;
} Py_buffer;

typedef int (*getbufferproc)(PyObject *, Py_buffer *, int);
typedef void (*releasebufferproc)(PyObject *, Py_buffer *);
# 231 "object.h"
typedef int (*objobjproc)(PyObject *, PyObject *);
typedef int (*visitproc)(PyObject *, void *);
typedef int (*traverseproc)(PyObject *, visitproc, void *);


typedef struct {




    binaryfunc nb_add;
    binaryfunc nb_subtract;
    binaryfunc nb_multiply;
    binaryfunc nb_remainder;
    binaryfunc nb_divmod;
    ternaryfunc nb_power;
    unaryfunc nb_negative;
    unaryfunc nb_positive;
    unaryfunc nb_absolute;
    inquiry nb_bool;
    unaryfunc nb_invert;
    binaryfunc nb_lshift;
    binaryfunc nb_rshift;
    binaryfunc nb_and;
    binaryfunc nb_xor;
    binaryfunc nb_or;
    unaryfunc nb_int;
    void *nb_reserved;
    unaryfunc nb_float;

    binaryfunc nb_inplace_add;
    binaryfunc nb_inplace_subtract;
    binaryfunc nb_inplace_multiply;
    binaryfunc nb_inplace_remainder;
    ternaryfunc nb_inplace_power;
    binaryfunc nb_inplace_lshift;
    binaryfunc nb_inplace_rshift;
    binaryfunc nb_inplace_and;
    binaryfunc nb_inplace_xor;
    binaryfunc nb_inplace_or;

    binaryfunc nb_floor_divide;
    binaryfunc nb_true_divide;
    binaryfunc nb_inplace_floor_divide;
    binaryfunc nb_inplace_true_divide;

    unaryfunc nb_index;
} PyNumberMethods;

typedef struct {
    lenfunc sq_length;
    binaryfunc sq_concat;
    ssizeargfunc sq_repeat;
    ssizeargfunc sq_item;
    void *was_sq_slice;
    ssizeobjargproc sq_ass_item;
    void *was_sq_ass_slice;
    objobjproc sq_contains;

    binaryfunc sq_inplace_concat;
    ssizeargfunc sq_inplace_repeat;
} PySequenceMethods;

typedef struct {
    lenfunc mp_length;
    binaryfunc mp_subscript;
    objobjargproc mp_ass_subscript;
} PyMappingMethods;


typedef struct {
     getbufferproc bf_getbuffer;
     releasebufferproc bf_releasebuffer;
} PyBufferProcs;


typedef void (*freefunc)(void *);
typedef void (*destructor)(PyObject *);





typedef int (*printfunc)(PyObject *, FILE *, int);

typedef PyObject *(*getattrfunc)(PyObject *, char *);
typedef PyObject *(*getattrofunc)(PyObject *, PyObject *);
typedef int (*setattrfunc)(PyObject *, char *, PyObject *);
typedef int (*setattrofunc)(PyObject *, PyObject *, PyObject *);
typedef PyObject *(*reprfunc)(PyObject *);
typedef Py_hash_t (*hashfunc)(PyObject *);
typedef PyObject *(*richcmpfunc) (PyObject *, PyObject *, int);
typedef PyObject *(*getiterfunc) (PyObject *);
typedef PyObject *(*iternextfunc) (PyObject *);
typedef PyObject *(*descrgetfunc) (PyObject *, PyObject *, PyObject *);
typedef int (*descrsetfunc) (PyObject *, PyObject *, PyObject *);
typedef int (*initproc)(PyObject *, PyObject *, PyObject *);
typedef PyObject *(*newfunc)(struct _typeobject *, PyObject *, PyObject *);
typedef PyObject *(*allocfunc)(struct _typeobject *, Py_ssize_t);




typedef struct _typeobject {
    PyVarObject ob_base;
    const char *tp_name;
    Py_ssize_t tp_basicsize, tp_itemsize;



    destructor tp_dealloc;
    printfunc tp_print;
    getattrfunc tp_getattr;
    setattrfunc tp_setattr;
    void *tp_reserved;
    reprfunc tp_repr;



    PyNumberMethods *tp_as_number;
    PySequenceMethods *tp_as_sequence;
    PyMappingMethods *tp_as_mapping;



    hashfunc tp_hash;
    ternaryfunc tp_call;
    reprfunc tp_str;
    getattrofunc tp_getattro;
    setattrofunc tp_setattro;


    PyBufferProcs *tp_as_buffer;


    unsigned long tp_flags;

    const char *tp_doc;



    traverseproc tp_traverse;


    inquiry tp_clear;



    richcmpfunc tp_richcompare;


    Py_ssize_t tp_weaklistoffset;


    getiterfunc tp_iter;
    iternextfunc tp_iternext;


    struct PyMethodDef *tp_methods;
    struct PyMemberDef *tp_members;
    struct PyGetSetDef *tp_getset;
    struct _typeobject *tp_base;
    PyObject *tp_dict;
    descrgetfunc tp_descr_get;
    descrsetfunc tp_descr_set;
    Py_ssize_t tp_dictoffset;
    initproc tp_init;
    allocfunc tp_alloc;
    newfunc tp_new;
    freefunc tp_free;
    inquiry tp_is_gc;
    PyObject *tp_bases;
    PyObject *tp_mro;
    PyObject *tp_cache;
    PyObject *tp_subclasses;
    PyObject *tp_weaklist;
    destructor tp_del;


    unsigned int tp_version_tag;

    destructor tp_finalize;
# 422 "object.h"
} PyTypeObject;


typedef struct{
    int slot;
    void *pfunc;
} PyType_Slot;

typedef struct{
    const char* name;
    int basicsize;
    int itemsize;
    unsigned int flags;
    PyType_Slot *slots;
} PyType_Spec;

__attribute__((dllimport)) PyObject* PyType_FromSpec(PyType_Spec*);

__attribute__((dllimport)) PyObject* PyType_FromSpecWithBases(PyType_Spec*, PyObject*);


__attribute__((dllimport)) void* PyType_GetSlot(PyTypeObject*, int);




typedef struct _heaptypeobject {


    PyTypeObject ht_type;
    PyNumberMethods as_number;
    PyMappingMethods as_mapping;
    PySequenceMethods as_sequence;




    PyBufferProcs as_buffer;
    PyObject *ht_name, *ht_slots, *ht_qualname;
    struct _dictkeysobject *ht_cached_keys;

} PyHeapTypeObject;







__attribute__((dllimport)) int PyType_IsSubtype(PyTypeObject *, PyTypeObject *);



extern __attribute__((dllimport)) PyTypeObject PyType_Type;
extern __attribute__((dllimport)) PyTypeObject PyBaseObject_Type;
extern __attribute__((dllimport)) PyTypeObject PySuper_Type;

__attribute__((dllimport)) unsigned long PyType_GetFlags(PyTypeObject*);





__attribute__((dllimport)) int PyType_Ready(PyTypeObject *);
__attribute__((dllimport)) PyObject * PyType_GenericAlloc(PyTypeObject *, Py_ssize_t);
__attribute__((dllimport)) PyObject * PyType_GenericNew(PyTypeObject *,
                                               PyObject *, PyObject *);

__attribute__((dllimport)) PyObject * _PyType_Lookup(PyTypeObject *, PyObject *);
__attribute__((dllimport)) PyObject * _PyType_LookupId(PyTypeObject *, _Py_Identifier *);
__attribute__((dllimport)) PyObject * _PyObject_LookupSpecial(PyObject *, _Py_Identifier *);
__attribute__((dllimport)) PyTypeObject * _PyType_CalculateMetaclass(PyTypeObject *, PyObject *);

__attribute__((dllimport)) unsigned int PyType_ClearCache(void);
__attribute__((dllimport)) void PyType_Modified(PyTypeObject *);


__attribute__((dllimport)) PyObject * _PyType_GetDocFromInternalDoc(const char *, const char *);
__attribute__((dllimport)) PyObject * _PyType_GetTextSignatureFromInternalDoc(const char *, const char *);



struct _Py_Identifier;

__attribute__((dllimport)) int PyObject_Print(PyObject *, FILE *, int);
__attribute__((dllimport)) void _Py_BreakPoint(void);
__attribute__((dllimport)) void _PyObject_Dump(PyObject *);

__attribute__((dllimport)) PyObject * PyObject_Repr(PyObject *);
__attribute__((dllimport)) PyObject * PyObject_Str(PyObject *);
__attribute__((dllimport)) PyObject * PyObject_ASCII(PyObject *);
__attribute__((dllimport)) PyObject * PyObject_Bytes(PyObject *);
__attribute__((dllimport)) PyObject * PyObject_RichCompare(PyObject *, PyObject *, int);
__attribute__((dllimport)) int PyObject_RichCompareBool(PyObject *, PyObject *, int);
__attribute__((dllimport)) PyObject * PyObject_GetAttrString(PyObject *, const char *);
__attribute__((dllimport)) int PyObject_SetAttrString(PyObject *, const char *, PyObject *);
__attribute__((dllimport)) int PyObject_HasAttrString(PyObject *, const char *);
__attribute__((dllimport)) PyObject * PyObject_GetAttr(PyObject *, PyObject *);
__attribute__((dllimport)) int PyObject_SetAttr(PyObject *, PyObject *, PyObject *);
__attribute__((dllimport)) int PyObject_HasAttr(PyObject *, PyObject *);
__attribute__((dllimport)) int _PyObject_IsAbstract(PyObject *);
__attribute__((dllimport)) PyObject * _PyObject_GetAttrId(PyObject *, struct _Py_Identifier *);
__attribute__((dllimport)) int _PyObject_SetAttrId(PyObject *, struct _Py_Identifier *, PyObject *);
__attribute__((dllimport)) int _PyObject_HasAttrId(PyObject *, struct _Py_Identifier *);

__attribute__((dllimport)) PyObject ** _PyObject_GetDictPtr(PyObject *);

__attribute__((dllimport)) PyObject * PyObject_SelfIter(PyObject *);

__attribute__((dllimport)) PyObject * _PyObject_NextNotImplemented(PyObject *);

__attribute__((dllimport)) PyObject * PyObject_GenericGetAttr(PyObject *, PyObject *);
__attribute__((dllimport)) int PyObject_GenericSetAttr(PyObject *,
                                              PyObject *, PyObject *);
__attribute__((dllimport)) int PyObject_GenericSetDict(PyObject *, PyObject *, void *);
__attribute__((dllimport)) Py_hash_t PyObject_Hash(PyObject *);
__attribute__((dllimport)) Py_hash_t PyObject_HashNotImplemented(PyObject *);
__attribute__((dllimport)) int PyObject_IsTrue(PyObject *);
__attribute__((dllimport)) int PyObject_Not(PyObject *);
__attribute__((dllimport)) int PyCallable_Check(PyObject *);

__attribute__((dllimport)) void PyObject_ClearWeakRefs(PyObject *);

__attribute__((dllimport)) void PyObject_CallFinalizer(PyObject *);
__attribute__((dllimport)) int PyObject_CallFinalizerFromDealloc(PyObject *);




__attribute__((dllimport)) PyObject *
_PyObject_GenericGetAttrWithDict(PyObject *, PyObject *, PyObject *);
__attribute__((dllimport)) int
_PyObject_GenericSetAttrWithDict(PyObject *, PyObject *,
                                 PyObject *, PyObject *);



__attribute__((dllimport)) PyObject *
_PyObject_GetBuiltin(const char *name);







__attribute__((dllimport)) PyObject * PyObject_Dir(PyObject *);



__attribute__((dllimport)) int Py_ReprEnter(PyObject *);
__attribute__((dllimport)) void Py_ReprLeave(PyObject *);
# 843 "object.h"
__attribute__((dllimport)) void Py_IncRef(PyObject *);
__attribute__((dllimport)) void Py_DecRef(PyObject *);

extern __attribute__((dllimport)) PyTypeObject _PyNone_Type;
extern __attribute__((dllimport)) PyTypeObject _PyNotImplemented_Type;







extern __attribute__((dllimport)) PyObject _Py_NoneStruct;
# 865 "object.h"
extern __attribute__((dllimport)) PyObject _Py_NotImplementedStruct;
# 883 "object.h"
extern __attribute__((dllimport)) int _Py_SwappedOp[];
# 982 "object.h"
__attribute__((dllimport)) void _PyTrash_deposit_object(PyObject*);
__attribute__((dllimport)) void _PyTrash_destroy_chain(void);
extern __attribute__((dllimport)) int _PyTrash_delete_nesting;
extern __attribute__((dllimport)) PyObject * _PyTrash_delete_later;


__attribute__((dllimport)) void _PyTrash_thread_deposit_object(PyObject*);
__attribute__((dllimport)) void _PyTrash_thread_destroy_chain(void);
# 1009 "object.h"
__attribute__((dllimport)) void
_PyDebugAllocatorStats(FILE *out, const char *block_name, int num_blocks,
                       size_t sizeof_block);
__attribute__((dllimport)) void
_PyObject_DebugTypeStats(FILE *out);
# 7 "pytime.h" 2
# 19 "pytime.h"
typedef struct {
    time_t tv_sec;
    long tv_usec;
} _PyTime_timeval;



typedef struct {
    const char *implementation;
    int monotonic;
    int adjustable;
    double resolution;
} _Py_clock_info_t;




__attribute__((dllimport)) void _PyTime_gettimeofday(_PyTime_timeval *tp);



__attribute__((dllimport)) void _PyTime_gettimeofday_info(
    _PyTime_timeval *tp,
    _Py_clock_info_t *info);
# 57 "pytime.h"
typedef enum {

    _PyTime_ROUND_DOWN=0,

    _PyTime_ROUND_UP
} _PyTime_round_t;


__attribute__((dllimport)) int _PyTime_ObjectToTime_t(
    PyObject *obj,
    time_t *sec,
    _PyTime_round_t);


__attribute__((dllimport)) PyObject * _PyLong_FromTime_t(
    time_t sec);


__attribute__((dllimport)) time_t _PyLong_AsTime_t(
    PyObject *obj);




__attribute__((dllimport)) int _PyTime_ObjectToTimeval(
    PyObject *obj,
    time_t *sec,
    long *usec,
    _PyTime_round_t);




__attribute__((dllimport)) int _PyTime_ObjectToTimespec(
    PyObject *obj,
    time_t *sec,
    long *nsec,
    _PyTime_round_t);



__attribute__((dllimport)) void _PyTime_Init(void);
# 66 "Python.h" 2
# 1 "pymem.h" 1
# 15 "pymem.h"
__attribute__((dllimport)) void * PyMem_RawMalloc(size_t size);
__attribute__((dllimport)) void * PyMem_RawRealloc(void *ptr, size_t new_size);
__attribute__((dllimport)) void PyMem_RawFree(void *ptr);
# 59 "pymem.h"
__attribute__((dllimport)) void * PyMem_Malloc(size_t size);
__attribute__((dllimport)) void * PyMem_Realloc(void *ptr, size_t new_size);
__attribute__((dllimport)) void PyMem_Free(void *ptr);


__attribute__((dllimport)) char * _PyMem_RawStrdup(const char *str);
__attribute__((dllimport)) char * _PyMem_Strdup(const char *str);
# 117 "pymem.h"
typedef enum {

    PYMEM_DOMAIN_RAW,


    PYMEM_DOMAIN_MEM,


    PYMEM_DOMAIN_OBJ
} PyMemAllocatorDomain;

typedef struct {

    void *ctx;


    void* (*malloc) (void *ctx, size_t size);


    void* (*realloc) (void *ctx, void *ptr, size_t new_size);


    void (*free) (void *ctx, void *ptr);
} PyMemAllocator;


__attribute__((dllimport)) void PyMem_GetAllocator(PyMemAllocatorDomain domain,
                                    PyMemAllocator *allocator);
# 157 "pymem.h"
__attribute__((dllimport)) void PyMem_SetAllocator(PyMemAllocatorDomain domain,
                                    PyMemAllocator *allocator);
# 176 "pymem.h"
__attribute__((dllimport)) void PyMem_SetupDebugHooks(void);
# 67 "Python.h" 2


# 1 "objimpl.h" 1
# 97 "objimpl.h"
__attribute__((dllimport)) void * PyObject_Malloc(size_t size);
__attribute__((dllimport)) void * PyObject_Realloc(void *ptr, size_t new_size);
__attribute__((dllimport)) void PyObject_Free(void *ptr);


__attribute__((dllimport)) Py_ssize_t _Py_GetAllocatedBlocks(void);




__attribute__((dllimport)) void _PyObject_DebugMallocStats(FILE *out);
# 125 "objimpl.h"
__attribute__((dllimport)) PyObject * PyObject_Init(PyObject *, PyTypeObject *);
__attribute__((dllimport)) PyVarObject * PyObject_InitVar(PyVarObject *,
                                                 PyTypeObject *, Py_ssize_t);
__attribute__((dllimport)) PyObject * _PyObject_New(PyTypeObject *);
__attribute__((dllimport)) PyVarObject * _PyObject_NewVar(PyTypeObject *, Py_ssize_t);
# 202 "objimpl.h"
typedef struct {

    void *ctx;


    void* (*alloc) (void *ctx, size_t size);


    void (*free) (void *ctx, void *ptr, size_t size);
} PyObjectArenaAllocator;


__attribute__((dllimport)) void PyObject_GetArenaAllocator(PyObjectArenaAllocator *allocator);


__attribute__((dllimport)) void PyObject_SetArenaAllocator(PyObjectArenaAllocator *allocator);
# 227 "objimpl.h"
__attribute__((dllimport)) Py_ssize_t PyGC_Collect(void);


__attribute__((dllimport)) Py_ssize_t _PyGC_CollectNoFail(void);
# 240 "objimpl.h"
__attribute__((dllimport)) PyVarObject * _PyObject_GC_Resize(PyVarObject *, Py_ssize_t);





typedef union _gc_head {
    struct {
        union _gc_head *gc_next;
        union _gc_head *gc_prev;
        Py_ssize_t gc_refs;
    } gc;
    double dummy;
} PyGC_Head;

extern PyGC_Head *_PyGC_generation0;
# 324 "objimpl.h"
__attribute__((dllimport)) PyObject * _PyObject_GC_Malloc(size_t);
__attribute__((dllimport)) PyObject * _PyObject_GC_New(PyTypeObject *);
__attribute__((dllimport)) PyVarObject * _PyObject_GC_NewVar(PyTypeObject *, Py_ssize_t);
__attribute__((dllimport)) void PyObject_GC_Track(void *);
__attribute__((dllimport)) void PyObject_GC_UnTrack(void *);
__attribute__((dllimport)) void PyObject_GC_Del(void *);
# 70 "Python.h" 2
# 1 "typeslots.h" 1
# 71 "Python.h" 2
# 1 "pyhash.h" 1
# 10 "pyhash.h"
__attribute__((dllimport)) Py_hash_t _Py_HashDouble(double);
__attribute__((dllimport)) Py_hash_t _Py_HashPointer(void*);
__attribute__((dllimport)) Py_hash_t _Py_HashBytes(const void*, Py_ssize_t);
# 54 "pyhash.h"
typedef union {

    unsigned char uc[24];

    struct {
        Py_hash_t prefix;
        Py_hash_t suffix;
    } fnv;


    struct {
        unsigned long long k0;
        unsigned long long k1;
    } siphash;


    struct {
        unsigned char padding[16];
        Py_hash_t suffix;
    } djbx33a;
    struct {
        unsigned char padding[16];
        Py_hash_t hashsalt;
    } expat;
} _Py_HashSecret_t;
extern __attribute__((dllimport)) _Py_HashSecret_t _Py_HashSecret;
# 89 "pyhash.h"
typedef struct {
    Py_hash_t (*const hash)(const void *, Py_ssize_t);
    const char *name;
    const int hash_bits;
    const int seed_bits;
} PyHash_FuncDef;

__attribute__((dllimport)) PyHash_FuncDef* PyHash_GetFuncDef(void);
# 72 "Python.h" 2

# 1 "pydebug.h" 1







extern __attribute__((dllimport)) int Py_DebugFlag;
extern __attribute__((dllimport)) int Py_VerboseFlag;
extern __attribute__((dllimport)) int Py_QuietFlag;
extern __attribute__((dllimport)) int Py_InteractiveFlag;
extern __attribute__((dllimport)) int Py_InspectFlag;
extern __attribute__((dllimport)) int Py_OptimizeFlag;
extern __attribute__((dllimport)) int Py_NoSiteFlag;
extern __attribute__((dllimport)) int Py_BytesWarningFlag;
extern __attribute__((dllimport)) int Py_UseClassExceptionsFlag;
extern __attribute__((dllimport)) int Py_FrozenFlag;
extern __attribute__((dllimport)) int Py_IgnoreEnvironmentFlag;
extern __attribute__((dllimport)) int Py_DontWriteBytecodeFlag;
extern __attribute__((dllimport)) int Py_NoUserSiteDirectory;
extern __attribute__((dllimport)) int Py_UnbufferedStdioFlag;
extern __attribute__((dllimport)) int Py_HashRandomizationFlag;
extern __attribute__((dllimport)) int Py_IsolatedFlag;
# 74 "Python.h" 2

# 1 "bytearrayobject.h" 1
# 9 "bytearrayobject.h"
# 1 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stdarg.h" 1 3 4
# 99 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stdarg.h" 3 4

# 99 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 10 "bytearrayobject.h" 2
# 23 "bytearrayobject.h"

# 23 "bytearrayobject.h"
typedef struct {
    PyVarObject ob_base;
    Py_ssize_t ob_alloc;
    char *ob_bytes;
    char *ob_start;

    int ob_exports;
} PyByteArrayObject;



extern __attribute__((dllimport)) PyTypeObject PyByteArray_Type;
extern __attribute__((dllimport)) PyTypeObject PyByteArrayIter_Type;






__attribute__((dllimport)) PyObject * PyByteArray_FromObject(PyObject *);
__attribute__((dllimport)) PyObject * PyByteArray_Concat(PyObject *, PyObject *);
__attribute__((dllimport)) PyObject * PyByteArray_FromStringAndSize(const char *, Py_ssize_t);
__attribute__((dllimport)) Py_ssize_t PyByteArray_Size(PyObject *);
__attribute__((dllimport)) char * PyByteArray_AsString(PyObject *);
__attribute__((dllimport)) int PyByteArray_Resize(PyObject *, Py_ssize_t);
# 56 "bytearrayobject.h"
extern __attribute__((dllimport)) char _PyByteArray_empty_string[];
# 76 "Python.h" 2
# 1 "bytesobject.h" 1
# 31 "bytesobject.h"
typedef struct {
    PyVarObject ob_base;
    Py_hash_t ob_shash;
    char ob_sval[1];






} PyBytesObject;


extern __attribute__((dllimport)) PyTypeObject PyBytes_Type;
extern __attribute__((dllimport)) PyTypeObject PyBytesIter_Type;





__attribute__((dllimport)) PyObject * PyBytes_FromStringAndSize(const char *, Py_ssize_t);
__attribute__((dllimport)) PyObject * PyBytes_FromString(const char *);
__attribute__((dllimport)) PyObject * PyBytes_FromObject(PyObject *);
__attribute__((dllimport)) PyObject * PyBytes_FromFormatV(const char*, va_list)
    __attribute__((format(printf, 1, 0)));
__attribute__((dllimport)) PyObject * PyBytes_FromFormat(const char*, ...)
    __attribute__((format(printf, 1, 2)));
__attribute__((dllimport)) Py_ssize_t PyBytes_Size(PyObject *);
__attribute__((dllimport)) char * PyBytes_AsString(PyObject *);
__attribute__((dllimport)) PyObject * PyBytes_Repr(PyObject *, int);
__attribute__((dllimport)) void PyBytes_Concat(PyObject **, PyObject *);
__attribute__((dllimport)) void PyBytes_ConcatAndDel(PyObject **, PyObject *);

__attribute__((dllimport)) int _PyBytes_Resize(PyObject **, Py_ssize_t);

__attribute__((dllimport)) PyObject * PyBytes_DecodeEscape(const char *, Py_ssize_t,
         const char *, Py_ssize_t,
         const char *);
# 80 "bytesobject.h"
__attribute__((dllimport)) PyObject * _PyBytes_Join(PyObject *sep, PyObject *x);







__attribute__((dllimport)) int PyBytes_AsStringAndSize(
    PyObject *obj,
    char **s,
    Py_ssize_t *len


    );





__attribute__((dllimport)) Py_ssize_t _PyBytes_InsertThousandsGroupingLocale(char *buffer,
                                                   Py_ssize_t n_buffer,
                                                   char *digits,
                                                   Py_ssize_t n_digits,
                                                   Py_ssize_t min_width);




__attribute__((dllimport)) Py_ssize_t _PyBytes_InsertThousandsGrouping(char *buffer,
                                                   Py_ssize_t n_buffer,
                                                   char *digits,
                                                   Py_ssize_t n_digits,
                                                   Py_ssize_t min_width,
                                                   const char *grouping,
                                                   const char *thousands_sep);
# 77 "Python.h" 2
# 1 "unicodeobject.h" 1
# 58 "unicodeobject.h"
# 1 "c:\\mingw\\include\\ctype.h" 1 3
# 33 "c:\\mingw\\include\\ctype.h" 3
       
# 34 "c:\\mingw\\include\\ctype.h" 3
# 59 "c:\\mingw\\include\\ctype.h" 3
# 1 "c:\\mingw\\include\\wctype.h" 1 3
# 33 "c:\\mingw\\include\\wctype.h" 3
       
# 34 "c:\\mingw\\include\\wctype.h" 3
# 87 "c:\\mingw\\include\\wctype.h" 3
# 1 "c:\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 1 3 4
# 88 "c:\\mingw\\include\\wctype.h" 2 3


# 89 "c:\\mingw\\include\\wctype.h" 3
typedef wchar_t wctype_t;










 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswalnum (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswalpha (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswascii (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswcntrl (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswctype (wint_t, wctype_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswdigit (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswgraph (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswlower (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswprint (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswpunct (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswspace (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswupper (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswxdigit (wint_t);

__attribute__((__deprecated__))





 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int is_wctype (wint_t, wctype_t);


__attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswblank (wint_t);







 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t towlower (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t towupper (wint_t);
# 182 "c:\\mingw\\include\\wctype.h" 3

# 60 "c:\\mingw\\include\\ctype.h" 2 3
# 68 "c:\\mingw\\include\\ctype.h" 3


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int isalnum(int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int isalpha(int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iscntrl(int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int isdigit(int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int isgraph(int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int islower(int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int isleadbyte (int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int isprint(int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int ispunct(int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int isspace(int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int isupper(int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int isxdigit(int);


__attribute__((__cdecl__)) __attribute__((__nothrow__)) int isblank (int);



 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _isctype (int, int);






 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int tolower (int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int toupper (int);
# 108 "c:\\mingw\\include\\ctype.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _tolower (int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _toupper (int);
# 140 "c:\\mingw\\include\\ctype.h" 3
  extern __attribute__((__dllimport__)) unsigned short _ctype[];



  extern __attribute__((__dllimport__)) unsigned short *_pctype;
# 240 "c:\\mingw\\include\\ctype.h" 3
extern inline __attribute__((__gnu_inline__)) __attribute__((__cdecl__)) __attribute__((__nothrow__)) int isleadbyte (int c)
{ return (_pctype[(unsigned char)(c)] & 0x8000); }


__attribute__((__cdecl__)) __attribute__((__nothrow__)) int __isascii (int);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int __toascii (int);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int __iscsymf (int);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int __iscsym (int);
# 267 "c:\\mingw\\include\\ctype.h" 3
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int isascii (int);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int toascii (int);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int iscsymf (int);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int iscsym (int);





# 59 "unicodeobject.h" 2
# 93 "unicodeobject.h"

# 93 "unicodeobject.h"
typedef wchar_t Py_UNICODE;
# 115 "unicodeobject.h"
# 1 "c:\\mingw\\include\\wchar.h" 1 3
# 35 "c:\\mingw\\include\\wchar.h" 3
       
# 36 "c:\\mingw\\include\\wchar.h" 3
# 61 "c:\\mingw\\include\\wchar.h" 3
# 1 "c:\\mingw\\include\\wctype.h" 1 3
# 33 "c:\\mingw\\include\\wctype.h" 3
       
# 34 "c:\\mingw\\include\\wctype.h" 3
# 191 "c:\\mingw\\include\\wctype.h" 3

# 191 "c:\\mingw\\include\\wctype.h" 3
typedef wchar_t wctrans_t;


# 202 "c:\\mingw\\include\\wctype.h" 3
__attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t towctrans (wint_t, wctrans_t);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) wctrans_t wctrans (const char*);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) wctype_t wctype (const char*);


# 62 "c:\\mingw\\include\\wchar.h" 2 3
# 83 "c:\\mingw\\include\\wchar.h" 3
# 1 "c:\\mingw\\include\\stdio.h" 1 3
# 84 "c:\\mingw\\include\\wchar.h" 2 3
# 147 "c:\\mingw\\include\\wchar.h" 3
# 1 "c:\\mingw\\include\\stdlib.h" 1 3
# 148 "c:\\mingw\\include\\wchar.h" 2 3
# 199 "c:\\mingw\\include\\wchar.h" 3
# 1 "c:\\mingw\\include\\direct.h" 1 3
# 34 "c:\\mingw\\include\\direct.h" 3
       
# 35 "c:\\mingw\\include\\direct.h" 3
# 60 "c:\\mingw\\include\\direct.h" 3

# 86 "c:\\mingw\\include\\direct.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wchdir (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wgetcwd (wchar_t *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wgetdcwd (int, wchar_t *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wmkdir (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wrmdir (const wchar_t *);




# 200 "c:\\mingw\\include\\wchar.h" 2 3
# 212 "c:\\mingw\\include\\wchar.h" 3
# 1 "c:\\mingw\\include\\sys/stat.h" 1 3
# 213 "c:\\mingw\\include\\wchar.h" 2 3
# 237 "c:\\mingw\\include\\wchar.h" 3
# 1 "c:\\mingw\\include\\io.h" 1 3
# 238 "c:\\mingw\\include\\wchar.h" 2 3
# 290 "c:\\mingw\\include\\wchar.h" 3
# 1 "c:\\mingw\\include\\time.h" 1 3
# 291 "c:\\mingw\\include\\wchar.h" 2 3
# 328 "c:\\mingw\\include\\wchar.h" 3
# 1 "c:\\mingw\\include\\locale.h" 1 3
# 34 "c:\\mingw\\include\\locale.h" 3
       
# 35 "c:\\mingw\\include\\locale.h" 3
# 135 "c:\\mingw\\include\\locale.h" 3

# 151 "c:\\mingw\\include\\locale.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wsetlocale (int, const wchar_t *);
# 178 "c:\\mingw\\include\\locale.h" 3

# 329 "c:\\mingw\\include\\wchar.h" 2 3







# 1 "c:\\mingw\\include\\process.h" 1 3
# 33 "c:\\mingw\\include\\process.h" 3
       
# 34 "c:\\mingw\\include\\process.h" 3
# 91 "c:\\mingw\\include\\process.h" 3
# 1 "c:\\mingw\\include\\stdint.h" 1 3
# 34 "c:\\mingw\\include\\stdint.h" 3
       
# 35 "c:\\mingw\\include\\stdint.h" 3
# 92 "c:\\mingw\\include\\process.h" 2 3


# 240 "c:\\mingw\\include\\process.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wexecl (const wchar_t *, const wchar_t *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wexecle (const wchar_t *, const wchar_t *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wexeclp (const wchar_t *, const wchar_t *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wexeclpe (const wchar_t *, const wchar_t *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wexecv (const wchar_t *, const wchar_t * const *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) intptr_t _wexecve
(const wchar_t *, const wchar_t * const *, const wchar_t * const *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wexecvp (const wchar_t *, const wchar_t * const *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) intptr_t _wexecvpe
(const wchar_t *, const wchar_t * const *, const wchar_t * const *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wspawnl (int, const wchar_t *, const wchar_t *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wspawnle (int, const wchar_t *, const wchar_t *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wspawnlp (int, const wchar_t *, const wchar_t *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wspawnlpe (int, const wchar_t *, const wchar_t *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wspawnv (int, const wchar_t *, const wchar_t * const *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) intptr_t _wspawnve
(int, const wchar_t *, const wchar_t * const *, const wchar_t * const *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wspawnvp (int, const wchar_t *, const wchar_t * const *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) intptr_t _wspawnvpe
(int, const wchar_t *, const wchar_t * const *, const wchar_t * const *);




# 337 "c:\\mingw\\include\\wchar.h" 2 3
# 370 "c:\\mingw\\include\\wchar.h" 3

# 509 "c:\\mingw\\include\\wchar.h" 3
typedef wchar_t _Wint_t;


typedef int mbstate_t;





__attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t btowc (int);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int wctob (wint_t);

__attribute__((__cdecl__)) __attribute__((__nothrow__))
size_t mbrlen (const char *__restrict__, size_t, mbstate_t *__restrict__);

__attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t mbrtowc
(wchar_t *__restrict__, const char *__restrict__, size_t, mbstate_t *__restrict__);

__attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t mbsrtowcs
(wchar_t *__restrict__, const char **__restrict__, size_t, mbstate_t *__restrict__);

__attribute__((__cdecl__)) __attribute__((__nothrow__))
size_t wcrtomb (char * __restrict__, wchar_t, mbstate_t *__restrict__);

__attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t wcsrtombs
(char *__restrict__, const wchar_t **__restrict__, size_t, mbstate_t *__restrict__);







__attribute__((__cdecl__)) __attribute__((__nothrow__)) int fwide (FILE *, int);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int mbsinit (const mbstate_t *);
# 555 "c:\\mingw\\include\\wchar.h" 3
__attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wmemset (wchar_t *, wchar_t, size_t);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wmemchr (const wchar_t *, wchar_t, size_t);





int wmemcmp (const wchar_t *, const wchar_t *, size_t);

__attribute__((__cdecl__)) __attribute__((__nothrow__))
wchar_t *wmemcpy (wchar_t *__restrict__, const wchar_t *__restrict__, size_t);

__attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wmemmove (wchar_t *, const wchar_t *, size_t);

__attribute__((__cdecl__)) __attribute__((__nothrow__))
long long wcstoll (const wchar_t *__restrict__, wchar_t **__restrict__, int);

__attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned long long wcstoull
(const wchar_t *__restrict__, wchar_t **__restrict__, int);



# 116 "unicodeobject.h" 2






# 121 "unicodeobject.h"
typedef unsigned int Py_UCS4;







typedef unsigned short Py_UCS2;




typedef unsigned char Py_UCS1;
# 217 "unicodeobject.h"
typedef struct {
# 291 "unicodeobject.h"
    PyObject ob_base;
    Py_ssize_t length;
    Py_hash_t hash;
    struct {
# 303 "unicodeobject.h"
        unsigned int interned:2;
# 331 "unicodeobject.h"
        unsigned int kind:3;




        unsigned int compact:1;



        unsigned int ascii:1;




        unsigned int ready:1;


        unsigned int :24;
    } state;
    wchar_t *wstr;
} PyASCIIObject;




typedef struct {
    PyASCIIObject _base;
    Py_ssize_t utf8_length;

    char *utf8;
    Py_ssize_t wstr_length;

} PyCompactUnicodeObject;




typedef struct {
    PyCompactUnicodeObject _base;
    union {
        void *any;
        Py_UCS1 *latin1;
        Py_UCS2 *ucs2;
        Py_UCS4 *ucs4;
    } data;
} PyUnicodeObject;


extern __attribute__((dllimport)) PyTypeObject PyUnicode_Type;
extern __attribute__((dllimport)) PyTypeObject PyUnicodeIter_Type;
# 451 "unicodeobject.h"
enum PyUnicode_Kind {



    PyUnicode_WCHAR_KIND = 0,

    PyUnicode_1BYTE_KIND = 1,
    PyUnicode_2BYTE_KIND = 2,
    PyUnicode_4BYTE_KIND = 4
};
# 602 "unicodeobject.h"
__attribute__((dllimport)) PyObject* PyUnicode_New(
    Py_ssize_t size,
    Py_UCS4 maxchar
    );
# 616 "unicodeobject.h"
__attribute__((dllimport)) int _PyUnicode_Ready(
    PyObject *unicode
    );




__attribute__((dllimport)) PyObject* _PyUnicode_Copy(
    PyObject *unicode
    );
# 647 "unicodeobject.h"
__attribute__((dllimport)) Py_ssize_t PyUnicode_CopyCharacters(
    PyObject *to,
    Py_ssize_t to_start,
    PyObject *from,
    Py_ssize_t from_start,
    Py_ssize_t how_many
    );




__attribute__((dllimport)) void _PyUnicode_FastCopyCharacters(
    PyObject *to,
    Py_ssize_t to_start,
    PyObject *from,
    Py_ssize_t from_start,
    Py_ssize_t how_many
    );
# 676 "unicodeobject.h"
__attribute__((dllimport)) Py_ssize_t PyUnicode_Fill(
    PyObject *unicode,
    Py_ssize_t start,
    Py_ssize_t length,
    Py_UCS4 fill_char
    );



__attribute__((dllimport)) void _PyUnicode_FastFill(
    PyObject *unicode,
    Py_ssize_t start,
    Py_ssize_t length,
    Py_UCS4 fill_char
    );
# 704 "unicodeobject.h"
__attribute__((dllimport)) PyObject* PyUnicode_FromUnicode(
    const Py_UNICODE *u,
    Py_ssize_t size
    );



__attribute__((dllimport)) PyObject* PyUnicode_FromStringAndSize(
    const char *u,
    Py_ssize_t size
    );



__attribute__((dllimport)) PyObject* PyUnicode_FromString(
    const char *u
    );




__attribute__((dllimport)) PyObject* PyUnicode_FromKindAndData(
    int kind,
    const void *buffer,
    Py_ssize_t size);



__attribute__((dllimport)) PyObject* _PyUnicode_FromASCII(
    const char *buffer,
    Py_ssize_t size);


__attribute__((dllimport)) PyObject* PyUnicode_Substring(
    PyObject *str,
    Py_ssize_t start,
    Py_ssize_t end);




__attribute__((dllimport)) Py_UCS4 _PyUnicode_FindMaxChar (
    PyObject *unicode,
    Py_ssize_t start,
    Py_ssize_t end);







__attribute__((dllimport)) Py_UCS4* PyUnicode_AsUCS4(
    PyObject *unicode,
    Py_UCS4* buffer,
    Py_ssize_t buflen,
    int copy_null);




__attribute__((dllimport)) Py_UCS4* PyUnicode_AsUCS4Copy(PyObject *unicode);







__attribute__((dllimport)) Py_UNICODE * PyUnicode_AsUnicode(
    PyObject *unicode
    );
# 784 "unicodeobject.h"
__attribute__((dllimport)) Py_UNICODE * PyUnicode_AsUnicodeAndSize(
    PyObject *unicode,
    Py_ssize_t *size
    );




__attribute__((dllimport)) Py_ssize_t PyUnicode_GetLength(
    PyObject *unicode
);




__attribute__((dllimport)) Py_ssize_t PyUnicode_GetSize(
    PyObject *unicode
    );



__attribute__((dllimport)) Py_UCS4 PyUnicode_ReadChar(
    PyObject *unicode,
    Py_ssize_t index
    );






__attribute__((dllimport)) int PyUnicode_WriteChar(
    PyObject *unicode,
    Py_ssize_t index,
    Py_UCS4 character
    );



__attribute__((dllimport)) Py_UNICODE PyUnicode_GetMax(void);
# 842 "unicodeobject.h"
__attribute__((dllimport)) int PyUnicode_Resize(
    PyObject **unicode,
    Py_ssize_t length
    );
# 864 "unicodeobject.h"
__attribute__((dllimport)) PyObject* PyUnicode_FromEncodedObject(
    PyObject *obj,
    const char *encoding,
    const char *errors
    );
# 883 "unicodeobject.h"
__attribute__((dllimport)) PyObject* PyUnicode_FromObject(
    PyObject *obj
    );

__attribute__((dllimport)) PyObject * PyUnicode_FromFormatV(
    const char *format,
    va_list vargs
    );
__attribute__((dllimport)) PyObject * PyUnicode_FromFormat(
    const char *format,
    ...
    );


typedef struct {
    PyObject *buffer;
    void *data;
    enum PyUnicode_Kind kind;
    Py_UCS4 maxchar;
    Py_ssize_t size;
    Py_ssize_t pos;


    Py_ssize_t min_length;


    Py_UCS4 min_char;


    unsigned char overallocate;



    unsigned char readonly;
} _PyUnicodeWriter ;






__attribute__((dllimport)) void
_PyUnicodeWriter_Init(_PyUnicodeWriter *writer);
# 941 "unicodeobject.h"
__attribute__((dllimport)) int
_PyUnicodeWriter_PrepareInternal(_PyUnicodeWriter *writer,
                                 Py_ssize_t length, Py_UCS4 maxchar);



__attribute__((dllimport)) int
_PyUnicodeWriter_WriteChar(_PyUnicodeWriter *writer,
    Py_UCS4 ch
    );



__attribute__((dllimport)) int
_PyUnicodeWriter_WriteStr(_PyUnicodeWriter *writer,
    PyObject *str
    );



__attribute__((dllimport)) int
_PyUnicodeWriter_WriteSubstring(_PyUnicodeWriter *writer,
    PyObject *str,
    Py_ssize_t start,
    Py_ssize_t end
    );



__attribute__((dllimport)) int
_PyUnicodeWriter_WriteASCIIString(_PyUnicodeWriter *writer,
    const char *str,
    Py_ssize_t len
    );



__attribute__((dllimport)) int
_PyUnicodeWriter_WriteLatin1String(_PyUnicodeWriter *writer,
    const char *str,
    Py_ssize_t len
    );




__attribute__((dllimport)) PyObject *
_PyUnicodeWriter_Finish(_PyUnicodeWriter *writer);


__attribute__((dllimport)) void
_PyUnicodeWriter_Dealloc(_PyUnicodeWriter *writer);





__attribute__((dllimport)) int _PyUnicode_FormatAdvancedWriter(
    _PyUnicodeWriter *writer,
    PyObject *obj,
    PyObject *format_spec,
    Py_ssize_t start,
    Py_ssize_t end);


__attribute__((dllimport)) void PyUnicode_InternInPlace(PyObject **);
__attribute__((dllimport)) void PyUnicode_InternImmortal(PyObject **);
__attribute__((dllimport)) PyObject * PyUnicode_InternFromString(
    const char *u
    );

__attribute__((dllimport)) void _Py_ReleaseInternedUnicodeStrings(void);
# 1028 "unicodeobject.h"
__attribute__((dllimport)) PyObject* PyUnicode_FromWideChar(
    const wchar_t *w,
    Py_ssize_t size
    );
# 1045 "unicodeobject.h"
__attribute__((dllimport)) Py_ssize_t PyUnicode_AsWideChar(
    PyObject *unicode,
    wchar_t *w,
    Py_ssize_t size
    );
# 1059 "unicodeobject.h"
__attribute__((dllimport)) wchar_t* PyUnicode_AsWideCharString(
    PyObject *unicode,
    Py_ssize_t *size
    );


__attribute__((dllimport)) void* _PyUnicode_AsKind(PyObject *s, unsigned int kind);
# 1079 "unicodeobject.h"
__attribute__((dllimport)) PyObject* PyUnicode_FromOrdinal(int ordinal);
# 1090 "unicodeobject.h"
__attribute__((dllimport)) int PyUnicode_ClearFreeList(void);
# 1133 "unicodeobject.h"
__attribute__((dllimport)) char * PyUnicode_AsUTF8AndSize(
    PyObject *unicode,
    Py_ssize_t *size);
# 1160 "unicodeobject.h"
__attribute__((dllimport)) char * PyUnicode_AsUTF8(PyObject *unicode);





__attribute__((dllimport)) const char* PyUnicode_GetDefaultEncoding(void);






__attribute__((dllimport)) PyObject* PyUnicode_Decode(
    const char *s,
    Py_ssize_t size,
    const char *encoding,
    const char *errors
    );




__attribute__((dllimport)) PyObject* PyUnicode_AsDecodedObject(
    PyObject *unicode,
    const char *encoding,
    const char *errors
    );




__attribute__((dllimport)) PyObject* PyUnicode_AsDecodedUnicode(
    PyObject *unicode,
    const char *encoding,
    const char *errors
    );





__attribute__((dllimport)) PyObject* PyUnicode_Encode(
    const Py_UNICODE *s,
    Py_ssize_t size,
    const char *encoding,
    const char *errors
    );





__attribute__((dllimport)) PyObject* PyUnicode_AsEncodedObject(
    PyObject *unicode,
    const char *encoding,
    const char *errors
    );




__attribute__((dllimport)) PyObject* PyUnicode_AsEncodedString(
    PyObject *unicode,
    const char *encoding,
    const char *errors
    );




__attribute__((dllimport)) PyObject* PyUnicode_AsEncodedUnicode(
    PyObject *unicode,
    const char *encoding,
    const char *errors
    );



__attribute__((dllimport)) PyObject* PyUnicode_BuildEncodingMap(
    PyObject* string
   );



__attribute__((dllimport)) PyObject* PyUnicode_DecodeUTF7(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );

__attribute__((dllimport)) PyObject* PyUnicode_DecodeUTF7Stateful(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    Py_ssize_t *consumed
    );


__attribute__((dllimport)) PyObject* PyUnicode_EncodeUTF7(
    const Py_UNICODE *data,
    Py_ssize_t length,
    int base64SetO,
    int base64WhiteSpace,
    const char *errors
    );
__attribute__((dllimport)) PyObject* _PyUnicode_EncodeUTF7(
    PyObject *unicode,
    int base64SetO,
    int base64WhiteSpace,
    const char *errors
    );




__attribute__((dllimport)) PyObject* PyUnicode_DecodeUTF8(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );

__attribute__((dllimport)) PyObject* PyUnicode_DecodeUTF8Stateful(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    Py_ssize_t *consumed
    );

__attribute__((dllimport)) PyObject* PyUnicode_AsUTF8String(
    PyObject *unicode
    );


__attribute__((dllimport)) PyObject* _PyUnicode_AsUTF8String(
    PyObject *unicode,
    const char *errors);

__attribute__((dllimport)) PyObject* PyUnicode_EncodeUTF8(
    const Py_UNICODE *data,
    Py_ssize_t length,
    const char *errors
    );
# 1330 "unicodeobject.h"
__attribute__((dllimport)) PyObject* PyUnicode_DecodeUTF32(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    int *byteorder


    );

__attribute__((dllimport)) PyObject* PyUnicode_DecodeUTF32Stateful(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    int *byteorder,


    Py_ssize_t *consumed
    );




__attribute__((dllimport)) PyObject* PyUnicode_AsUTF32String(
    PyObject *unicode
    );
# 1373 "unicodeobject.h"
__attribute__((dllimport)) PyObject* PyUnicode_EncodeUTF32(
    const Py_UNICODE *data,
    Py_ssize_t length,
    const char *errors,
    int byteorder
    );
__attribute__((dllimport)) PyObject* _PyUnicode_EncodeUTF32(
    PyObject *object,
    const char *errors,
    int byteorder
    );
# 1411 "unicodeobject.h"
__attribute__((dllimport)) PyObject* PyUnicode_DecodeUTF16(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    int *byteorder


    );

__attribute__((dllimport)) PyObject* PyUnicode_DecodeUTF16Stateful(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    int *byteorder,


    Py_ssize_t *consumed
    );




__attribute__((dllimport)) PyObject* PyUnicode_AsUTF16String(
    PyObject *unicode
    );
# 1458 "unicodeobject.h"
__attribute__((dllimport)) PyObject* PyUnicode_EncodeUTF16(
    const Py_UNICODE *data,
    Py_ssize_t length,
    const char *errors,
    int byteorder
    );
__attribute__((dllimport)) PyObject* _PyUnicode_EncodeUTF16(
    PyObject* unicode,
    const char *errors,
    int byteorder
    );




__attribute__((dllimport)) PyObject* PyUnicode_DecodeUnicodeEscape(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );

__attribute__((dllimport)) PyObject* PyUnicode_AsUnicodeEscapeString(
    PyObject *unicode
    );


__attribute__((dllimport)) PyObject* PyUnicode_EncodeUnicodeEscape(
    const Py_UNICODE *data,
    Py_ssize_t length
    );




__attribute__((dllimport)) PyObject* PyUnicode_DecodeRawUnicodeEscape(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );

__attribute__((dllimport)) PyObject* PyUnicode_AsRawUnicodeEscapeString(
    PyObject *unicode
    );


__attribute__((dllimport)) PyObject* PyUnicode_EncodeRawUnicodeEscape(
    const Py_UNICODE *data,
    Py_ssize_t length
    );







PyObject *_PyUnicode_DecodeUnicodeInternal(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );
# 1527 "unicodeobject.h"
__attribute__((dllimport)) PyObject* PyUnicode_DecodeLatin1(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );

__attribute__((dllimport)) PyObject* PyUnicode_AsLatin1String(
    PyObject *unicode
    );


__attribute__((dllimport)) PyObject* _PyUnicode_AsLatin1String(
    PyObject* unicode,
    const char* errors);

__attribute__((dllimport)) PyObject* PyUnicode_EncodeLatin1(
    const Py_UNICODE *data,
    Py_ssize_t length,
    const char *errors
    );
# 1555 "unicodeobject.h"
__attribute__((dllimport)) PyObject* PyUnicode_DecodeASCII(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );

__attribute__((dllimport)) PyObject* PyUnicode_AsASCIIString(
    PyObject *unicode
    );


__attribute__((dllimport)) PyObject* _PyUnicode_AsASCIIString(
    PyObject* unicode,
    const char* errors);

__attribute__((dllimport)) PyObject* PyUnicode_EncodeASCII(
    const Py_UNICODE *data,
    Py_ssize_t length,
    const char *errors
    );
# 1599 "unicodeobject.h"
__attribute__((dllimport)) PyObject* PyUnicode_DecodeCharmap(
    const char *string,
    Py_ssize_t length,
    PyObject *mapping,

    const char *errors
    );

__attribute__((dllimport)) PyObject* PyUnicode_AsCharmapString(
    PyObject *unicode,
    PyObject *mapping

    );


__attribute__((dllimport)) PyObject* PyUnicode_EncodeCharmap(
    const Py_UNICODE *data,
    Py_ssize_t length,
    PyObject *mapping,

    const char *errors
    );
__attribute__((dllimport)) PyObject* _PyUnicode_EncodeCharmap(
    PyObject *unicode,
    PyObject *mapping,

    const char *errors
    );
# 1643 "unicodeobject.h"
__attribute__((dllimport)) PyObject * PyUnicode_TranslateCharmap(
    const Py_UNICODE *data,
    Py_ssize_t length,
    PyObject *table,
    const char *errors
    );






__attribute__((dllimport)) PyObject* PyUnicode_DecodeMBCS(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );

__attribute__((dllimport)) PyObject* PyUnicode_DecodeMBCSStateful(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    Py_ssize_t *consumed
    );

__attribute__((dllimport)) PyObject* PyUnicode_DecodeCodePageStateful(
    int code_page,
    const char *string,
    Py_ssize_t length,
    const char *errors,
    Py_ssize_t *consumed
    );

__attribute__((dllimport)) PyObject* PyUnicode_AsMBCSString(
    PyObject *unicode
    );


__attribute__((dllimport)) PyObject* PyUnicode_EncodeMBCS(
    const Py_UNICODE *data,
    Py_ssize_t length,
    const char *errors
    );


__attribute__((dllimport)) PyObject* PyUnicode_EncodeCodePage(
    int code_page,
    PyObject *unicode,
    const char *errors
    );
# 1721 "unicodeobject.h"
__attribute__((dllimport)) int PyUnicode_EncodeDecimal(
    Py_UNICODE *s,
    Py_ssize_t length,
    char *output,
    const char *errors
    );
# 1736 "unicodeobject.h"
__attribute__((dllimport)) PyObject* PyUnicode_TransformDecimalToASCII(
    Py_UNICODE *s,
    Py_ssize_t length
    );
# 1748 "unicodeobject.h"
__attribute__((dllimport)) PyObject* _PyUnicode_TransformDecimalAndSpaceToASCII(
    PyObject *unicode
    );
# 1763 "unicodeobject.h"
__attribute__((dllimport)) PyObject* PyUnicode_DecodeLocaleAndSize(
    const char *str,
    Py_ssize_t len,
    const char *errors);




__attribute__((dllimport)) PyObject* PyUnicode_DecodeLocale(
    const char *str,
    const char *errors);






__attribute__((dllimport)) PyObject* PyUnicode_EncodeLocale(
    PyObject *unicode,
    const char *errors
    );






__attribute__((dllimport)) int PyUnicode_FSConverter(PyObject*, void*);




__attribute__((dllimport)) int PyUnicode_FSDecoder(PyObject*, void*);
# 1806 "unicodeobject.h"
__attribute__((dllimport)) PyObject* PyUnicode_DecodeFSDefault(
    const char *s
    );
# 1817 "unicodeobject.h"
__attribute__((dllimport)) PyObject* PyUnicode_DecodeFSDefaultAndSize(
    const char *s,
    Py_ssize_t size
    );
# 1829 "unicodeobject.h"
__attribute__((dllimport)) PyObject* PyUnicode_EncodeFSDefault(
    PyObject *unicode
    );
# 1841 "unicodeobject.h"
__attribute__((dllimport)) PyObject* PyUnicode_Concat(
    PyObject *left,
    PyObject *right
    );




__attribute__((dllimport)) void PyUnicode_Append(
    PyObject **pleft,
    PyObject *right
    );




__attribute__((dllimport)) void PyUnicode_AppendAndDel(
    PyObject **pleft,
    PyObject *right
    );
# 1873 "unicodeobject.h"
__attribute__((dllimport)) PyObject* PyUnicode_Split(
    PyObject *s,
    PyObject *sep,
    Py_ssize_t maxsplit
    );






__attribute__((dllimport)) PyObject* PyUnicode_Splitlines(
    PyObject *s,
    int keepends
    );



__attribute__((dllimport)) PyObject* PyUnicode_Partition(
    PyObject *s,
    PyObject *sep
    );




__attribute__((dllimport)) PyObject* PyUnicode_RPartition(
    PyObject *s,
    PyObject *sep
    );
# 1917 "unicodeobject.h"
__attribute__((dllimport)) PyObject* PyUnicode_RSplit(
    PyObject *s,
    PyObject *sep,
    Py_ssize_t maxsplit
    );
# 1935 "unicodeobject.h"
__attribute__((dllimport)) PyObject * PyUnicode_Translate(
    PyObject *str,
    PyObject *table,
    const char *errors
    );




__attribute__((dllimport)) PyObject* PyUnicode_Join(
    PyObject *separator,
    PyObject *seq
    );




__attribute__((dllimport)) Py_ssize_t PyUnicode_Tailmatch(
    PyObject *str,
    PyObject *substr,
    Py_ssize_t start,
    Py_ssize_t end,
    int direction
    );





__attribute__((dllimport)) Py_ssize_t PyUnicode_Find(
    PyObject *str,
    PyObject *substr,
    Py_ssize_t start,
    Py_ssize_t end,
    int direction
    );


__attribute__((dllimport)) Py_ssize_t PyUnicode_FindChar(
    PyObject *str,
    Py_UCS4 ch,
    Py_ssize_t start,
    Py_ssize_t end,
    int direction
    );



__attribute__((dllimport)) Py_ssize_t PyUnicode_Count(
    PyObject *str,
    PyObject *substr,
    Py_ssize_t start,
    Py_ssize_t end
    );




__attribute__((dllimport)) PyObject * PyUnicode_Replace(
    PyObject *str,
    PyObject *substr,
    PyObject *replstr,
    Py_ssize_t maxcount

    );





__attribute__((dllimport)) int PyUnicode_Compare(
    PyObject *left,
    PyObject *right
    );


__attribute__((dllimport)) int _PyUnicode_CompareWithId(
    PyObject *left,
    _Py_Identifier *right
    );


__attribute__((dllimport)) int PyUnicode_CompareWithASCIIString(
    PyObject *left,
    const char *right
    );
# 2038 "unicodeobject.h"
__attribute__((dllimport)) PyObject * PyUnicode_RichCompare(
    PyObject *left,
    PyObject *right,
    int op
    );




__attribute__((dllimport)) PyObject * PyUnicode_Format(
    PyObject *format,
    PyObject *args
    );







__attribute__((dllimport)) int PyUnicode_Contains(
    PyObject *container,
    PyObject *element
    );




__attribute__((dllimport)) int _PyUnicode_HasNULChars(PyObject *);




__attribute__((dllimport)) int PyUnicode_IsIdentifier(PyObject *s);



__attribute__((dllimport)) PyObject * _PyUnicode_XStrip(
    PyObject *self,
    int striptype,
    PyObject *sepobj
    );






__attribute__((dllimport)) Py_ssize_t _PyUnicode_InsertThousandsGrouping(
    PyObject *unicode,
    Py_ssize_t index,
    Py_ssize_t n_buffer,
    void *digits,
    Py_ssize_t n_digits,
    Py_ssize_t min_width,
    const char *grouping,
    PyObject *thousands_sep,
    Py_UCS4 *maxchar);






extern __attribute__((dllimport)) const unsigned char _Py_ascii_whitespace[];
# 2111 "unicodeobject.h"
__attribute__((dllimport)) int _PyUnicode_IsLowercase(
    Py_UCS4 ch
    );

__attribute__((dllimport)) int _PyUnicode_IsUppercase(
    Py_UCS4 ch
    );

__attribute__((dllimport)) int _PyUnicode_IsTitlecase(
    Py_UCS4 ch
    );

__attribute__((dllimport)) int _PyUnicode_IsXidStart(
    Py_UCS4 ch
    );

__attribute__((dllimport)) int _PyUnicode_IsXidContinue(
    Py_UCS4 ch
    );

__attribute__((dllimport)) int _PyUnicode_IsWhitespace(
    const Py_UCS4 ch
    );

__attribute__((dllimport)) int _PyUnicode_IsLinebreak(
    const Py_UCS4 ch
    );

__attribute__((dllimport)) Py_UCS4 _PyUnicode_ToLowercase(
    Py_UCS4 ch
    );

__attribute__((dllimport)) Py_UCS4 _PyUnicode_ToUppercase(
    Py_UCS4 ch
    );

__attribute__((dllimport)) Py_UCS4 _PyUnicode_ToTitlecase(
    Py_UCS4 ch
    );

__attribute__((dllimport)) int _PyUnicode_ToLowerFull(
    Py_UCS4 ch,
    Py_UCS4 *res
    );

__attribute__((dllimport)) int _PyUnicode_ToTitleFull(
    Py_UCS4 ch,
    Py_UCS4 *res
    );

__attribute__((dllimport)) int _PyUnicode_ToUpperFull(
    Py_UCS4 ch,
    Py_UCS4 *res
    );

__attribute__((dllimport)) int _PyUnicode_ToFoldedFull(
    Py_UCS4 ch,
    Py_UCS4 *res
    );

__attribute__((dllimport)) int _PyUnicode_IsCaseIgnorable(
    Py_UCS4 ch
    );

__attribute__((dllimport)) int _PyUnicode_IsCased(
    Py_UCS4 ch
    );

__attribute__((dllimport)) int _PyUnicode_ToDecimalDigit(
    Py_UCS4 ch
    );

__attribute__((dllimport)) int _PyUnicode_ToDigit(
    Py_UCS4 ch
    );

__attribute__((dllimport)) double _PyUnicode_ToNumeric(
    Py_UCS4 ch
    );

__attribute__((dllimport)) int _PyUnicode_IsDecimalDigit(
    Py_UCS4 ch
    );

__attribute__((dllimport)) int _PyUnicode_IsDigit(
    Py_UCS4 ch
    );

__attribute__((dllimport)) int _PyUnicode_IsNumeric(
    Py_UCS4 ch
    );

__attribute__((dllimport)) int _PyUnicode_IsPrintable(
    Py_UCS4 ch
    );

__attribute__((dllimport)) int _PyUnicode_IsAlpha(
    Py_UCS4 ch
    );

__attribute__((dllimport)) size_t Py_UNICODE_strlen(
    const Py_UNICODE *u
    );

__attribute__((dllimport)) Py_UNICODE* Py_UNICODE_strcpy(
    Py_UNICODE *s1,
    const Py_UNICODE *s2);

__attribute__((dllimport)) Py_UNICODE* Py_UNICODE_strcat(
    Py_UNICODE *s1, const Py_UNICODE *s2);

__attribute__((dllimport)) Py_UNICODE* Py_UNICODE_strncpy(
    Py_UNICODE *s1,
    const Py_UNICODE *s2,
    size_t n);

__attribute__((dllimport)) int Py_UNICODE_strcmp(
    const Py_UNICODE *s1,
    const Py_UNICODE *s2
    );

__attribute__((dllimport)) int Py_UNICODE_strncmp(
    const Py_UNICODE *s1,
    const Py_UNICODE *s2,
    size_t n
    );

__attribute__((dllimport)) Py_UNICODE* Py_UNICODE_strchr(
    const Py_UNICODE *s,
    Py_UNICODE c
    );

__attribute__((dllimport)) Py_UNICODE* Py_UNICODE_strrchr(
    const Py_UNICODE *s,
    Py_UNICODE c
    );





__attribute__((dllimport)) Py_UNICODE* PyUnicode_AsUnicodeCopy(
    PyObject *unicode
    );
# 2264 "unicodeobject.h"
__attribute__((dllimport)) PyObject* _PyUnicode_FromId(_Py_Identifier*);

__attribute__((dllimport)) void _PyUnicode_ClearStaticStrings(void);
# 78 "Python.h" 2
# 1 "longobject.h" 1
# 10 "longobject.h"
typedef struct _longobject PyLongObject;

extern __attribute__((dllimport)) PyTypeObject PyLong_Type;





__attribute__((dllimport)) PyObject * PyLong_FromLong(long);
__attribute__((dllimport)) PyObject * PyLong_FromUnsignedLong(unsigned long);
__attribute__((dllimport)) PyObject * PyLong_FromSize_t(size_t);
__attribute__((dllimport)) PyObject * PyLong_FromSsize_t(Py_ssize_t);
__attribute__((dllimport)) PyObject * PyLong_FromDouble(double);
__attribute__((dllimport)) long PyLong_AsLong(PyObject *);
__attribute__((dllimport)) long PyLong_AsLongAndOverflow(PyObject *, int *);
__attribute__((dllimport)) Py_ssize_t PyLong_AsSsize_t(PyObject *);
__attribute__((dllimport)) size_t PyLong_AsSize_t(PyObject *);
__attribute__((dllimport)) unsigned long PyLong_AsUnsignedLong(PyObject *);
__attribute__((dllimport)) unsigned long PyLong_AsUnsignedLongMask(PyObject *);

__attribute__((dllimport)) int _PyLong_AsInt(PyObject *);

__attribute__((dllimport)) PyObject * PyLong_GetInfo(void);
# 70 "longobject.h"
extern __attribute__((dllimport)) unsigned char _PyLong_DigitValue[256];
# 80 "longobject.h"
__attribute__((dllimport)) double _PyLong_Frexp(PyLongObject *a, Py_ssize_t *e);


__attribute__((dllimport)) double PyLong_AsDouble(PyObject *);
__attribute__((dllimport)) PyObject * PyLong_FromVoidPtr(void *);
__attribute__((dllimport)) void * PyLong_AsVoidPtr(PyObject *);


__attribute__((dllimport)) PyObject * PyLong_FromLongLong(long long);
__attribute__((dllimport)) PyObject * PyLong_FromUnsignedLongLong(unsigned long long);
__attribute__((dllimport)) long long PyLong_AsLongLong(PyObject *);
__attribute__((dllimport)) unsigned long long PyLong_AsUnsignedLongLong(PyObject *);
__attribute__((dllimport)) unsigned long long PyLong_AsUnsignedLongLongMask(PyObject *);
__attribute__((dllimport)) long long PyLong_AsLongLongAndOverflow(PyObject *, int *);


__attribute__((dllimport)) PyObject * PyLong_FromString(const char *, char **, int);

__attribute__((dllimport)) PyObject * PyLong_FromUnicode(Py_UNICODE*, Py_ssize_t, int);
__attribute__((dllimport)) PyObject * PyLong_FromUnicodeObject(PyObject *u, int base);
__attribute__((dllimport)) PyObject * _PyLong_FromBytes(const char *, Py_ssize_t, int);







__attribute__((dllimport)) int _PyLong_Sign(PyObject *v);
# 118 "longobject.h"
__attribute__((dllimport)) size_t _PyLong_NumBits(PyObject *v);







__attribute__((dllimport)) PyObject * _PyLong_DivmodNear(PyObject *, PyObject *);
# 141 "longobject.h"
__attribute__((dllimport)) PyObject * _PyLong_FromByteArray(
    const unsigned char* bytes, size_t n,
    int little_endian, int is_signed);
# 164 "longobject.h"
__attribute__((dllimport)) int _PyLong_AsByteArray(PyLongObject* v,
    unsigned char* bytes, size_t n,
    int little_endian, int is_signed);






__attribute__((dllimport)) PyLongObject *_PyLong_FromNbInt(PyObject *);



__attribute__((dllimport)) PyObject * _PyLong_Format(PyObject *obj, int base);

__attribute__((dllimport)) int _PyLong_FormatWriter(
    _PyUnicodeWriter *writer,
    PyObject *obj,
    int base,
    int alternate);



__attribute__((dllimport)) int _PyLong_FormatAdvancedWriter(
    _PyUnicodeWriter *writer,
    PyObject *obj,
    PyObject *format_spec,
    Py_ssize_t start,
    Py_ssize_t end);





__attribute__((dllimport)) unsigned long PyOS_strtoul(const char *, char **, int);
__attribute__((dllimport)) long PyOS_strtol(const char *, char **, int);
# 79 "Python.h" 2
# 1 "longintrepr.h" 1
# 57 "longintrepr.h"
typedef unsigned short digit;
typedef short sdigit;
typedef unsigned long twodigits;
typedef long stwodigits;
# 89 "longintrepr.h"
struct _longobject {
 PyVarObject ob_base;
 digit ob_digit[1];
};

__attribute__((dllimport)) PyLongObject * _PyLong_New(Py_ssize_t);


__attribute__((dllimport)) PyObject * _PyLong_Copy(PyLongObject *src);
# 80 "Python.h" 2
# 1 "boolobject.h" 1
# 10 "boolobject.h"
extern __attribute__((dllimport)) PyTypeObject PyBool_Type;







extern __attribute__((dllimport)) struct _longobject _Py_FalseStruct, _Py_TrueStruct;
# 29 "boolobject.h"
__attribute__((dllimport)) PyObject * PyBool_FromLong(long);
# 81 "Python.h" 2
# 1 "floatobject.h" 1
# 15 "floatobject.h"
typedef struct {
    PyObject ob_base;
    double ob_fval;
} PyFloatObject;


extern __attribute__((dllimport)) PyTypeObject PyFloat_Type;
# 37 "floatobject.h"
__attribute__((dllimport)) double PyFloat_GetMax(void);
__attribute__((dllimport)) double PyFloat_GetMin(void);
__attribute__((dllimport)) PyObject * PyFloat_GetInfo(void);


__attribute__((dllimport)) PyObject * PyFloat_FromString(PyObject*);


__attribute__((dllimport)) PyObject * PyFloat_FromDouble(double);



__attribute__((dllimport)) double PyFloat_AsDouble(PyObject *);
# 87 "floatobject.h"
__attribute__((dllimport)) int _PyFloat_Pack4(double x, unsigned char *p, int le);
__attribute__((dllimport)) int _PyFloat_Pack8(double x, unsigned char *p, int le);




__attribute__((dllimport)) int _PyFloat_Repr(double x, char *p, size_t len);


__attribute__((dllimport)) int _PyFloat_Digits(char *buf, double v, int *signum);
__attribute__((dllimport)) void _PyFloat_DigitsInit(void);
# 107 "floatobject.h"
__attribute__((dllimport)) double _PyFloat_Unpack4(const unsigned char *p, int le);
__attribute__((dllimport)) double _PyFloat_Unpack8(const unsigned char *p, int le);


__attribute__((dllimport)) int PyFloat_ClearFreeList(void);

__attribute__((dllimport)) void _PyFloat_DebugMallocStats(FILE* out);



__attribute__((dllimport)) int _PyFloat_FormatAdvancedWriter(
    _PyUnicodeWriter *writer,
    PyObject *obj,
    PyObject *format_spec,
    Py_ssize_t start,
    Py_ssize_t end);
# 82 "Python.h" 2
# 1 "complexobject.h" 1
# 10 "complexobject.h"
typedef struct {
    double real;
    double imag;
} Py_complex;
# 25 "complexobject.h"
__attribute__((dllimport)) Py_complex _Py_c_sum(Py_complex, Py_complex);
__attribute__((dllimport)) Py_complex _Py_c_diff(Py_complex, Py_complex);
__attribute__((dllimport)) Py_complex _Py_c_neg(Py_complex);
__attribute__((dllimport)) Py_complex _Py_c_prod(Py_complex, Py_complex);
__attribute__((dllimport)) Py_complex _Py_c_quot(Py_complex, Py_complex);
__attribute__((dllimport)) Py_complex _Py_c_pow(Py_complex, Py_complex);
__attribute__((dllimport)) double _Py_c_abs(Py_complex);
# 41 "complexobject.h"
typedef struct {
    PyObject ob_base;
    Py_complex cval;
} PyComplexObject;


extern __attribute__((dllimport)) PyTypeObject PyComplex_Type;





__attribute__((dllimport)) PyObject * PyComplex_FromCComplex(Py_complex);

__attribute__((dllimport)) PyObject * PyComplex_FromDoubles(double real, double imag);

__attribute__((dllimport)) double PyComplex_RealAsDouble(PyObject *op);
__attribute__((dllimport)) double PyComplex_ImagAsDouble(PyObject *op);

__attribute__((dllimport)) Py_complex PyComplex_AsCComplex(PyObject *op);





__attribute__((dllimport)) int _PyComplex_FormatAdvancedWriter(
    _PyUnicodeWriter *writer,
    PyObject *obj,
    PyObject *format_spec,
    Py_ssize_t start,
    Py_ssize_t end);
# 83 "Python.h" 2
# 1 "rangeobject.h" 1
# 18 "rangeobject.h"
extern __attribute__((dllimport)) PyTypeObject PyRange_Type;
extern __attribute__((dllimport)) PyTypeObject PyRangeIter_Type;
extern __attribute__((dllimport)) PyTypeObject PyLongRangeIter_Type;
# 84 "Python.h" 2
# 1 "memoryobject.h" 1
# 10 "memoryobject.h"
extern __attribute__((dllimport)) PyTypeObject _PyManagedBuffer_Type;

extern __attribute__((dllimport)) PyTypeObject PyMemoryView_Type;
# 23 "memoryobject.h"
__attribute__((dllimport)) PyObject * PyMemoryView_FromObject(PyObject *base);
__attribute__((dllimport)) PyObject * PyMemoryView_FromMemory(char *mem, Py_ssize_t size,
                                               int flags);

__attribute__((dllimport)) PyObject * PyMemoryView_FromBuffer(Py_buffer *info);

__attribute__((dllimport)) PyObject * PyMemoryView_GetContiguous(PyObject *base,
                                                  int buffertype,
                                                  char order);
# 40 "memoryobject.h"
typedef struct {
    PyObject ob_base;
    int flags;
    Py_ssize_t exports;
    Py_buffer master;
} _PyManagedBufferObject;
# 58 "memoryobject.h"
typedef struct {
    PyVarObject ob_base;
    _PyManagedBufferObject *mbuf;
    Py_hash_t hash;
    int flags;
    Py_ssize_t exports;
    Py_buffer view;
    char format[3];
    PyObject *weakreflist;
    Py_ssize_t ob_array[1];
} PyMemoryViewObject;
# 85 "Python.h" 2
# 1 "tupleobject.h" 1
# 25 "tupleobject.h"
typedef struct {
    PyVarObject ob_base;
    PyObject *ob_item[1];





} PyTupleObject;


extern __attribute__((dllimport)) PyTypeObject PyTuple_Type;
extern __attribute__((dllimport)) PyTypeObject PyTupleIter_Type;





__attribute__((dllimport)) PyObject * PyTuple_New(Py_ssize_t size);
__attribute__((dllimport)) Py_ssize_t PyTuple_Size(PyObject *);
__attribute__((dllimport)) PyObject * PyTuple_GetItem(PyObject *, Py_ssize_t);
__attribute__((dllimport)) int PyTuple_SetItem(PyObject *, Py_ssize_t, PyObject *);
__attribute__((dllimport)) PyObject * PyTuple_GetSlice(PyObject *, Py_ssize_t, Py_ssize_t);

__attribute__((dllimport)) int _PyTuple_Resize(PyObject **, Py_ssize_t);

__attribute__((dllimport)) PyObject * PyTuple_Pack(Py_ssize_t, ...);

__attribute__((dllimport)) void _PyTuple_MaybeUntrack(PyObject *);
# 65 "tupleobject.h"
__attribute__((dllimport)) int PyTuple_ClearFreeList(void);

__attribute__((dllimport)) void _PyTuple_DebugMallocStats(FILE *out);
# 86 "Python.h" 2
# 1 "listobject.h" 1
# 23 "listobject.h"
typedef struct {
    PyVarObject ob_base;

    PyObject **ob_item;
# 39 "listobject.h"
    Py_ssize_t allocated;
} PyListObject;


extern __attribute__((dllimport)) PyTypeObject PyList_Type;
extern __attribute__((dllimport)) PyTypeObject PyListIter_Type;
extern __attribute__((dllimport)) PyTypeObject PyListRevIter_Type;
extern __attribute__((dllimport)) PyTypeObject PySortWrapper_Type;





__attribute__((dllimport)) PyObject * PyList_New(Py_ssize_t size);
__attribute__((dllimport)) Py_ssize_t PyList_Size(PyObject *);
__attribute__((dllimport)) PyObject * PyList_GetItem(PyObject *, Py_ssize_t);
__attribute__((dllimport)) int PyList_SetItem(PyObject *, Py_ssize_t, PyObject *);
__attribute__((dllimport)) int PyList_Insert(PyObject *, Py_ssize_t, PyObject *);
__attribute__((dllimport)) int PyList_Append(PyObject *, PyObject *);
__attribute__((dllimport)) PyObject * PyList_GetSlice(PyObject *, Py_ssize_t, Py_ssize_t);
__attribute__((dllimport)) int PyList_SetSlice(PyObject *, Py_ssize_t, Py_ssize_t, PyObject *);
__attribute__((dllimport)) int PyList_Sort(PyObject *);
__attribute__((dllimport)) int PyList_Reverse(PyObject *);
__attribute__((dllimport)) PyObject * PyList_AsTuple(PyObject *);

__attribute__((dllimport)) PyObject * _PyList_Extend(PyListObject *, PyObject *);

__attribute__((dllimport)) int PyList_ClearFreeList(void);
__attribute__((dllimport)) void _PyList_DebugMallocStats(FILE *out);
# 87 "Python.h" 2
# 1 "dictobject.h" 1
# 18 "dictobject.h"
typedef struct _dictkeysobject PyDictKeysObject;




typedef struct {
    PyObject ob_base;
    Py_ssize_t ma_used;
    PyDictKeysObject *ma_keys;
    PyObject **ma_values;
} PyDictObject;



extern __attribute__((dllimport)) PyTypeObject PyDict_Type;
extern __attribute__((dllimport)) PyTypeObject PyDictIterKey_Type;
extern __attribute__((dllimport)) PyTypeObject PyDictIterValue_Type;
extern __attribute__((dllimport)) PyTypeObject PyDictIterItem_Type;
extern __attribute__((dllimport)) PyTypeObject PyDictKeys_Type;
extern __attribute__((dllimport)) PyTypeObject PyDictItems_Type;
extern __attribute__((dllimport)) PyTypeObject PyDictValues_Type;
# 51 "dictobject.h"
__attribute__((dllimport)) PyObject * PyDict_New(void);
__attribute__((dllimport)) PyObject * PyDict_GetItem(PyObject *mp, PyObject *key);
__attribute__((dllimport)) PyObject * PyDict_GetItemWithError(PyObject *mp, PyObject *key);
__attribute__((dllimport)) PyObject * _PyDict_GetItemIdWithError(PyObject *dp,
                                                  struct _Py_Identifier *key);

__attribute__((dllimport)) PyObject * PyDict_SetDefault(
    PyObject *mp, PyObject *key, PyObject *defaultobj);

__attribute__((dllimport)) int PyDict_SetItem(PyObject *mp, PyObject *key, PyObject *item);
__attribute__((dllimport)) int PyDict_DelItem(PyObject *mp, PyObject *key);
__attribute__((dllimport)) void PyDict_Clear(PyObject *mp);
__attribute__((dllimport)) int PyDict_Next(
    PyObject *mp, Py_ssize_t *pos, PyObject **key, PyObject **value);

PyDictKeysObject *_PyDict_NewKeysForClass(void);
__attribute__((dllimport)) PyObject * PyObject_GenericGetDict(PyObject *, void *);
__attribute__((dllimport)) int _PyDict_Next(
    PyObject *mp, Py_ssize_t *pos, PyObject **key, PyObject **value, Py_hash_t *hash);

__attribute__((dllimport)) PyObject * PyDict_Keys(PyObject *mp);
__attribute__((dllimport)) PyObject * PyDict_Values(PyObject *mp);
__attribute__((dllimport)) PyObject * PyDict_Items(PyObject *mp);
__attribute__((dllimport)) Py_ssize_t PyDict_Size(PyObject *mp);
__attribute__((dllimport)) PyObject * PyDict_Copy(PyObject *mp);
__attribute__((dllimport)) int PyDict_Contains(PyObject *mp, PyObject *key);

__attribute__((dllimport)) int _PyDict_Contains(PyObject *mp, PyObject *key, Py_hash_t hash);
__attribute__((dllimport)) PyObject * _PyDict_NewPresized(Py_ssize_t minused);
__attribute__((dllimport)) void _PyDict_MaybeUntrack(PyObject *mp);
__attribute__((dllimport)) int _PyDict_HasOnlyStringKeys(PyObject *mp);
Py_ssize_t _PyDict_KeysSize(PyDictKeysObject *keys);


__attribute__((dllimport)) int PyDict_ClearFreeList(void);



__attribute__((dllimport)) int PyDict_Update(PyObject *mp, PyObject *other);






__attribute__((dllimport)) int PyDict_Merge(PyObject *mp,
                                   PyObject *other,
                                   int override);






__attribute__((dllimport)) int PyDict_MergeFromSeq2(PyObject *d,
                                           PyObject *seq2,
                                           int override);

__attribute__((dllimport)) PyObject * PyDict_GetItemString(PyObject *dp, const char *key);
__attribute__((dllimport)) PyObject * _PyDict_GetItemId(PyObject *dp, struct _Py_Identifier *key);
__attribute__((dllimport)) int PyDict_SetItemString(PyObject *dp, const char *key, PyObject *item);
__attribute__((dllimport)) int _PyDict_SetItemId(PyObject *dp, struct _Py_Identifier *key, PyObject *item);
__attribute__((dllimport)) int PyDict_DelItemString(PyObject *dp, const char *key);


__attribute__((dllimport)) int _PyDict_DelItemId(PyObject *mp, struct _Py_Identifier *key);
__attribute__((dllimport)) void _PyDict_DebugMallocStats(FILE *out);

int _PyObjectDict_SetItem(PyTypeObject *tp, PyObject **dictptr, PyObject *name, PyObject *value);
PyObject *_PyDict_LoadGlobal(PyDictObject *, PyDictObject *, PyObject *);
# 88 "Python.h" 2
# 1 "enumobject.h" 1
# 10 "enumobject.h"
extern __attribute__((dllimport)) PyTypeObject PyEnum_Type;
extern __attribute__((dllimport)) PyTypeObject PyReversed_Type;
# 89 "Python.h" 2
# 1 "setobject.h" 1
# 24 "setobject.h"
typedef struct {

    PyObject *key;
    Py_hash_t hash;
} setentry;






typedef struct _setobject PySetObject;
struct _setobject {
    PyObject ob_base;

    Py_ssize_t fill;
    Py_ssize_t used;





    Py_ssize_t mask;





    setentry *table;
    setentry *(*lookup)(PySetObject *so, PyObject *key, Py_hash_t hash);
    Py_hash_t hash;
    setentry smalltable[8];

    PyObject *weakreflist;
};


extern __attribute__((dllimport)) PyTypeObject PySet_Type;
extern __attribute__((dllimport)) PyTypeObject PyFrozenSet_Type;
extern __attribute__((dllimport)) PyTypeObject PySetIter_Type;

extern __attribute__((dllimport)) PyObject * _PySet_Dummy;
# 90 "setobject.h"
__attribute__((dllimport)) PyObject * PySet_New(PyObject *);
__attribute__((dllimport)) PyObject * PyFrozenSet_New(PyObject *);
__attribute__((dllimport)) Py_ssize_t PySet_Size(PyObject *anyset);



__attribute__((dllimport)) int PySet_Clear(PyObject *set);
__attribute__((dllimport)) int PySet_Contains(PyObject *anyset, PyObject *key);
__attribute__((dllimport)) int PySet_Discard(PyObject *set, PyObject *key);
__attribute__((dllimport)) int PySet_Add(PyObject *set, PyObject *key);

__attribute__((dllimport)) int _PySet_NextEntry(PyObject *set, Py_ssize_t *pos, PyObject **key, Py_hash_t *hash);

__attribute__((dllimport)) PyObject * PySet_Pop(PyObject *set);

__attribute__((dllimport)) int _PySet_Update(PyObject *set, PyObject *iterable);

__attribute__((dllimport)) int PySet_ClearFreeList(void);
# 90 "Python.h" 2
# 1 "methodobject.h" 1
# 14 "methodobject.h"
extern __attribute__((dllimport)) PyTypeObject PyCFunction_Type;



typedef PyObject *(*PyCFunction)(PyObject *, PyObject *);
typedef PyObject *(*PyCFunctionWithKeywords)(PyObject *, PyObject *,
                                             PyObject *);
typedef PyObject *(*PyNoArgsFunction)(PyObject *);

__attribute__((dllimport)) PyCFunction PyCFunction_GetFunction(PyObject *);
__attribute__((dllimport)) PyObject * PyCFunction_GetSelf(PyObject *);
__attribute__((dllimport)) int PyCFunction_GetFlags(PyObject *);
# 38 "methodobject.h"
__attribute__((dllimport)) PyObject * PyCFunction_Call(PyObject *, PyObject *, PyObject *);

struct PyMethodDef {
    const char *ml_name;
    PyCFunction ml_meth;
    int ml_flags;

    const char *ml_doc;
};
typedef struct PyMethodDef PyMethodDef;


__attribute__((dllimport)) PyObject * PyCFunction_NewEx(PyMethodDef *, PyObject *,
                                         PyObject *);
# 75 "methodobject.h"
typedef struct {
    PyObject ob_base;
    PyMethodDef *m_ml;
    PyObject *m_self;
    PyObject *m_module;
} PyCFunctionObject;


__attribute__((dllimport)) int PyCFunction_ClearFreeList(void);


__attribute__((dllimport)) void _PyCFunction_DebugMallocStats(FILE *out);
__attribute__((dllimport)) void _PyMethod_DebugMallocStats(FILE *out);
# 91 "Python.h" 2
# 1 "moduleobject.h" 1
# 10 "moduleobject.h"
extern __attribute__((dllimport)) PyTypeObject PyModule_Type;




__attribute__((dllimport)) PyObject * PyModule_NewObject(
    PyObject *name
    );
__attribute__((dllimport)) PyObject * PyModule_New(
    const char *name
    );
__attribute__((dllimport)) PyObject * PyModule_GetDict(PyObject *);
__attribute__((dllimport)) PyObject * PyModule_GetNameObject(PyObject *);
__attribute__((dllimport)) const char * PyModule_GetName(PyObject *);
__attribute__((dllimport)) const char * PyModule_GetFilename(PyObject *);
__attribute__((dllimport)) PyObject * PyModule_GetFilenameObject(PyObject *);

__attribute__((dllimport)) void _PyModule_Clear(PyObject *);
__attribute__((dllimport)) void _PyModule_ClearDict(PyObject *);

__attribute__((dllimport)) struct PyModuleDef* PyModule_GetDef(PyObject*);
__attribute__((dllimport)) void* PyModule_GetState(PyObject*);

typedef struct PyModuleDef_Base {
  PyObject ob_base;
  PyObject* (*m_init)(void);
  Py_ssize_t m_index;
  PyObject* m_copy;
} PyModuleDef_Base;
# 47 "moduleobject.h"
typedef struct PyModuleDef{
  PyModuleDef_Base m_base;
  const char* m_name;
  const char* m_doc;
  Py_ssize_t m_size;
  PyMethodDef *m_methods;
  inquiry m_reload;
  traverseproc m_traverse;
  inquiry m_clear;
  freefunc m_free;
}PyModuleDef;
# 92 "Python.h" 2
# 1 "funcobject.h" 1
# 21 "funcobject.h"
typedef struct {
    PyObject ob_base;
    PyObject *func_code;
    PyObject *func_globals;
    PyObject *func_defaults;
    PyObject *func_kwdefaults;
    PyObject *func_closure;
    PyObject *func_doc;
    PyObject *func_name;
    PyObject *func_dict;
    PyObject *func_weakreflist;
    PyObject *func_module;
    PyObject *func_annotations;
    PyObject *func_qualname;






} PyFunctionObject;

extern __attribute__((dllimport)) PyTypeObject PyFunction_Type;



__attribute__((dllimport)) PyObject * PyFunction_New(PyObject *, PyObject *);
__attribute__((dllimport)) PyObject * PyFunction_NewWithQualName(PyObject *, PyObject *, PyObject *);
__attribute__((dllimport)) PyObject * PyFunction_GetCode(PyObject *);
__attribute__((dllimport)) PyObject * PyFunction_GetGlobals(PyObject *);
__attribute__((dllimport)) PyObject * PyFunction_GetModule(PyObject *);
__attribute__((dllimport)) PyObject * PyFunction_GetDefaults(PyObject *);
__attribute__((dllimport)) int PyFunction_SetDefaults(PyObject *, PyObject *);
__attribute__((dllimport)) PyObject * PyFunction_GetKwDefaults(PyObject *);
__attribute__((dllimport)) int PyFunction_SetKwDefaults(PyObject *, PyObject *);
__attribute__((dllimport)) PyObject * PyFunction_GetClosure(PyObject *);
__attribute__((dllimport)) int PyFunction_SetClosure(PyObject *, PyObject *);
__attribute__((dllimport)) PyObject * PyFunction_GetAnnotations(PyObject *);
__attribute__((dllimport)) int PyFunction_SetAnnotations(PyObject *, PyObject *);
# 79 "funcobject.h"
extern __attribute__((dllimport)) PyTypeObject PyClassMethod_Type;
extern __attribute__((dllimport)) PyTypeObject PyStaticMethod_Type;

__attribute__((dllimport)) PyObject * PyClassMethod_New(PyObject *);
__attribute__((dllimport)) PyObject * PyStaticMethod_New(PyObject *);
# 93 "Python.h" 2
# 1 "classobject.h" 1
# 12 "classobject.h"
typedef struct {
    PyObject ob_base;
    PyObject *im_func;
    PyObject *im_self;
    PyObject *im_weakreflist;
} PyMethodObject;

extern __attribute__((dllimport)) PyTypeObject PyMethod_Type;



__attribute__((dllimport)) PyObject * PyMethod_New(PyObject *, PyObject *);

__attribute__((dllimport)) PyObject * PyMethod_Function(PyObject *);
__attribute__((dllimport)) PyObject * PyMethod_Self(PyObject *);
# 35 "classobject.h"
__attribute__((dllimport)) int PyMethod_ClearFreeList(void);

typedef struct {
 PyObject ob_base;
 PyObject *func;
} PyInstanceMethodObject;

extern __attribute__((dllimport)) PyTypeObject PyInstanceMethod_Type;



__attribute__((dllimport)) PyObject * PyInstanceMethod_New(PyObject *);
__attribute__((dllimport)) PyObject * PyInstanceMethod_Function(PyObject *);
# 94 "Python.h" 2
# 1 "fileobject.h" 1
# 11 "fileobject.h"
__attribute__((dllimport)) PyObject * PyFile_FromFd(int, const char *, const char *, int,
                                     const char *, const char *,
                                     const char *, int);
__attribute__((dllimport)) PyObject * PyFile_GetLine(PyObject *, int);
__attribute__((dllimport)) int PyFile_WriteObject(PyObject *, PyObject *, int);
__attribute__((dllimport)) int PyFile_WriteString(const char *, PyObject *);
__attribute__((dllimport)) int PyObject_AsFileDescriptor(PyObject *);

__attribute__((dllimport)) char * Py_UniversalNewlineFgets(char *, int, FILE*, PyObject *);





extern __attribute__((dllimport)) const char * Py_FileSystemDefaultEncoding;
extern __attribute__((dllimport)) int Py_HasFileSystemDefaultEncoding;






__attribute__((dllimport)) PyObject * PyFile_NewStdPrinter(int);
extern __attribute__((dllimport)) PyTypeObject PyStdPrinter_Type;
# 95 "Python.h" 2
# 1 "pycapsule.h" 1
# 21 "pycapsule.h"
extern __attribute__((dllimport)) PyTypeObject PyCapsule_Type;

typedef void (*PyCapsule_Destructor)(PyObject *);




__attribute__((dllimport)) PyObject * PyCapsule_New(
    void *pointer,
    const char *name,
    PyCapsule_Destructor destructor);

__attribute__((dllimport)) void * PyCapsule_GetPointer(PyObject *capsule, const char *name);

__attribute__((dllimport)) PyCapsule_Destructor PyCapsule_GetDestructor(PyObject *capsule);

__attribute__((dllimport)) const char * PyCapsule_GetName(PyObject *capsule);

__attribute__((dllimport)) void * PyCapsule_GetContext(PyObject *capsule);

__attribute__((dllimport)) int PyCapsule_IsValid(PyObject *capsule, const char *name);

__attribute__((dllimport)) int PyCapsule_SetPointer(PyObject *capsule, void *pointer);

__attribute__((dllimport)) int PyCapsule_SetDestructor(PyObject *capsule, PyCapsule_Destructor destructor);

__attribute__((dllimport)) int PyCapsule_SetName(PyObject *capsule, const char *name);

__attribute__((dllimport)) int PyCapsule_SetContext(PyObject *capsule, void *context);

__attribute__((dllimport)) void * PyCapsule_Import(
    const char *name,
    int no_block);
# 96 "Python.h" 2
# 1 "traceback.h" 1







# 1 "pystate.h" 1
# 13 "pystate.h"
struct _ts;
struct _is;




typedef struct _is {

    struct _is *next;
    struct _ts *tstate_head;

    PyObject *modules;
    PyObject *modules_by_index;
    PyObject *sysdict;
    PyObject *builtins;
    PyObject *importlib;

    PyObject *codec_search_path;
    PyObject *codec_search_cache;
    PyObject *codec_error_registry;
    int codecs_initialized;
    int fscodec_initialized;
# 43 "pystate.h"
    PyObject *builtins_copy;
} PyInterpreterState;





struct _frame;



typedef int (*Py_tracefunc)(PyObject *, struct _frame *, int, PyObject *);
# 69 "pystate.h"
typedef struct _ts {


    struct _ts *prev;
    struct _ts *next;
    PyInterpreterState *interp;

    struct _frame *frame;
    int recursion_depth;
    char overflowed;

    char recursion_critical;




    int tracing;
    int use_tracing;

    Py_tracefunc c_profilefunc;
    Py_tracefunc c_tracefunc;
    PyObject *c_profileobj;
    PyObject *c_traceobj;

    PyObject *curexc_type;
    PyObject *curexc_value;
    PyObject *curexc_traceback;

    PyObject *exc_type;
    PyObject *exc_value;
    PyObject *exc_traceback;

    PyObject *dict;

    int gilstate_counter;

    PyObject *async_exc;
    long thread_id;

    int trash_delete_nesting;
    PyObject *trash_delete_later;
# 134 "pystate.h"
    void (*on_delete)(void *);
    void *on_delete_data;



} PyThreadState;



__attribute__((dllimport)) PyInterpreterState * PyInterpreterState_New(void);
__attribute__((dllimport)) void PyInterpreterState_Clear(PyInterpreterState *);
__attribute__((dllimport)) void PyInterpreterState_Delete(PyInterpreterState *);
__attribute__((dllimport)) int _PyState_AddModule(PyObject*, struct PyModuleDef*);


__attribute__((dllimport)) int PyState_AddModule(PyObject*, struct PyModuleDef*);
__attribute__((dllimport)) int PyState_RemoveModule(struct PyModuleDef*);

__attribute__((dllimport)) PyObject* PyState_FindModule(struct PyModuleDef*);

__attribute__((dllimport)) void _PyState_ClearModules(void);


__attribute__((dllimport)) PyThreadState * PyThreadState_New(PyInterpreterState *);
__attribute__((dllimport)) PyThreadState * _PyThreadState_Prealloc(PyInterpreterState *);
__attribute__((dllimport)) void _PyThreadState_Init(PyThreadState *);
__attribute__((dllimport)) void PyThreadState_Clear(PyThreadState *);
__attribute__((dllimport)) void PyThreadState_Delete(PyThreadState *);
__attribute__((dllimport)) void _PyThreadState_DeleteExcept(PyThreadState *tstate);

__attribute__((dllimport)) void PyThreadState_DeleteCurrent(void);
__attribute__((dllimport)) void _PyGILState_Reinit(void);


__attribute__((dllimport)) PyThreadState * PyThreadState_Get(void);
__attribute__((dllimport)) PyThreadState * PyThreadState_Swap(PyThreadState *);
__attribute__((dllimport)) PyObject * PyThreadState_GetDict(void);
__attribute__((dllimport)) int PyThreadState_SetAsyncExc(long, PyObject *);







extern __attribute__((dllimport)) _Py_atomic_address _PyThreadState_Current;
# 189 "pystate.h"
typedef
    enum {PyGILState_LOCKED, PyGILState_UNLOCKED}
        PyGILState_STATE;
# 216 "pystate.h"
__attribute__((dllimport)) PyGILState_STATE PyGILState_Ensure(void);
# 226 "pystate.h"
__attribute__((dllimport)) void PyGILState_Release(PyGILState_STATE);







__attribute__((dllimport)) PyThreadState * PyGILState_GetThisThreadState(void);





__attribute__((dllimport)) int PyGILState_Check(void);
# 249 "pystate.h"
__attribute__((dllimport)) PyObject * _PyThread_CurrentFrames(void);





__attribute__((dllimport)) PyInterpreterState * PyInterpreterState_Head(void);
__attribute__((dllimport)) PyInterpreterState * PyInterpreterState_Next(PyInterpreterState *);
__attribute__((dllimport)) PyThreadState * PyInterpreterState_ThreadHead(PyInterpreterState *);
__attribute__((dllimport)) PyThreadState * PyThreadState_Next(PyThreadState *);

typedef struct _frame *(*PyThreadFrameGetter)(PyThreadState *self_);




extern __attribute__((dllimport)) PyThreadFrameGetter _PyThreadState_GetFrame;
# 9 "traceback.h" 2

struct _frame;



typedef struct _traceback {
    PyObject ob_base;
    struct _traceback *tb_next;
    struct _frame *tb_frame;
    int tb_lasti;
    int tb_lineno;
} PyTracebackObject;


__attribute__((dllimport)) int PyTraceBack_Here(struct _frame *);
__attribute__((dllimport)) int PyTraceBack_Print(PyObject *, PyObject *);

__attribute__((dllimport)) int _Py_DisplaySourceLine(PyObject *, PyObject *, int, int);
__attribute__((dllimport)) void _PyTraceback_Add(char *, char *, int);



extern __attribute__((dllimport)) PyTypeObject PyTraceBack_Type;
# 51 "traceback.h"
extern __attribute__((dllimport)) void _Py_DumpTraceback(
    int fd,
    PyThreadState *tstate);
# 65 "traceback.h"
extern __attribute__((dllimport)) const char* _Py_DumpTracebackThreads(
    int fd, PyInterpreterState *interp,
    PyThreadState *current_thread);
# 97 "Python.h" 2
# 1 "sliceobject.h" 1
# 9 "sliceobject.h"
extern __attribute__((dllimport)) PyObject _Py_EllipsisObject;
# 22 "sliceobject.h"
typedef struct {
    PyObject ob_base;
    PyObject *start, *stop, *step;
} PySliceObject;


extern __attribute__((dllimport)) PyTypeObject PySlice_Type;
extern __attribute__((dllimport)) PyTypeObject PyEllipsis_Type;



__attribute__((dllimport)) PyObject * PySlice_New(PyObject* start, PyObject* stop,
                                  PyObject* step);

__attribute__((dllimport)) PyObject * _PySlice_FromIndices(Py_ssize_t start, Py_ssize_t stop);
__attribute__((dllimport)) int _PySlice_GetLongIndices(PySliceObject *self, PyObject *length,
                                 PyObject **start_ptr, PyObject **stop_ptr,
                                 PyObject **step_ptr);

__attribute__((dllimport)) int PySlice_GetIndices(PyObject *r, Py_ssize_t length,
                                  Py_ssize_t *start, Py_ssize_t *stop, Py_ssize_t *step);
__attribute__((dllimport)) int PySlice_GetIndicesEx(PyObject *r, Py_ssize_t length,
        Py_ssize_t *start, Py_ssize_t *stop,
        Py_ssize_t *step, Py_ssize_t *slicelength);
# 98 "Python.h" 2
# 1 "cellobject.h" 1
# 9 "cellobject.h"
typedef struct {
 PyObject ob_base;
 PyObject *ob_ref;
} PyCellObject;

extern __attribute__((dllimport)) PyTypeObject PyCell_Type;



__attribute__((dllimport)) PyObject * PyCell_New(PyObject *);
__attribute__((dllimport)) PyObject * PyCell_Get(PyObject *);
__attribute__((dllimport)) int PyCell_Set(PyObject *, PyObject *);
# 99 "Python.h" 2
# 1 "iterobject.h" 1







extern __attribute__((dllimport)) PyTypeObject PySeqIter_Type;
extern __attribute__((dllimport)) PyTypeObject PyCallIter_Type;
extern __attribute__((dllimport)) PyTypeObject PyCmpWrapper_Type;



__attribute__((dllimport)) PyObject * PySeqIter_New(PyObject *);




__attribute__((dllimport)) PyObject * PyCallIter_New(PyObject *, PyObject *);
# 100 "Python.h" 2
# 1 "genobject.h" 1
# 11 "genobject.h"
struct _frame;

typedef struct {
    PyObject ob_base;



    struct _frame *gi_frame;


    char gi_running;


    PyObject *gi_code;


    PyObject *gi_weakreflist;
} PyGenObject;

extern __attribute__((dllimport)) PyTypeObject PyGen_Type;




__attribute__((dllimport)) PyObject * PyGen_New(struct _frame *);
__attribute__((dllimport)) int PyGen_NeedsFinalizing(PyGenObject *);
__attribute__((dllimport)) int _PyGen_FetchStopIterationValue(PyObject **);
PyObject *_PyGen_Send(PyGenObject *, PyObject *);
__attribute__((dllimport)) void _PyGen_Finalize(PyObject *self);
# 101 "Python.h" 2
# 1 "descrobject.h" 1







typedef PyObject *(*getter)(PyObject *, void *);
typedef int (*setter)(PyObject *, PyObject *, void *);

typedef struct PyGetSetDef {
    char *name;
    getter get;
    setter set;
    char *doc;
    void *closure;
} PyGetSetDef;


typedef PyObject *(*wrapperfunc)(PyObject *self, PyObject *args,
                                 void *wrapped);

typedef PyObject *(*wrapperfunc_kwds)(PyObject *self, PyObject *args,
                                      void *wrapped, PyObject *kwds);

struct wrapperbase {
    char *name;
    int offset;
    void *function;
    wrapperfunc wrapper;
    char *doc;
    int flags;
    PyObject *name_strobj;
};






typedef struct {
    PyObject ob_base;
    PyTypeObject *d_type;
    PyObject *d_name;
    PyObject *d_qualname;
} PyDescrObject;






typedef struct {
    PyDescrObject d_common;
    PyMethodDef *d_method;
} PyMethodDescrObject;

typedef struct {
    PyDescrObject d_common;
    struct PyMemberDef *d_member;
} PyMemberDescrObject;

typedef struct {
    PyDescrObject d_common;
    PyGetSetDef *d_getset;
} PyGetSetDescrObject;

typedef struct {
    PyDescrObject d_common;
    struct wrapperbase *d_base;
    void *d_wrapped;
} PyWrapperDescrObject;


extern __attribute__((dllimport)) PyTypeObject PyClassMethodDescr_Type;
extern __attribute__((dllimport)) PyTypeObject PyGetSetDescr_Type;
extern __attribute__((dllimport)) PyTypeObject PyMemberDescr_Type;
extern __attribute__((dllimport)) PyTypeObject PyMethodDescr_Type;
extern __attribute__((dllimport)) PyTypeObject PyWrapperDescr_Type;
extern __attribute__((dllimport)) PyTypeObject PyDictProxy_Type;
extern __attribute__((dllimport)) PyTypeObject _PyMethodWrapper_Type;

__attribute__((dllimport)) PyObject * PyDescr_NewMethod(PyTypeObject *, PyMethodDef *);
__attribute__((dllimport)) PyObject * PyDescr_NewClassMethod(PyTypeObject *, PyMethodDef *);
struct PyMemberDef;
__attribute__((dllimport)) PyObject * PyDescr_NewMember(PyTypeObject *,
                                               struct PyMemberDef *);
__attribute__((dllimport)) PyObject * PyDescr_NewGetSet(PyTypeObject *,
                                               struct PyGetSetDef *);

__attribute__((dllimport)) PyObject * PyDescr_NewWrapper(PyTypeObject *,
                                                struct wrapperbase *, void *);



__attribute__((dllimport)) PyObject * PyDictProxy_New(PyObject *);
__attribute__((dllimport)) PyObject * PyWrapper_New(PyObject *, PyObject *);


extern __attribute__((dllimport)) PyTypeObject PyProperty_Type;
# 102 "Python.h" 2
# 1 "warnings.h" 1







__attribute__((dllimport)) PyObject* _PyWarnings_Init(void);


__attribute__((dllimport)) int PyErr_WarnEx(
    PyObject *category,
    const char *message,
    Py_ssize_t stack_level);
__attribute__((dllimport)) int PyErr_WarnFormat(
    PyObject *category,
    Py_ssize_t stack_level,
    const char *format,
    ...);

__attribute__((dllimport)) int PyErr_WarnExplicitObject(
    PyObject *category,
    PyObject *message,
    PyObject *filename,
    int lineno,
    PyObject *module,
    PyObject *registry);

__attribute__((dllimport)) int PyErr_WarnExplicit(
    PyObject *category,
    const char *message,
    const char *filename,
    int lineno,
    const char *module,
    PyObject *registry);


__attribute__((dllimport)) int
PyErr_WarnExplicitFormat(PyObject *category,
                         const char *filename, int lineno,
                         const char *module, PyObject *registry,
                         const char *format, ...);
# 103 "Python.h" 2
# 1 "weakrefobject.h" 1
# 10 "weakrefobject.h"
typedef struct _PyWeakReference PyWeakReference;





struct _PyWeakReference {
    PyObject ob_base;





    PyObject *wr_object;


    PyObject *wr_callback;




    Py_hash_t hash;






    PyWeakReference *wr_prev;
    PyWeakReference *wr_next;
};


extern __attribute__((dllimport)) PyTypeObject _PyWeakref_RefType;
extern __attribute__((dllimport)) PyTypeObject _PyWeakref_ProxyType;
extern __attribute__((dllimport)) PyTypeObject _PyWeakref_CallableProxyType;
# 58 "weakrefobject.h"
__attribute__((dllimport)) PyObject * PyWeakref_NewRef(PyObject *ob,
                                              PyObject *callback);
__attribute__((dllimport)) PyObject * PyWeakref_NewProxy(PyObject *ob,
                                                PyObject *callback);
__attribute__((dllimport)) PyObject * PyWeakref_GetObject(PyObject *ref);


__attribute__((dllimport)) Py_ssize_t _PyWeakref_GetWeakrefCount(PyWeakReference *head);

__attribute__((dllimport)) void _PyWeakref_ClearRef(PyWeakReference *self);
# 104 "Python.h" 2
# 1 "structseq.h" 1
# 10 "structseq.h"
typedef struct PyStructSequence_Field {
    char *name;
    char *doc;
} PyStructSequence_Field;

typedef struct PyStructSequence_Desc {
    char *name;
    char *doc;
    struct PyStructSequence_Field *fields;
    int n_in_sequence;
} PyStructSequence_Desc;

extern char* PyStructSequence_UnnamedField;


__attribute__((dllimport)) void PyStructSequence_InitType(PyTypeObject *type,
                                           PyStructSequence_Desc *desc);
__attribute__((dllimport)) int PyStructSequence_InitType2(PyTypeObject *type,
                                           PyStructSequence_Desc *desc);

__attribute__((dllimport)) PyTypeObject* PyStructSequence_NewType(PyStructSequence_Desc *desc);

__attribute__((dllimport)) PyObject * PyStructSequence_New(PyTypeObject* type);


typedef PyTupleObject PyStructSequence;







__attribute__((dllimport)) void PyStructSequence_SetItem(PyObject*, Py_ssize_t, PyObject*);
__attribute__((dllimport)) PyObject* PyStructSequence_GetItem(PyObject*, Py_ssize_t);
# 105 "Python.h" 2
# 1 "namespaceobject.h" 1
# 10 "namespaceobject.h"
extern __attribute__((dllimport)) PyTypeObject _PyNamespace_Type;

__attribute__((dllimport)) PyObject * _PyNamespace_New(PyObject *kwds);
# 106 "Python.h" 2

# 1 "codecs.h" 1
# 26 "codecs.h"
__attribute__((dllimport)) int PyCodec_Register(
       PyObject *search_function
       );
# 49 "codecs.h"
__attribute__((dllimport)) PyObject * _PyCodec_Lookup(
       const char *encoding
       );

__attribute__((dllimport)) int _PyCodec_Forget(
       const char *encoding
       );
# 65 "codecs.h"
__attribute__((dllimport)) int PyCodec_KnownEncoding(
       const char *encoding
       );
# 79 "codecs.h"
__attribute__((dllimport)) PyObject * PyCodec_Encode(
       PyObject *object,
       const char *encoding,
       const char *errors
       );
# 95 "codecs.h"
__attribute__((dllimport)) PyObject * PyCodec_Decode(
       PyObject *object,
       const char *encoding,
       const char *errors
       );
# 115 "codecs.h"
__attribute__((dllimport)) PyObject * _PyCodec_LookupTextEncoding(
       const char *encoding,
       const char *alternate_command
       );

__attribute__((dllimport)) PyObject * _PyCodec_EncodeText(
       PyObject *object,
       const char *encoding,
       const char *errors
       );

__attribute__((dllimport)) PyObject * _PyCodec_DecodeText(
       PyObject *object,
       const char *encoding,
       const char *errors
       );




__attribute__((dllimport)) PyObject * _PyCodecInfo_GetIncrementalDecoder(
       PyObject *codec_info,
       const char *errors
       );

__attribute__((dllimport)) PyObject * _PyCodecInfo_GetIncrementalEncoder(
       PyObject *codec_info,
       const char *errors
       );
# 158 "codecs.h"
__attribute__((dllimport)) PyObject * PyCodec_Encoder(
       const char *encoding
       );



__attribute__((dllimport)) PyObject * PyCodec_Decoder(
       const char *encoding
       );



__attribute__((dllimport)) PyObject * PyCodec_IncrementalEncoder(
       const char *encoding,
       const char *errors
       );



__attribute__((dllimport)) PyObject * PyCodec_IncrementalDecoder(
       const char *encoding,
       const char *errors
       );



__attribute__((dllimport)) PyObject * PyCodec_StreamReader(
       const char *encoding,
       PyObject *stream,
       const char *errors
       );



__attribute__((dllimport)) PyObject * PyCodec_StreamWriter(
       const char *encoding,
       PyObject *stream,
       const char *errors
       );
# 206 "codecs.h"
__attribute__((dllimport)) int PyCodec_RegisterError(const char *name, PyObject *error);




__attribute__((dllimport)) PyObject * PyCodec_LookupError(const char *name);


__attribute__((dllimport)) PyObject * PyCodec_StrictErrors(PyObject *exc);


__attribute__((dllimport)) PyObject * PyCodec_IgnoreErrors(PyObject *exc);


__attribute__((dllimport)) PyObject * PyCodec_ReplaceErrors(PyObject *exc);


__attribute__((dllimport)) PyObject * PyCodec_XMLCharRefReplaceErrors(PyObject *exc);


__attribute__((dllimport)) PyObject * PyCodec_BackslashReplaceErrors(PyObject *exc);

extern __attribute__((dllimport)) const char * Py_hexdigits;
# 108 "Python.h" 2
# 1 "pyerrors.h" 1
# 16 "pyerrors.h"
typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
} PyBaseExceptionObject;

typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
    PyObject *msg;
    PyObject *filename;
    PyObject *lineno;
    PyObject *offset;
    PyObject *text;
    PyObject *print_file_and_line;
} PySyntaxErrorObject;

typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
    PyObject *msg;
    PyObject *name;
    PyObject *path;
} PyImportErrorObject;

typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
    PyObject *encoding;
    PyObject *object;
    Py_ssize_t start;
    Py_ssize_t end;
    PyObject *reason;
} PyUnicodeErrorObject;

typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
    PyObject *code;
} PySystemExitObject;

typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
    PyObject *myerrno;
    PyObject *strerror;
    PyObject *filename;
    PyObject *filename2;

    PyObject *winerror;

    Py_ssize_t written;
} PyOSErrorObject;

typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
    PyObject *value;
} PyStopIterationObject;


typedef PyOSErrorObject PyEnvironmentErrorObject;

typedef PyOSErrorObject PyWindowsErrorObject;





__attribute__((dllimport)) void PyErr_SetNone(PyObject *);
__attribute__((dllimport)) void PyErr_SetObject(PyObject *, PyObject *);

__attribute__((dllimport)) void _PyErr_SetKeyError(PyObject *);

__attribute__((dllimport)) void PyErr_SetString(
    PyObject *exception,
    const char *string
    );
__attribute__((dllimport)) PyObject * PyErr_Occurred(void);
__attribute__((dllimport)) void PyErr_Clear(void);
__attribute__((dllimport)) void PyErr_Fetch(PyObject **, PyObject **, PyObject **);
__attribute__((dllimport)) void PyErr_Restore(PyObject *, PyObject *, PyObject *);
__attribute__((dllimport)) void PyErr_GetExcInfo(PyObject **, PyObject **, PyObject **);
__attribute__((dllimport)) void PyErr_SetExcInfo(PyObject *, PyObject *, PyObject *);
# 102 "pyerrors.h"
__attribute__((dllimport)) void Py_FatalError(const char *message) ;
# 111 "pyerrors.h"
__attribute__((dllimport)) int PyErr_GivenExceptionMatches(PyObject *, PyObject *);
__attribute__((dllimport)) int PyErr_ExceptionMatches(PyObject *);
__attribute__((dllimport)) void PyErr_NormalizeException(PyObject**, PyObject**, PyObject**);


__attribute__((dllimport)) int PyException_SetTraceback(PyObject *, PyObject *);
__attribute__((dllimport)) PyObject * PyException_GetTraceback(PyObject *);


__attribute__((dllimport)) PyObject * PyException_GetCause(PyObject *);
__attribute__((dllimport)) void PyException_SetCause(PyObject *, PyObject *);


__attribute__((dllimport)) PyObject * PyException_GetContext(PyObject *);
__attribute__((dllimport)) void PyException_SetContext(PyObject *, PyObject *);

__attribute__((dllimport)) void _PyErr_ChainExceptions(PyObject *, PyObject *, PyObject *);
# 147 "pyerrors.h"
extern __attribute__((dllimport)) PyObject * PyExc_BaseException;
extern __attribute__((dllimport)) PyObject * PyExc_Exception;
extern __attribute__((dllimport)) PyObject * PyExc_StopIteration;
extern __attribute__((dllimport)) PyObject * PyExc_GeneratorExit;
extern __attribute__((dllimport)) PyObject * PyExc_ArithmeticError;
extern __attribute__((dllimport)) PyObject * PyExc_LookupError;

extern __attribute__((dllimport)) PyObject * PyExc_AssertionError;
extern __attribute__((dllimport)) PyObject * PyExc_AttributeError;
extern __attribute__((dllimport)) PyObject * PyExc_BufferError;
extern __attribute__((dllimport)) PyObject * PyExc_EOFError;
extern __attribute__((dllimport)) PyObject * PyExc_FloatingPointError;
extern __attribute__((dllimport)) PyObject * PyExc_OSError;
extern __attribute__((dllimport)) PyObject * PyExc_ImportError;
extern __attribute__((dllimport)) PyObject * PyExc_IndexError;
extern __attribute__((dllimport)) PyObject * PyExc_KeyError;
extern __attribute__((dllimport)) PyObject * PyExc_KeyboardInterrupt;
extern __attribute__((dllimport)) PyObject * PyExc_MemoryError;
extern __attribute__((dllimport)) PyObject * PyExc_NameError;
extern __attribute__((dllimport)) PyObject * PyExc_OverflowError;
extern __attribute__((dllimport)) PyObject * PyExc_RuntimeError;
extern __attribute__((dllimport)) PyObject * PyExc_NotImplementedError;
extern __attribute__((dllimport)) PyObject * PyExc_SyntaxError;
extern __attribute__((dllimport)) PyObject * PyExc_IndentationError;
extern __attribute__((dllimport)) PyObject * PyExc_TabError;
extern __attribute__((dllimport)) PyObject * PyExc_ReferenceError;
extern __attribute__((dllimport)) PyObject * PyExc_SystemError;
extern __attribute__((dllimport)) PyObject * PyExc_SystemExit;
extern __attribute__((dllimport)) PyObject * PyExc_TypeError;
extern __attribute__((dllimport)) PyObject * PyExc_UnboundLocalError;
extern __attribute__((dllimport)) PyObject * PyExc_UnicodeError;
extern __attribute__((dllimport)) PyObject * PyExc_UnicodeEncodeError;
extern __attribute__((dllimport)) PyObject * PyExc_UnicodeDecodeError;
extern __attribute__((dllimport)) PyObject * PyExc_UnicodeTranslateError;
extern __attribute__((dllimport)) PyObject * PyExc_ValueError;
extern __attribute__((dllimport)) PyObject * PyExc_ZeroDivisionError;

extern __attribute__((dllimport)) PyObject * PyExc_BlockingIOError;
extern __attribute__((dllimport)) PyObject * PyExc_BrokenPipeError;
extern __attribute__((dllimport)) PyObject * PyExc_ChildProcessError;
extern __attribute__((dllimport)) PyObject * PyExc_ConnectionError;
extern __attribute__((dllimport)) PyObject * PyExc_ConnectionAbortedError;
extern __attribute__((dllimport)) PyObject * PyExc_ConnectionRefusedError;
extern __attribute__((dllimport)) PyObject * PyExc_ConnectionResetError;
extern __attribute__((dllimport)) PyObject * PyExc_FileExistsError;
extern __attribute__((dllimport)) PyObject * PyExc_FileNotFoundError;
extern __attribute__((dllimport)) PyObject * PyExc_InterruptedError;
extern __attribute__((dllimport)) PyObject * PyExc_IsADirectoryError;
extern __attribute__((dllimport)) PyObject * PyExc_NotADirectoryError;
extern __attribute__((dllimport)) PyObject * PyExc_PermissionError;
extern __attribute__((dllimport)) PyObject * PyExc_ProcessLookupError;
extern __attribute__((dllimport)) PyObject * PyExc_TimeoutError;



extern __attribute__((dllimport)) PyObject * PyExc_EnvironmentError;
extern __attribute__((dllimport)) PyObject * PyExc_IOError;

extern __attribute__((dllimport)) PyObject * PyExc_WindowsError;


extern __attribute__((dllimport)) PyObject * PyExc_RecursionErrorInst;


extern __attribute__((dllimport)) PyObject * PyExc_Warning;
extern __attribute__((dllimport)) PyObject * PyExc_UserWarning;
extern __attribute__((dllimport)) PyObject * PyExc_DeprecationWarning;
extern __attribute__((dllimport)) PyObject * PyExc_PendingDeprecationWarning;
extern __attribute__((dllimport)) PyObject * PyExc_SyntaxWarning;
extern __attribute__((dllimport)) PyObject * PyExc_RuntimeWarning;
extern __attribute__((dllimport)) PyObject * PyExc_FutureWarning;
extern __attribute__((dllimport)) PyObject * PyExc_ImportWarning;
extern __attribute__((dllimport)) PyObject * PyExc_UnicodeWarning;
extern __attribute__((dllimport)) PyObject * PyExc_BytesWarning;
extern __attribute__((dllimport)) PyObject * PyExc_ResourceWarning;




__attribute__((dllimport)) int PyErr_BadArgument(void);
__attribute__((dllimport)) PyObject * PyErr_NoMemory(void);
__attribute__((dllimport)) PyObject * PyErr_SetFromErrno(PyObject *);
__attribute__((dllimport)) PyObject * PyErr_SetFromErrnoWithFilenameObject(
    PyObject *, PyObject *);
__attribute__((dllimport)) PyObject * PyErr_SetFromErrnoWithFilenameObjects(
    PyObject *, PyObject *, PyObject *);
__attribute__((dllimport)) PyObject * PyErr_SetFromErrnoWithFilename(
    PyObject *exc,
    const char *filename
    );

__attribute__((dllimport)) PyObject * PyErr_SetFromErrnoWithUnicodeFilename(
    PyObject *, const Py_UNICODE *);


__attribute__((dllimport)) PyObject * PyErr_Format(
    PyObject *exception,
    const char *format,
    ...
    );


__attribute__((dllimport)) PyObject * PyErr_SetFromWindowsErrWithFilename(
    int ierr,
    const char *filename
    );


__attribute__((dllimport)) PyObject * PyErr_SetFromWindowsErrWithUnicodeFilename(
    int, const Py_UNICODE *);

__attribute__((dllimport)) PyObject * PyErr_SetFromWindowsErr(int);
__attribute__((dllimport)) PyObject * PyErr_SetExcFromWindowsErrWithFilenameObject(
    PyObject *,int, PyObject *);
__attribute__((dllimport)) PyObject * PyErr_SetExcFromWindowsErrWithFilenameObjects(
    PyObject *,int, PyObject *, PyObject *);
__attribute__((dllimport)) PyObject * PyErr_SetExcFromWindowsErrWithFilename(
    PyObject *exc,
    int ierr,
    const char *filename
    );

__attribute__((dllimport)) PyObject * PyErr_SetExcFromWindowsErrWithUnicodeFilename(
    PyObject *,int, const Py_UNICODE *);

__attribute__((dllimport)) PyObject * PyErr_SetExcFromWindowsErr(PyObject *, int);


__attribute__((dllimport)) PyObject * PyErr_SetExcWithArgsKwargs(PyObject *, PyObject *,
    PyObject *);
__attribute__((dllimport)) PyObject * PyErr_SetImportError(PyObject *, PyObject *,
    PyObject *);


__attribute__((dllimport)) void PyErr_BadInternalCall(void);
__attribute__((dllimport)) void _PyErr_BadInternalCall(const char *filename, int lineno);





__attribute__((dllimport)) PyObject * PyErr_NewException(
    const char *name, PyObject *base, PyObject *dict);
__attribute__((dllimport)) PyObject * PyErr_NewExceptionWithDoc(
    const char *name, const char *doc, PyObject *base, PyObject *dict);
__attribute__((dllimport)) void PyErr_WriteUnraisable(PyObject *);
# 309 "pyerrors.h"
__attribute__((dllimport)) PyObject * _PyErr_TrySetFromCause(
    const char *prefix_format,
    ...
    );




__attribute__((dllimport)) int PyErr_CheckSignals(void);
__attribute__((dllimport)) void PyErr_SetInterrupt(void);



int PySignal_SetWakeupFd(int fd);



__attribute__((dllimport)) void PyErr_SyntaxLocation(
    const char *filename,
    int lineno);
__attribute__((dllimport)) void PyErr_SyntaxLocationEx(
    const char *filename,
    int lineno,
    int col_offset);

__attribute__((dllimport)) void PyErr_SyntaxLocationObject(
    PyObject *filename,
    int lineno,
    int col_offset);

__attribute__((dllimport)) PyObject * PyErr_ProgramText(
    const char *filename,
    int lineno);

__attribute__((dllimport)) PyObject * PyErr_ProgramTextObject(
    PyObject *filename,
    int lineno);






__attribute__((dllimport)) PyObject * PyUnicodeDecodeError_Create(
    const char *encoding,
    const char *object,
    Py_ssize_t length,
    Py_ssize_t start,
    Py_ssize_t end,
    const char *reason
    );



__attribute__((dllimport)) PyObject * PyUnicodeEncodeError_Create(
    const char *encoding,
    const Py_UNICODE *object,
    Py_ssize_t length,
    Py_ssize_t start,
    Py_ssize_t end,
    const char *reason
    );




__attribute__((dllimport)) PyObject * PyUnicodeTranslateError_Create(
    const Py_UNICODE *object,
    Py_ssize_t length,
    Py_ssize_t start,
    Py_ssize_t end,
    const char *reason
    );
__attribute__((dllimport)) PyObject * _PyUnicodeTranslateError_Create(
    PyObject *object,
    Py_ssize_t start,
    Py_ssize_t end,
    const char *reason
    );



__attribute__((dllimport)) PyObject * PyUnicodeEncodeError_GetEncoding(PyObject *);
__attribute__((dllimport)) PyObject * PyUnicodeDecodeError_GetEncoding(PyObject *);


__attribute__((dllimport)) PyObject * PyUnicodeEncodeError_GetObject(PyObject *);
__attribute__((dllimport)) PyObject * PyUnicodeDecodeError_GetObject(PyObject *);
__attribute__((dllimport)) PyObject * PyUnicodeTranslateError_GetObject(PyObject *);



__attribute__((dllimport)) int PyUnicodeEncodeError_GetStart(PyObject *, Py_ssize_t *);
__attribute__((dllimport)) int PyUnicodeDecodeError_GetStart(PyObject *, Py_ssize_t *);
__attribute__((dllimport)) int PyUnicodeTranslateError_GetStart(PyObject *, Py_ssize_t *);



__attribute__((dllimport)) int PyUnicodeEncodeError_SetStart(PyObject *, Py_ssize_t);
__attribute__((dllimport)) int PyUnicodeDecodeError_SetStart(PyObject *, Py_ssize_t);
__attribute__((dllimport)) int PyUnicodeTranslateError_SetStart(PyObject *, Py_ssize_t);



__attribute__((dllimport)) int PyUnicodeEncodeError_GetEnd(PyObject *, Py_ssize_t *);
__attribute__((dllimport)) int PyUnicodeDecodeError_GetEnd(PyObject *, Py_ssize_t *);
__attribute__((dllimport)) int PyUnicodeTranslateError_GetEnd(PyObject *, Py_ssize_t *);



__attribute__((dllimport)) int PyUnicodeEncodeError_SetEnd(PyObject *, Py_ssize_t);
__attribute__((dllimport)) int PyUnicodeDecodeError_SetEnd(PyObject *, Py_ssize_t);
__attribute__((dllimport)) int PyUnicodeTranslateError_SetEnd(PyObject *, Py_ssize_t);


__attribute__((dllimport)) PyObject * PyUnicodeEncodeError_GetReason(PyObject *);
__attribute__((dllimport)) PyObject * PyUnicodeDecodeError_GetReason(PyObject *);
__attribute__((dllimport)) PyObject * PyUnicodeTranslateError_GetReason(PyObject *);



__attribute__((dllimport)) int PyUnicodeEncodeError_SetReason(
    PyObject *exc,
    const char *reason
    );
__attribute__((dllimport)) int PyUnicodeDecodeError_SetReason(
    PyObject *exc,
    const char *reason
    );
__attribute__((dllimport)) int PyUnicodeTranslateError_SetReason(
    PyObject *exc,
    const char *reason
    );
# 458 "pyerrors.h"
__attribute__((dllimport)) int PyOS_snprintf(char *str, size_t size, const char *format, ...)
                        __attribute__((format(printf, 3, 4)));
__attribute__((dllimport)) int PyOS_vsnprintf(char *str, size_t size, const char *format, va_list va)
                        __attribute__((format(printf, 3, 0)));
# 109 "Python.h" 2



# 1 "pyarena.h" 1
# 12 "pyarena.h"
  typedef struct _arena PyArena;
# 36 "pyarena.h"
  __attribute__((dllimport)) PyArena * PyArena_New(void);
  __attribute__((dllimport)) void PyArena_Free(PyArena *);
# 51 "pyarena.h"
  __attribute__((dllimport)) void * PyArena_Malloc(PyArena *, size_t size);





  __attribute__((dllimport)) int PyArena_AddPyObject(PyArena *, PyObject *);
# 113 "Python.h" 2
# 1 "modsupport.h" 1
# 23 "modsupport.h"
__attribute__((dllimport)) PyObject * _Py_VaBuildValue_SizeT(const char *, va_list);




__attribute__((dllimport)) int PyArg_Parse(PyObject *, const char *, ...);
__attribute__((dllimport)) int PyArg_ParseTuple(PyObject *, const char *, ...);
__attribute__((dllimport)) int PyArg_ParseTupleAndKeywords(PyObject *, PyObject *,
                                                  const char *, char **, ...);
__attribute__((dllimport)) int PyArg_ValidateKeywordArguments(PyObject *);
__attribute__((dllimport)) int PyArg_UnpackTuple(PyObject *, const char *, Py_ssize_t, Py_ssize_t, ...);
__attribute__((dllimport)) PyObject * Py_BuildValue(const char *, ...);
__attribute__((dllimport)) PyObject * _Py_BuildValue_SizeT(const char *, ...);


__attribute__((dllimport)) int _PyArg_NoKeywords(const char *funcname, PyObject *kw);
__attribute__((dllimport)) int _PyArg_NoPositional(const char *funcname, PyObject *args);

__attribute__((dllimport)) int PyArg_VaParse(PyObject *, const char *, va_list);
__attribute__((dllimport)) int PyArg_VaParseTupleAndKeywords(PyObject *, PyObject *,
                                                  const char *, char **, va_list);

__attribute__((dllimport)) PyObject * Py_VaBuildValue(const char *, va_list);

__attribute__((dllimport)) int PyModule_AddObject(PyObject *, const char *, PyObject *);
__attribute__((dllimport)) int PyModule_AddIntConstant(PyObject *, const char *, long);
__attribute__((dllimport)) int PyModule_AddStringConstant(PyObject *, const char *, const char *);
# 114 "modsupport.h"
__attribute__((dllimport)) PyObject * PyModule_Create2(struct PyModuleDef*,
                                     int apiver);
# 126 "modsupport.h"
extern __attribute__((dllimport)) char * _Py_PackageContext;
# 114 "Python.h" 2
# 1 "pythonrun.h" 1
# 20 "pythonrun.h"
typedef struct {
    int cf_flags;
} PyCompilerFlags;


__attribute__((dllimport)) void Py_SetProgramName(wchar_t *);
__attribute__((dllimport)) wchar_t * Py_GetProgramName(void);

__attribute__((dllimport)) void Py_SetPythonHome(wchar_t *);
__attribute__((dllimport)) wchar_t * Py_GetPythonHome(void);





__attribute__((dllimport)) int Py_SetStandardStreamEncoding(const char *encoding,
                                             const char *errors);


__attribute__((dllimport)) void Py_Initialize(void);
__attribute__((dllimport)) void Py_InitializeEx(int);

__attribute__((dllimport)) void _Py_InitializeEx_Private(int, int);

__attribute__((dllimport)) void Py_Finalize(void);
__attribute__((dllimport)) int Py_IsInitialized(void);
__attribute__((dllimport)) PyThreadState * Py_NewInterpreter(void);
__attribute__((dllimport)) void Py_EndInterpreter(PyThreadState *);


__attribute__((dllimport)) int PyRun_SimpleStringFlags(const char *, PyCompilerFlags *);
__attribute__((dllimport)) int PyRun_AnyFileFlags(FILE *, const char *, PyCompilerFlags *);
__attribute__((dllimport)) int PyRun_AnyFileExFlags(
    FILE *fp,
    const char *filename,
    int closeit,
    PyCompilerFlags *flags);
__attribute__((dllimport)) int PyRun_SimpleFileExFlags(
    FILE *fp,
    const char *filename,
    int closeit,
    PyCompilerFlags *flags);
__attribute__((dllimport)) int PyRun_InteractiveOneFlags(
    FILE *fp,
    const char *filename,
    PyCompilerFlags *flags);
__attribute__((dllimport)) int PyRun_InteractiveOneObject(
    FILE *fp,
    PyObject *filename,
    PyCompilerFlags *flags);
__attribute__((dllimport)) int PyRun_InteractiveLoopFlags(
    FILE *fp,
    const char *filename,
    PyCompilerFlags *flags);

__attribute__((dllimport)) struct _mod * PyParser_ASTFromString(
    const char *s,
    const char *filename,
    int start,
    PyCompilerFlags *flags,
    PyArena *arena);
__attribute__((dllimport)) struct _mod * PyParser_ASTFromStringObject(
    const char *s,
    PyObject *filename,
    int start,
    PyCompilerFlags *flags,
    PyArena *arena);
__attribute__((dllimport)) struct _mod * PyParser_ASTFromFile(
    FILE *fp,
    const char *filename,
    const char* enc,
    int start,
    char *ps1,
    char *ps2,
    PyCompilerFlags *flags,
    int *errcode,
    PyArena *arena);
__attribute__((dllimport)) struct _mod * PyParser_ASTFromFileObject(
    FILE *fp,
    PyObject *filename,
    const char* enc,
    int start,
    char *ps1,
    char *ps2,
    PyCompilerFlags *flags,
    int *errcode,
    PyArena *arena);
# 115 "pythonrun.h"
__attribute__((dllimport)) struct _node * PyParser_SimpleParseStringFlags(const char *, int,
                                                           int);
__attribute__((dllimport)) struct _node * PyParser_SimpleParseStringFlagsFilename(const char *,
                                                                   const char *,
                                                                   int, int);
__attribute__((dllimport)) struct _node * PyParser_SimpleParseFileFlags(FILE *, const char *,
                                                         int, int);


__attribute__((dllimport)) PyObject * PyRun_StringFlags(const char *, int, PyObject *,
                                         PyObject *, PyCompilerFlags *);

__attribute__((dllimport)) PyObject * PyRun_FileExFlags(
    FILE *fp,
    const char *filename,
    int start,
    PyObject *globals,
    PyObject *locals,
    int closeit,
    PyCompilerFlags *flags);







__attribute__((dllimport)) PyObject * Py_CompileStringExFlags(
    const char *str,
    const char *filename,
    int start,
    PyCompilerFlags *flags,
    int optimize);
__attribute__((dllimport)) PyObject * Py_CompileStringObject(
    const char *str,
    PyObject *filename, int start,
    PyCompilerFlags *flags,
    int optimize);

__attribute__((dllimport)) struct symtable * Py_SymtableString(
    const char *str,
    const char *filename,
    int start);

__attribute__((dllimport)) struct symtable * Py_SymtableStringObject(
    const char *str,
    PyObject *filename,
    int start);


__attribute__((dllimport)) void PyErr_Print(void);
__attribute__((dllimport)) void PyErr_PrintEx(int);
__attribute__((dllimport)) void PyErr_Display(PyObject *, PyObject *, PyObject *);





__attribute__((dllimport)) void _Py_PyAtExit(void (*func)(void));

__attribute__((dllimport)) int Py_AtExit(void (*func)(void));

__attribute__((dllimport)) void Py_Exit(int);



__attribute__((dllimport)) void _Py_RestoreSignals(void);

__attribute__((dllimport)) int Py_FdIsInteractive(FILE *, const char *);



__attribute__((dllimport)) int Py_Main(int argc, wchar_t **argv);
# 211 "pythonrun.h"
__attribute__((dllimport)) wchar_t * Py_GetProgramFullPath(void);
__attribute__((dllimport)) wchar_t * Py_GetPrefix(void);
__attribute__((dllimport)) wchar_t * Py_GetExecPrefix(void);
__attribute__((dllimport)) wchar_t * Py_GetPath(void);
__attribute__((dllimport)) void Py_SetPath(const wchar_t *);

int _Py_CheckPython3();



__attribute__((dllimport)) const char * Py_GetVersion(void);
__attribute__((dllimport)) const char * Py_GetPlatform(void);
__attribute__((dllimport)) const char * Py_GetCopyright(void);
__attribute__((dllimport)) const char * Py_GetCompiler(void);
__attribute__((dllimport)) const char * Py_GetBuildInfo(void);

__attribute__((dllimport)) const char * _Py_hgidentifier(void);
__attribute__((dllimport)) const char * _Py_hgversion(void);




__attribute__((dllimport)) PyObject * _PyBuiltin_Init(void);
__attribute__((dllimport)) PyObject * _PySys_Init(void);
__attribute__((dllimport)) void _PyImport_Init(void);
__attribute__((dllimport)) void _PyExc_Init(PyObject * bltinmod);
__attribute__((dllimport)) void _PyImportHooks_Init(void);
__attribute__((dllimport)) int _PyFrame_Init(void);
__attribute__((dllimport)) int _PyFloat_Init(void);
__attribute__((dllimport)) int PyByteArray_Init(void);
__attribute__((dllimport)) void _PyRandom_Init(void);




__attribute__((dllimport)) void _PyExc_Fini(void);
__attribute__((dllimport)) void _PyImport_Fini(void);
__attribute__((dllimport)) void PyMethod_Fini(void);
__attribute__((dllimport)) void PyFrame_Fini(void);
__attribute__((dllimport)) void PyCFunction_Fini(void);
__attribute__((dllimport)) void PyDict_Fini(void);
__attribute__((dllimport)) void PyTuple_Fini(void);
__attribute__((dllimport)) void PyList_Fini(void);
__attribute__((dllimport)) void PySet_Fini(void);
__attribute__((dllimport)) void PyBytes_Fini(void);
__attribute__((dllimport)) void PyByteArray_Fini(void);
__attribute__((dllimport)) void PyFloat_Fini(void);
__attribute__((dllimport)) void PyOS_FiniInterrupts(void);
__attribute__((dllimport)) void _PyGC_DumpShutdownStats(void);
__attribute__((dllimport)) void _PyGC_Fini(void);
__attribute__((dllimport)) void PySlice_Fini(void);
__attribute__((dllimport)) void _PyType_Fini(void);
__attribute__((dllimport)) void _PyRandom_Fini(void);

extern __attribute__((dllimport)) PyThreadState * _Py_Finalizing;




__attribute__((dllimport)) char * PyOS_Readline(FILE *, FILE *, const char *);

extern __attribute__((dllimport)) int (*PyOS_InputHook)(void);
extern __attribute__((dllimport)) char *(*PyOS_ReadlineFunctionPointer)(FILE *, FILE *, const char *);

extern __attribute__((dllimport)) PyThreadState* _PyOS_ReadlineTState;
# 294 "pythonrun.h"
typedef void (*PyOS_sighandler_t)(int);
__attribute__((dllimport)) PyOS_sighandler_t PyOS_getsig(int);
__attribute__((dllimport)) PyOS_sighandler_t PyOS_setsig(int, PyOS_sighandler_t);


__attribute__((dllimport)) int _PyOS_URandom (void *buffer, Py_ssize_t size);
# 115 "Python.h" 2
# 1 "ceval.h" 1
# 10 "ceval.h"
__attribute__((dllimport)) PyObject * PyEval_CallObjectWithKeywords(
    PyObject *, PyObject *, PyObject *);





__attribute__((dllimport)) PyObject * PyEval_CallFunction(PyObject *obj,
                                           const char *format, ...);
__attribute__((dllimport)) PyObject * PyEval_CallMethod(PyObject *obj,
                                         const char *methodname,
                                         const char *format, ...);


__attribute__((dllimport)) void PyEval_SetProfile(Py_tracefunc, PyObject *);
__attribute__((dllimport)) void PyEval_SetTrace(Py_tracefunc, PyObject *);


struct _frame;

__attribute__((dllimport)) PyObject * PyEval_GetBuiltins(void);
__attribute__((dllimport)) PyObject * PyEval_GetGlobals(void);
__attribute__((dllimport)) PyObject * PyEval_GetLocals(void);
__attribute__((dllimport)) struct _frame * PyEval_GetFrame(void);





__attribute__((dllimport)) int PyEval_MergeCompilerFlags(PyCompilerFlags *cf);


__attribute__((dllimport)) int Py_AddPendingCall(int (*func)(void *), void *arg);
__attribute__((dllimport)) int Py_MakePendingCalls(void);
# 70 "ceval.h"
__attribute__((dllimport)) void Py_SetRecursionLimit(int);
__attribute__((dllimport)) int Py_GetRecursionLimit(void);
# 80 "ceval.h"
__attribute__((dllimport)) int _Py_CheckRecursiveCall(char *where);
extern __attribute__((dllimport)) int _Py_CheckRecursionLimit;
# 108 "ceval.h"
__attribute__((dllimport)) const char * PyEval_GetFuncName(PyObject *);
__attribute__((dllimport)) const char * PyEval_GetFuncDesc(PyObject *);

__attribute__((dllimport)) PyObject * PyEval_GetCallStats(PyObject *);
__attribute__((dllimport)) PyObject * PyEval_EvalFrame(struct _frame *);
__attribute__((dllimport)) PyObject * PyEval_EvalFrameEx(struct _frame *f, int exc);
# 160 "ceval.h"
__attribute__((dllimport)) PyThreadState * PyEval_SaveThread(void);
__attribute__((dllimport)) void PyEval_RestoreThread(PyThreadState *);



__attribute__((dllimport)) int PyEval_ThreadsInitialized(void);
__attribute__((dllimport)) void PyEval_InitThreads(void);
__attribute__((dllimport)) void _PyEval_FiniThreads(void);
__attribute__((dllimport)) void PyEval_AcquireLock(void);
__attribute__((dllimport)) void PyEval_ReleaseLock(void);
__attribute__((dllimport)) void PyEval_AcquireThread(PyThreadState *tstate);
__attribute__((dllimport)) void PyEval_ReleaseThread(PyThreadState *tstate);
__attribute__((dllimport)) void PyEval_ReInitThreads(void);


__attribute__((dllimport)) void _PyEval_SetSwitchInterval(unsigned long microseconds);
__attribute__((dllimport)) unsigned long _PyEval_GetSwitchInterval(void);
# 197 "ceval.h"
__attribute__((dllimport)) int _PyEval_SliceIndex(PyObject *, Py_ssize_t *);
__attribute__((dllimport)) void _PyEval_SignalAsyncExc(void);
# 116 "Python.h" 2
# 1 "sysmodule.h" 1
# 10 "sysmodule.h"
__attribute__((dllimport)) PyObject * PySys_GetObject(const char *);

__attribute__((dllimport)) PyObject * _PySys_GetObjectId(_Py_Identifier *key);

__attribute__((dllimport)) int PySys_SetObject(const char *, PyObject *);
__attribute__((dllimport)) int _PySys_SetObjectId(_Py_Identifier *key, PyObject *);

__attribute__((dllimport)) void PySys_SetArgv(int, wchar_t **);
__attribute__((dllimport)) void PySys_SetArgvEx(int, wchar_t **, int);
__attribute__((dllimport)) void PySys_SetPath(const wchar_t *);

__attribute__((dllimport)) void PySys_WriteStdout(const char *format, ...)
                 __attribute__((format(printf, 1, 2)));
__attribute__((dllimport)) void PySys_WriteStderr(const char *format, ...)
                 __attribute__((format(printf, 1, 2)));
__attribute__((dllimport)) void PySys_FormatStdout(const char *format, ...);
__attribute__((dllimport)) void PySys_FormatStderr(const char *format, ...);

__attribute__((dllimport)) void PySys_ResetWarnOptions(void);
__attribute__((dllimport)) void PySys_AddWarnOption(const wchar_t *);
__attribute__((dllimport)) void PySys_AddWarnOptionUnicode(PyObject *);
__attribute__((dllimport)) int PySys_HasWarnOptions(void);

__attribute__((dllimport)) void PySys_AddXOption(const wchar_t *);
__attribute__((dllimport)) PyObject * PySys_GetXOptions(void);


__attribute__((dllimport)) size_t _PySys_GetSizeOf(PyObject *);
# 117 "Python.h" 2
# 1 "intrcheck.h" 1







__attribute__((dllimport)) int PyOS_InterruptOccurred(void);
__attribute__((dllimport)) void PyOS_InitInterrupts(void);
__attribute__((dllimport)) void PyOS_AfterFork(void);
__attribute__((dllimport)) int _PyOS_IsMainThread(void);



__attribute__((dllimport)) void* _PyOS_SigintEvent(void);
# 118 "Python.h" 2
# 1 "import.h" 1
# 10 "import.h"
__attribute__((dllimport)) void _PyImportZip_Init(void);

__attribute__((dllexport)) PyObject* PyInit_imp(void);
__attribute__((dllimport)) long PyImport_GetMagicNumber(void);
__attribute__((dllimport)) const char * PyImport_GetMagicTag(void);
__attribute__((dllimport)) PyObject * PyImport_ExecCodeModule(
    const char *name,
    PyObject *co
    );
__attribute__((dllimport)) PyObject * PyImport_ExecCodeModuleEx(
    const char *name,
    PyObject *co,
    const char *pathname
    );
__attribute__((dllimport)) PyObject * PyImport_ExecCodeModuleWithPathnames(
    const char *name,
    PyObject *co,
    const char *pathname,
    const char *cpathname
    );
__attribute__((dllimport)) PyObject * PyImport_ExecCodeModuleObject(
    PyObject *name,
    PyObject *co,
    PyObject *pathname,
    PyObject *cpathname
    );
__attribute__((dllimport)) PyObject * PyImport_GetModuleDict(void);
__attribute__((dllimport)) PyObject * PyImport_AddModuleObject(
    PyObject *name
    );
__attribute__((dllimport)) PyObject * PyImport_AddModule(
    const char *name
    );
__attribute__((dllimport)) PyObject * PyImport_ImportModule(
    const char *name
    );
__attribute__((dllimport)) PyObject * PyImport_ImportModuleNoBlock(
    const char *name
    );
__attribute__((dllimport)) PyObject * PyImport_ImportModuleLevel(
    const char *name,
    PyObject *globals,
    PyObject *locals,
    PyObject *fromlist,
    int level
    );
__attribute__((dllimport)) PyObject * PyImport_ImportModuleLevelObject(
    PyObject *name,
    PyObject *globals,
    PyObject *locals,
    PyObject *fromlist,
    int level
    );




__attribute__((dllimport)) PyObject * PyImport_GetImporter(PyObject *path);
__attribute__((dllimport)) PyObject * PyImport_Import(PyObject *name);
__attribute__((dllimport)) PyObject * PyImport_ReloadModule(PyObject *m);
__attribute__((dllimport)) void PyImport_Cleanup(void);
__attribute__((dllimport)) int PyImport_ImportFrozenModuleObject(
    PyObject *name
    );
__attribute__((dllimport)) int PyImport_ImportFrozenModule(
    const char *name
    );



__attribute__((dllimport)) void _PyImport_AcquireLock(void);
__attribute__((dllimport)) int _PyImport_ReleaseLock(void);





__attribute__((dllimport)) void _PyImport_ReInitLock(void);

__attribute__((dllimport)) PyObject * _PyImport_FindBuiltin(
    const char *name
    );
__attribute__((dllimport)) PyObject * _PyImport_FindExtensionObject(PyObject *, PyObject *);
__attribute__((dllimport)) int _PyImport_FixupBuiltin(
    PyObject *mod,
    const char *name
    );
__attribute__((dllimport)) int _PyImport_FixupExtensionObject(PyObject*, PyObject *, PyObject *);

struct _inittab {
    const char *name;
    PyObject* (*initfunc)(void);
};
extern __attribute__((dllimport)) struct _inittab * PyImport_Inittab;
__attribute__((dllimport)) int PyImport_ExtendInittab(struct _inittab *newtab);


extern __attribute__((dllimport)) PyTypeObject PyNullImporter_Type;

__attribute__((dllimport)) int PyImport_AppendInittab(
    const char *name,
    PyObject* (*initfunc)(void)
    );


struct _frozen {
    const char *name;
    const unsigned char *code;
    int size;
};




extern __attribute__((dllimport)) const struct _frozen * PyImport_FrozenModules;
# 119 "Python.h" 2

# 1 "abstract.h" 1
# 266 "abstract.h"
     __attribute__((dllimport)) PyObject * PyObject_Call(PyObject *callable_object,
                                          PyObject *args, PyObject *kw);







     __attribute__((dllimport)) PyObject * PyObject_CallObject(PyObject *callable_object,
                                                PyObject *args);
# 286 "abstract.h"
     __attribute__((dllimport)) PyObject * PyObject_CallFunction(PyObject *callable_object,
                                                  const char *format, ...);
# 299 "abstract.h"
     __attribute__((dllimport)) PyObject * PyObject_CallMethod(PyObject *o,
                                                const char *method,
                                                const char *format, ...);
# 312 "abstract.h"
     __attribute__((dllimport)) PyObject * _PyObject_CallMethodId(PyObject *o,
                                                   _Py_Identifier *method,
                                                   const char *format, ...);






     __attribute__((dllimport)) PyObject * _PyObject_CallFunction_SizeT(PyObject *callable,
                                                         const char *format,
                                                         ...);
     __attribute__((dllimport)) PyObject * _PyObject_CallMethod_SizeT(PyObject *o,
                                                       const char *name,
                                                       const char *format,
                                                       ...);
     __attribute__((dllimport)) PyObject * _PyObject_CallMethodId_SizeT(PyObject *o,
                                                       _Py_Identifier *name,
                                                       const char *format,
                                                       ...);

     __attribute__((dllimport)) PyObject * PyObject_CallFunctionObjArgs(PyObject *callable,
                                                         ...);
# 345 "abstract.h"
     __attribute__((dllimport)) PyObject * PyObject_CallMethodObjArgs(PyObject *o,
                                                       PyObject *method, ...);
     __attribute__((dllimport)) PyObject * _PyObject_CallMethodIdObjArgs(PyObject *o,
                                               struct _Py_Identifier *method,
                                               ...);
# 388 "abstract.h"
     __attribute__((dllimport)) PyObject * PyObject_Type(PyObject *o);







     __attribute__((dllimport)) Py_ssize_t PyObject_Size(PyObject *o);
# 407 "abstract.h"
     __attribute__((dllimport)) Py_ssize_t PyObject_Length(PyObject *o);



     __attribute__((dllimport)) int _PyObject_HasLen(PyObject *o);
     __attribute__((dllimport)) Py_ssize_t PyObject_LengthHint(PyObject *o, Py_ssize_t);
# 421 "abstract.h"
     __attribute__((dllimport)) PyObject * PyObject_GetItem(PyObject *o, PyObject *key);







     __attribute__((dllimport)) int PyObject_SetItem(PyObject *o, PyObject *key, PyObject *v);







     __attribute__((dllimport)) int PyObject_DelItemString(PyObject *o, const char *key);







     __attribute__((dllimport)) int PyObject_DelItem(PyObject *o, PyObject *key);
# 458 "abstract.h"
     __attribute__((dllimport)) int PyObject_AsCharBuffer(PyObject *obj,
                                           const char **buffer,
                                           Py_ssize_t *buffer_len);
# 473 "abstract.h"
     __attribute__((dllimport)) int PyObject_CheckReadBuffer(PyObject *obj);







     __attribute__((dllimport)) int PyObject_AsReadBuffer(PyObject *obj,
                                           const void **buffer,
                                           Py_ssize_t *buffer_len);
# 496 "abstract.h"
     __attribute__((dllimport)) int PyObject_AsWriteBuffer(PyObject *obj,
                                            void **buffer,
                                            Py_ssize_t *buffer_len);
# 520 "abstract.h"
     __attribute__((dllimport)) int PyObject_GetBuffer(PyObject *obj, Py_buffer *view,
                                        int flags);
# 530 "abstract.h"
     __attribute__((dllimport)) void * PyBuffer_GetPointer(Py_buffer *view, Py_ssize_t *indices);





     __attribute__((dllimport)) int PyBuffer_SizeFromFormat(const char *);







     __attribute__((dllimport)) int PyBuffer_ToContiguous(void *buf, Py_buffer *view,
                                           Py_ssize_t len, char order);

     __attribute__((dllimport)) int PyBuffer_FromContiguous(Py_buffer *view, void *buf,
                                             Py_ssize_t len, char order);
# 567 "abstract.h"
     __attribute__((dllimport)) int PyObject_CopyData(PyObject *dest, PyObject *src);




     __attribute__((dllimport)) int PyBuffer_IsContiguous(const Py_buffer *view, char fort);


     __attribute__((dllimport)) void PyBuffer_FillContiguousStrides(int ndims,
                                                    Py_ssize_t *shape,
                                                    Py_ssize_t *strides,
                                                    int itemsize,
                                                    char fort);







     __attribute__((dllimport)) int PyBuffer_FillInfo(Py_buffer *view, PyObject *o, void *buf,
                                       Py_ssize_t len, int readonly,
                                       int flags);







     __attribute__((dllimport)) void PyBuffer_Release(Py_buffer *view);





     __attribute__((dllimport)) PyObject * PyObject_Format(PyObject* obj,
                                            PyObject *format_spec);







     __attribute__((dllimport)) PyObject * PyObject_GetIter(PyObject *);
# 621 "abstract.h"
     __attribute__((dllimport)) PyObject * PyIter_Next(PyObject *);







     __attribute__((dllimport)) int PyNumber_Check(PyObject *o);
# 638 "abstract.h"
     __attribute__((dllimport)) PyObject * PyNumber_Add(PyObject *o1, PyObject *o2);






     __attribute__((dllimport)) PyObject * PyNumber_Subtract(PyObject *o1, PyObject *o2);







     __attribute__((dllimport)) PyObject * PyNumber_Multiply(PyObject *o1, PyObject *o2);







     __attribute__((dllimport)) PyObject * PyNumber_FloorDivide(PyObject *o1, PyObject *o2);







     __attribute__((dllimport)) PyObject * PyNumber_TrueDivide(PyObject *o1, PyObject *o2);







     __attribute__((dllimport)) PyObject * PyNumber_Remainder(PyObject *o1, PyObject *o2);







     __attribute__((dllimport)) PyObject * PyNumber_Divmod(PyObject *o1, PyObject *o2);







     __attribute__((dllimport)) PyObject * PyNumber_Power(PyObject *o1, PyObject *o2,
                                           PyObject *o3);







     __attribute__((dllimport)) PyObject * PyNumber_Negative(PyObject *o);






     __attribute__((dllimport)) PyObject * PyNumber_Positive(PyObject *o);






     __attribute__((dllimport)) PyObject * PyNumber_Absolute(PyObject *o);






     __attribute__((dllimport)) PyObject * PyNumber_Invert(PyObject *o);







     __attribute__((dllimport)) PyObject * PyNumber_Lshift(PyObject *o1, PyObject *o2);







     __attribute__((dllimport)) PyObject * PyNumber_Rshift(PyObject *o1, PyObject *o2);







     __attribute__((dllimport)) PyObject * PyNumber_And(PyObject *o1, PyObject *o2);
# 756 "abstract.h"
     __attribute__((dllimport)) PyObject * PyNumber_Xor(PyObject *o1, PyObject *o2);







     __attribute__((dllimport)) PyObject * PyNumber_Or(PyObject *o1, PyObject *o2);
# 776 "abstract.h"
     __attribute__((dllimport)) PyObject * PyNumber_Index(PyObject *o);






     __attribute__((dllimport)) Py_ssize_t PyNumber_AsSsize_t(PyObject *o, PyObject *exc);
# 793 "abstract.h"
     __attribute__((dllimport)) PyObject * PyNumber_Long(PyObject *o);







     __attribute__((dllimport)) PyObject * PyNumber_Float(PyObject *o);
# 811 "abstract.h"
     __attribute__((dllimport)) PyObject * PyNumber_InPlaceAdd(PyObject *o1, PyObject *o2);







     __attribute__((dllimport)) PyObject * PyNumber_InPlaceSubtract(PyObject *o1, PyObject *o2);







     __attribute__((dllimport)) PyObject * PyNumber_InPlaceMultiply(PyObject *o1, PyObject *o2);







     __attribute__((dllimport)) PyObject * PyNumber_InPlaceFloorDivide(PyObject *o1,
                                                        PyObject *o2);
# 845 "abstract.h"
     __attribute__((dllimport)) PyObject * PyNumber_InPlaceTrueDivide(PyObject *o1,
                                                       PyObject *o2);
# 855 "abstract.h"
     __attribute__((dllimport)) PyObject * PyNumber_InPlaceRemainder(PyObject *o1, PyObject *o2);







     __attribute__((dllimport)) PyObject * PyNumber_InPlacePower(PyObject *o1, PyObject *o2,
                                                  PyObject *o3);







     __attribute__((dllimport)) PyObject * PyNumber_InPlaceLshift(PyObject *o1, PyObject *o2);







     __attribute__((dllimport)) PyObject * PyNumber_InPlaceRshift(PyObject *o1, PyObject *o2);







     __attribute__((dllimport)) PyObject * PyNumber_InPlaceAnd(PyObject *o1, PyObject *o2);







     __attribute__((dllimport)) PyObject * PyNumber_InPlaceXor(PyObject *o1, PyObject *o2);







     __attribute__((dllimport)) PyObject * PyNumber_InPlaceOr(PyObject *o1, PyObject *o2);







     __attribute__((dllimport)) PyObject * PyNumber_ToBase(PyObject *n, int base);
# 923 "abstract.h"
     __attribute__((dllimport)) int PySequence_Check(PyObject *o);
# 932 "abstract.h"
     __attribute__((dllimport)) Py_ssize_t PySequence_Size(PyObject *o);







     __attribute__((dllimport)) Py_ssize_t PySequence_Length(PyObject *o);



     __attribute__((dllimport)) PyObject * PySequence_Concat(PyObject *o1, PyObject *o2);







     __attribute__((dllimport)) PyObject * PySequence_Repeat(PyObject *o, Py_ssize_t count);







     __attribute__((dllimport)) PyObject * PySequence_GetItem(PyObject *o, Py_ssize_t i);






     __attribute__((dllimport)) PyObject * PySequence_GetSlice(PyObject *o, Py_ssize_t i1, Py_ssize_t i2);







     __attribute__((dllimport)) int PySequence_SetItem(PyObject *o, Py_ssize_t i, PyObject *v);







     __attribute__((dllimport)) int PySequence_DelItem(PyObject *o, Py_ssize_t i);







     __attribute__((dllimport)) int PySequence_SetSlice(PyObject *o, Py_ssize_t i1, Py_ssize_t i2,
                                         PyObject *v);







     __attribute__((dllimport)) int PySequence_DelSlice(PyObject *o, Py_ssize_t i1, Py_ssize_t i2);







     __attribute__((dllimport)) PyObject * PySequence_Tuple(PyObject *o);







     __attribute__((dllimport)) PyObject * PySequence_List(PyObject *o);





     __attribute__((dllimport)) PyObject * PySequence_Fast(PyObject *o, const char* m);
# 1058 "abstract.h"
     __attribute__((dllimport)) Py_ssize_t PySequence_Count(PyObject *o, PyObject *value);
# 1067 "abstract.h"
     __attribute__((dllimport)) int PySequence_Contains(PyObject *seq, PyObject *ob);
# 1077 "abstract.h"
     __attribute__((dllimport)) Py_ssize_t _PySequence_IterSearch(PyObject *seq,
                                        PyObject *obj, int operation);
# 1093 "abstract.h"
     __attribute__((dllimport)) int PySequence_In(PyObject *o, PyObject *value);
# 1104 "abstract.h"
     __attribute__((dllimport)) Py_ssize_t PySequence_Index(PyObject *o, PyObject *value);
# 1114 "abstract.h"
     __attribute__((dllimport)) PyObject * PySequence_InPlaceConcat(PyObject *o1, PyObject *o2);
# 1123 "abstract.h"
     __attribute__((dllimport)) PyObject * PySequence_InPlaceRepeat(PyObject *o, Py_ssize_t count);
# 1134 "abstract.h"
     __attribute__((dllimport)) int PyMapping_Check(PyObject *o);
# 1143 "abstract.h"
     __attribute__((dllimport)) Py_ssize_t PyMapping_Size(PyObject *o);
# 1153 "abstract.h"
     __attribute__((dllimport)) Py_ssize_t PyMapping_Length(PyObject *o);
# 1177 "abstract.h"
     __attribute__((dllimport)) int PyMapping_HasKeyString(PyObject *o, const char *key);
# 1187 "abstract.h"
     __attribute__((dllimport)) int PyMapping_HasKey(PyObject *o, PyObject *key);
# 1198 "abstract.h"
     __attribute__((dllimport)) PyObject * PyMapping_Keys(PyObject *o);






     __attribute__((dllimport)) PyObject * PyMapping_Values(PyObject *o);






     __attribute__((dllimport)) PyObject * PyMapping_Items(PyObject *o);
# 1221 "abstract.h"
     __attribute__((dllimport)) PyObject * PyMapping_GetItemString(PyObject *o,
                                                    const char *key);







     __attribute__((dllimport)) int PyMapping_SetItemString(PyObject *o, const char *key,
                                            PyObject *value);
# 1240 "abstract.h"
__attribute__((dllimport)) int PyObject_IsInstance(PyObject *object, PyObject *typeorclass);


__attribute__((dllimport)) int PyObject_IsSubclass(PyObject *object, PyObject *typeorclass);




__attribute__((dllimport)) int _PyObject_RealIsInstance(PyObject *inst, PyObject *cls);

__attribute__((dllimport)) int _PyObject_RealIsSubclass(PyObject *derived, PyObject *cls);

__attribute__((dllimport)) char *const * _PySequence_BytesToCharpArray(PyObject* self);

__attribute__((dllimport)) void _Py_FreeCharPArray(char *const array[]);



__attribute__((dllimport)) void _Py_add_one_to_index_F(int nd, Py_ssize_t *index,
                                        const Py_ssize_t *shape);
__attribute__((dllimport)) void _Py_add_one_to_index_C(int nd, Py_ssize_t *index,
                                        const Py_ssize_t *shape);
# 121 "Python.h" 2
# 1 "bltinmodule.h" 1






extern __attribute__((dllimport)) PyTypeObject PyFilter_Type;
extern __attribute__((dllimport)) PyTypeObject PyMap_Type;
extern __attribute__((dllimport)) PyTypeObject PyZip_Type;
# 122 "Python.h" 2

# 1 "compile.h" 1




# 1 "code.h" 1
# 11 "code.h"
typedef struct {
    PyObject ob_base;
    int co_argcount;
    int co_kwonlyargcount;
    int co_nlocals;
    int co_stacksize;
    int co_flags;
    PyObject *co_code;
    PyObject *co_consts;
    PyObject *co_names;
    PyObject *co_varnames;
    PyObject *co_freevars;
    PyObject *co_cellvars;

    unsigned char *co_cell2arg;
    PyObject *co_filename;
    PyObject *co_name;
    int co_firstlineno;
    PyObject *co_lnotab;

    void *co_zombieframe;
    PyObject *co_weakreflist;
} PyCodeObject;
# 73 "code.h"
extern __attribute__((dllimport)) PyTypeObject PyCode_Type;





__attribute__((dllimport)) PyCodeObject * PyCode_New(
 int, int, int, int, int, PyObject *, PyObject *,
 PyObject *, PyObject *, PyObject *, PyObject *,
 PyObject *, PyObject *, int, PyObject *);



__attribute__((dllimport)) PyCodeObject *
PyCode_NewEmpty(const char *filename, const char *funcname, int firstlineno);




__attribute__((dllimport)) int PyCode_Addr2Line(PyCodeObject *, int);


typedef struct _addr_pair {
        int ap_lower;
        int ap_upper;
} PyAddrPair;





__attribute__((dllimport)) int _PyCode_CheckLineNumber(PyCodeObject* co,
                                        int lasti, PyAddrPair *bounds);


__attribute__((dllimport)) PyObject* PyCode_Optimize(PyObject *code, PyObject* consts,
                                      PyObject *names, PyObject *lineno_obj);
# 6 "compile.h" 2






struct _node;
__attribute__((dllimport)) PyCodeObject * PyNode_Compile(struct _node *, const char *);



typedef struct {
    int ff_features;
    int ff_lineno;
} PyFutureFeatures;
# 31 "compile.h"
struct _mod;

__attribute__((dllimport)) PyCodeObject * PyAST_CompileEx(
    struct _mod *mod,
    const char *filename,
    PyCompilerFlags *flags,
    int optimize,
    PyArena *arena);
__attribute__((dllimport)) PyCodeObject * PyAST_CompileObject(
    struct _mod *mod,
    PyObject *filename,
    PyCompilerFlags *flags,
    int optimize,
    PyArena *arena);
__attribute__((dllimport)) PyFutureFeatures * PyFuture_FromAST(
    struct _mod * mod,
    const char *filename
    );
__attribute__((dllimport)) PyFutureFeatures * PyFuture_FromASTObject(
    struct _mod * mod,
    PyObject *filename
    );


__attribute__((dllimport)) PyObject* _Py_Mangle(PyObject *p, PyObject *name);


__attribute__((dllimport)) int PyCompile_OpcodeStackEffect(int opcode, int oparg);
# 124 "Python.h" 2
# 1 "eval.h" 1
# 10 "eval.h"
__attribute__((dllimport)) PyObject * PyEval_EvalCode(PyObject *, PyObject *, PyObject *);

__attribute__((dllimport)) PyObject * PyEval_EvalCodeEx(PyObject *co,
     PyObject *globals,
     PyObject *locals,
     PyObject **args, int argc,
     PyObject **kwds, int kwdc,
     PyObject **defs, int defc,
     PyObject *kwdefs, PyObject *closure);


__attribute__((dllimport)) PyObject * _PyEval_CallTracing(PyObject *func, PyObject *args);
# 125 "Python.h" 2

# 1 "pyctype.h" 1
# 13 "pyctype.h"
extern __attribute__((dllimport)) const unsigned int _Py_ctype_table[256];
# 26 "pyctype.h"
extern __attribute__((dllimport)) const unsigned char _Py_ctype_tolower[256];
extern __attribute__((dllimport)) const unsigned char _Py_ctype_toupper[256];
# 127 "Python.h" 2
# 1 "pystrtod.h" 1
# 9 "pystrtod.h"
__attribute__((dllimport)) double PyOS_string_to_double(const char *str,
                                         char **endptr,
                                         PyObject *overflow_exception);



__attribute__((dllimport)) char * PyOS_double_to_string(double val,
                                         char format_code,
                                         int precision,
                                         int flags,
                                         int *type);


__attribute__((dllimport)) double _Py_parse_inf_or_nan(const char *p, char **endptr);
# 128 "Python.h" 2
# 1 "pystrcmp.h" 1







__attribute__((dllimport)) int PyOS_mystrnicmp(const char *, const char *, Py_ssize_t);
__attribute__((dllimport)) int PyOS_mystricmp(const char *, const char *);
# 129 "Python.h" 2
# 1 "dtoa.h" 1






__attribute__((dllimport)) double _Py_dg_strtod(const char *str, char **ptr);
__attribute__((dllimport)) char * _Py_dg_dtoa(double d, int mode, int ndigits,
                        int *decpt, int *sign, char **rve);
__attribute__((dllimport)) void _Py_dg_freedtoa(char *s);
__attribute__((dllimport)) double _Py_dg_stdnan(int sign);
__attribute__((dllimport)) double _Py_dg_infinity(int sign);
# 130 "Python.h" 2
# 1 "fileutils.h" 1







__attribute__((dllimport)) PyObject * _Py_device_encoding(int);

__attribute__((dllimport)) wchar_t * _Py_char2wchar(
    const char *arg,
    size_t *size);

__attribute__((dllimport)) char* _Py_wchar2char(
    const wchar_t *text,
    size_t *error_pos);
# 25 "fileutils.h"
__attribute__((dllimport)) int _Py_stat(
    PyObject *path,
    struct stat *statbuf);



__attribute__((dllimport)) int _Py_open(
    const char *pathname,
    int flags);


__attribute__((dllimport)) FILE * _Py_wfopen(
    const wchar_t *path,
    const wchar_t *mode);

__attribute__((dllimport)) FILE* _Py_fopen(
    const char *pathname,
    const char *mode);

__attribute__((dllimport)) FILE* _Py_fopen_obj(
    PyObject *path,
    const char *mode);
# 62 "fileutils.h"
__attribute__((dllimport)) wchar_t* _Py_wgetcwd(
    wchar_t *buf,
    size_t size);


__attribute__((dllimport)) int _Py_get_inheritable(int fd);

__attribute__((dllimport)) int _Py_set_inheritable(int fd, int inheritable,
                                    int *atomic_flag_works);

__attribute__((dllimport)) int _Py_dup(int fd);
# 131 "Python.h" 2
# 1 "pyfpe.h" 1
# 132 "Python.h" 2

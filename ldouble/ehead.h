
/* Include file for extended precision arithmetic programs.
 */

/* Number of 16 bit words in external x type format */
#define NE 6
/* #define NE 10 */

/* Number of 16 bit words in internal format */
#define NI (NE+3)

/* Array offset to exponent */
#define E 1

/* Array offset to high guard word */
#define M 2

/* Number of bits of precision */
#define NBITS ((NI-4)*16)

/* Maximum number of decimal digits in ASCII conversion
 * = NBITS*log10(2)
 */
#define NDEC (NBITS*8/27)

/* The exponent of 1.0 */
#define EXONE (0x3fff)


void eadd(unsigned short *, unsigned short *, unsigned short *),
     esub(unsigned short *, unsigned short *, unsigned short *),
     emul(unsigned short *, unsigned short *, unsigned short *),
     ediv(unsigned short *, unsigned short *, unsigned short *);
int ecmp(unsigned short *, unsigned short *), enormlz(unsigned short *), eshift(unsigned short *, int);
void eshup1(unsigned short *),
     eshup8(unsigned short *),
     eshup6(unsigned short *),
     eshdn1(unsigned short *),
     eshdn8(unsigned short *),
     eshdn6(unsigned short *);
void eabs(unsigned short x[]),
     eneg(unsigned short *),
     emov(unsigned short *, unsigned short *),
     eclear(unsigned short *),
     einfin(unsigned short *),
     efloor(unsigned short *, unsigned short *);
void eldexp(unsigned short *x, long pwr2, unsigned short *y),
     efrexp(unsigned short *x, long *exp, unsigned short *s),
     eifrac(unsigned short *x, long *i, unsigned short *frac),
     ltoe(long *lp, unsigned short *y);
void esqrt(unsigned short *x, unsigned short *y),
     elog(), eexp(), etanh(), epow();
void asctoe(char *s, unsigned short *y),
     asctoe24( char *, unsigned short * ),
     asctoe53( char *, unsigned short * ),
     asctoe64( char *, unsigned short * );
void etoasc(unsigned short *, char *, int),
     e24toasc(unsigned short *x, char *string, int ndigs),
     e53toasc(unsigned short *x, char *string, int ndigs),
     e64toasc(unsigned short *x, char *string, int ndigs);
void etoe64(unsigned short *x, unsigned short *e),
     etoe53(unsigned short *x, unsigned short *e),
     etoe24(unsigned short *, unsigned short *),
     e64toe(unsigned short *, unsigned short *),
     e53toe(unsigned short *, unsigned short *),
     e24toe(unsigned short *, unsigned short *);
int mtherr(char *, int);

extern unsigned short ezero[], ehalf[], eone[], etwo[];
extern unsigned short elog2[], esqrt2[];


/* by Stephen L. Moshier. */

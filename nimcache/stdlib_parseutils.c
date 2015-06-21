/* Generated by Nim Compiler v0.11.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -Os  -I/data4/NimCompiler/Nim/lib -o /data4/NimStuff/NimFinLib/nimcache/stdlib_parseutils.o /data4/NimStuff/NimFinLib/nimcache/stdlib_parseutils.c */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Overflowerror3443 Overflowerror3443;
typedef struct Arithmeticerror3439 Arithmeticerror3439;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell44747 Cell44747;
typedef struct Cellseq44763 Cellseq44763;
typedef struct Gcheap46616 Gcheap46616;
typedef struct Cellset44759 Cellset44759;
typedef struct Pagedesc44755 Pagedesc44755;
typedef struct Memregion26610 Memregion26610;
typedef struct Smallchunk25843 Smallchunk25843;
typedef struct Llchunk26604 Llchunk26604;
typedef struct Bigchunk25845 Bigchunk25845;
typedef struct Intset25817 Intset25817;
typedef struct Trunk25813 Trunk25813;
typedef struct Avlnode26608 Avlnode26608;
typedef struct Gcstat46614 Gcstat46614;
typedef struct Basechunk25841 Basechunk25841;
typedef struct Freecell25833 Freecell25833;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(void, TY3289) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  Arithmeticerror3439  {
  Exception Sup;
};
struct  Overflowerror3443  {
  Arithmeticerror3439 Sup;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Cell44747  {
NI refcount;
TNimType* typ;
};
struct  Cellseq44763  {
NI len;
NI cap;
Cell44747** d;
};
struct  Cellset44759  {
NI counter;
NI max;
Pagedesc44755* head;
Pagedesc44755** data;
};
typedef Smallchunk25843* TY26622[512];
typedef Trunk25813* Trunkbuckets25815[256];
struct  Intset25817  {
Trunkbuckets25815 data;
};
struct  Memregion26610  {
NI minlargeobj;
NI maxlargeobj;
TY26622 freesmallchunks;
Llchunk26604* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk25845* freechunkslist;
Intset25817 chunkstarts;
Avlnode26608* root;
Avlnode26608* deleted;
Avlnode26608* last;
Avlnode26608* freeavlnodes;
};
struct  Gcstat46614  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Gcheap46616  {
void* stackbottom;
NI cyclethreshold;
Cellseq44763 zct;
Cellseq44763 decstack;
Cellset44759 cycleroots;
Cellseq44763 tempstack;
NI recgclock;
Memregion26610 region;
Gcstat46614 stat;
};
typedef NI TY25820[8];
struct  Pagedesc44755  {
Pagedesc44755* next;
NI key;
TY25820 bits;
};
struct  Basechunk25841  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk25843  {
  Basechunk25841 Sup;
Smallchunk25843* next;
Smallchunk25843* prev;
Freecell25833* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk26604  {
NI size;
NI acc;
Llchunk26604* next;
};
struct  Bigchunk25845  {
  Basechunk25841 Sup;
Bigchunk25845* next;
Bigchunk25845* prev;
NI align;
NF data;
};
struct  Trunk25813  {
Trunk25813* next;
NI key;
TY25820 bits;
};
typedef Avlnode26608* TY26614[2];
struct  Avlnode26608  {
TY26614 link;
NI key;
NI upperbound;
NI level;
};
struct  Freecell25833  {
Freecell25833* next;
NI zerofield;
};
N_NIMCALL(NI, npuParseBiggestInt)(NimStringDesc* s, NI64* number, NI start);
N_NIMCALL(NI, rawparseint_90714)(NimStringDesc* s, NI64* b, NI start);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NI64, mulInt64)(NI64 a, NI64 b);
static N_INLINE(NI, subInt)(NI a, NI b);
static N_INLINE(NI64, subInt64)(NI64 a, NI64 b);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell44747*, usrtocell_48246)(void* usr);
static N_INLINE(void, rtladdzct_49804)(Cell44747* c);
N_NOINLINE(void, addzct_48217)(Cellseq44763* s, Cell44747* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
static N_INLINE(NIM_CHAR, tolower_90014)(NIM_CHAR c);
N_NIMCALL(NI, nimParseBiggestFloat)(NimStringDesc* s, NF* number, NI start);
N_NIMCALL(NI, nimParseBiggestFloat)(NimStringDesc* s, NF* number, NI start);
STRING_LITERAL(TMP260, "overflow", 8);
extern TNimType NTI21517; /* ref OverflowError */
extern TNimType NTI3443; /* OverflowError */
extern Gcheap46616 gch_46648;

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = 0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI) 0) <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (((NI) 0) <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	}BeforeRet: ;
	return result;
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = 0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI) 0) <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (((NI) 0) <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	}BeforeRet: ;
	return result;
}

static N_INLINE(NI64, subInt64)(NI64 a, NI64 b) {
	NI64 result;
{	result = 0;
	result = (NI64)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (IL64(0) <= (NI64)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (IL64(0) <= (NI64)(result ^ (NI64)((NU64) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, rawparseint_90714)(NimStringDesc* s, NI64* b, NI start) {
	NI result;
	NI64 sign;
	NI i;
	result = 0;
	sign = IL64(-1);
	i = start;
	{
		NI TMP251;
		if (!((NU8)(s->data[i]) == (NU8)(43))) goto LA3;
		TMP251 = addInt(i, ((NI) 1));
		i = (NI)(TMP251);
	}
	goto LA1;
	LA3: ;
	{
		NI TMP252;
		if (!((NU8)(s->data[i]) == (NU8)(45))) goto LA6;
		TMP252 = addInt(i, ((NI) 1));
		i = (NI)(TMP252);
		sign = IL64(1);
	}
	goto LA1;
	LA6: ;
	LA1: ;
	{
		NI64 TMP258;
		NI TMP259;
		if (!(((NU8)(s->data[i])) >= ((NU8)(48)) && ((NU8)(s->data[i])) <= ((NU8)(57)))) goto LA10;
		(*b) = IL64(0);
		{
			while (1) {
				NI64 TMP253;
				NI TMP254;
				NI64 TMP255;
				NI TMP256;
				if (!(((NU8)(s->data[i])) >= ((NU8)(48)) && ((NU8)(s->data[i])) <= ((NU8)(57)))) goto LA13;
				TMP253 = mulInt64((*b), IL64(10));
				TMP254 = subInt(((NI) (((NU8)(s->data[i])))), ((NI) 48));
				TMP255 = subInt64((NI64)(TMP253), ((NI64) ((NI)(TMP254))));
				(*b) = (NI64)(TMP255);
				TMP256 = addInt(i, ((NI) 1));
				i = (NI)(TMP256);
				{
					while (1) {
						NI TMP257;
						if (!((NU8)(s->data[i]) == (NU8)(95))) goto LA15;
						TMP257 = addInt(i, ((NI) 1));
						i = (NI)(TMP257);
					} LA15: ;
				}
			} LA13: ;
		}
		TMP258 = mulInt64((*b), sign);
		(*b) = (NI64)(TMP258);
		TMP259 = subInt(i, start);
		result = (NI)(TMP259);
	}
	LA10: ;
	return result;
}

N_NIMCALL(NI, npuParseBiggestInt)(NimStringDesc* s, NI64* number, NI start) {
	NI result;
	NI64 res;
	result = 0;
	res = 0;
	result = rawparseint_90714(s, (&res), start);
	(*number) = res;
	return result;
}

static N_INLINE(Cell44747*, usrtocell_48246)(void* usr) {
	Cell44747* result;
	result = 0;
	result = ((Cell44747*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell44747))))));
	return result;
}

static N_INLINE(void, rtladdzct_49804)(Cell44747* c) {
	addzct_48217((&gch_46648.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell44747* c;
	c = usrtocell_48246(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_49804(c);
	}
	LA3: ;
}

N_NIMCALL(NI, npuParseInt)(NimStringDesc* s, NI* number, NI start) {
	NI result;
	NI64 res;
	result = 0;
	res = 0;
	result = npuParseBiggestInt(s, (&res), start);
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC5;
		Overflowerror3443* e_90855;
		NimStringDesc* LOC9;
		LOC3 = 0;
		LOC3 = NIM_FALSE;
		if (!(LOC3)) goto LA4;
		LOC5 = 0;
		LOC5 = (res < (IL64(-9223372036854775807) - IL64(1)));
		if (LOC5) goto LA6;
		LOC5 = (IL64(9223372036854775807) < res);
		LA6: ;
		LOC3 = LOC5;
		LA4: ;
		if (!LOC3) goto LA7;
		e_90855 = 0;
		e_90855 = (Overflowerror3443*) newObj((&NTI21517), sizeof(Overflowerror3443));
		(*e_90855).Sup.Sup.Sup.m_type = (&NTI3443);
		LOC9 = 0;
		LOC9 = (*e_90855).Sup.Sup.message; (*e_90855).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TMP260));
		if (LOC9) nimGCunrefNoCycle(LOC9);
		raiseException((Exception*)e_90855, "OverflowError");
	}
	goto LA1;
	LA7: ;
	{
		if (!!((result == ((NI) 0)))) goto LA11;
		(*number) = ((NI) (res));
	}
	goto LA1;
	LA11: ;
	LA1: ;
	return result;
}

static N_INLINE(NIM_CHAR, tolower_90014)(NIM_CHAR c) {
	NIM_CHAR result;
	result = 0;
	{
		if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA3;
		result = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI)(((NI) (((NU8)(c)))) - ((NI) 65)))) + ((NI) 97))))));
	}
	goto LA1;
	LA3: ;
	{
		result = c;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NI, skipignorecase_90447)(NimStringDesc* s, NimStringDesc* token, NI start) {
	NI result;
	result = 0;
	{
		while (1) {
			NIM_BOOL LOC3;
			NIM_CHAR LOC5;
			NIM_CHAR LOC6;
			LOC3 = 0;
			LOC3 = (result < (token ? token->Sup.len : 0));
			if (!(LOC3)) goto LA4;
			LOC5 = 0;
			LOC5 = tolower_90014(s->data[(NI)(result + start)]);
			LOC6 = 0;
			LOC6 = tolower_90014(token->data[result]);
			LOC3 = ((NU8)(LOC5) == (NU8)(LOC6));
			LA4: ;
			if (!LOC3) goto LA2;
			result += ((NI) 1);
		} LA2: ;
	}
	{
		if (!!((result == (token ? token->Sup.len : 0)))) goto LA9;
		result = ((NI) 0);
	}
	LA9: ;
	return result;
}

N_NIMCALL(NI, npuParseFloat)(NimStringDesc* s, NF* number, NI start) {
	NI result;
	NF bf;
	result = 0;
	bf = 0;
	result = nimParseBiggestFloat(s, (&bf), start);
	{
		if (!!((result == ((NI) 0)))) goto LA3;
		(*number) = bf;
	}
	LA3: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsDatInit)(void) {
}


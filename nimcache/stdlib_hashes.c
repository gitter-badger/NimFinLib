/* Generated by Nim Compiler v0.11.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -Os  -I/data4/NimCompiler/Nim/lib -o /data4/NimStuff/NimFinLib/nimcache/stdlib_hashes.o /data4/NimStuff/NimFinLib/nimcache/stdlib_hashes.c */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
static N_INLINE(NI, HEX21HEX26_158013)(NI h, NI val);
static N_INLINE(NI, HEX21HEX24_158042)(NI h);
static N_INLINE(NIM_BOOL, ismagicidentseparatorrune_157020)(NCSTRING cs, NI i);
TNimType NTI158005; /* Hash */

static N_INLINE(NI, HEX21HEX26_158013)(NI h, NI val) {
	NI result;
	result = 0;
	result = (NI)((NU64)(h) + (NU64)(val));
	result = (NI)((NU64)(result) + (NU64)((NI)((NU64)(result) << (NU64)(((NI) 10)))));
	result = (NI)(result ^ (NI)((NU64)(result) >> (NU64)(((NI) 6))));
	return result;
}

static N_INLINE(NI, HEX21HEX24_158042)(NI h) {
	NI result;
	result = 0;
	result = (NI)((NU64)(h) + (NU64)((NI)((NU64)(h) << (NU64)(((NI) 3)))));
	result = (NI)(result ^ (NI)((NU64)(result) >> (NU64)(((NI) 11))));
	result = (NI)((NU64)(result) + (NU64)((NI)((NU64)(result) << (NU64)(((NI) 15)))));
	return result;
}

N_NIMCALL(NI, hash_158842)(NimStringDesc* x) {
	NI result;
	NI h;
	result = 0;
	h = ((NI) 0);
	{
		NI i_158857;
		NI HEX3Atmp_158868;
		NI res_158871;
		i_158857 = 0;
		HEX3Atmp_158868 = 0;
		HEX3Atmp_158868 = (NI)((x ? x->Sup.len : 0) - ((NI) 1));
		res_158871 = ((NI) 0);
		{
			while (1) {
				if (!(res_158871 <= HEX3Atmp_158868)) goto LA3;
				i_158857 = res_158871;
				h = HEX21HEX26_158013(h, ((NI) (((NU8)(x->data[i_158857])))));
				res_158871 += ((NI) 1);
			} LA3: ;
		}
	}
	result = HEX21HEX24_158042(h);
	return result;
}

N_NIMCALL(NI, hashignorecase_158985)(NimStringDesc* x) {
	NI result;
	NI h;
	result = 0;
	h = ((NI) 0);
	{
		NI i_159000;
		NI HEX3Atmp_159050;
		NI res_159053;
		i_159000 = 0;
		HEX3Atmp_159050 = 0;
		HEX3Atmp_159050 = (NI)((x ? x->Sup.len : 0) - ((NI) 1));
		res_159053 = ((NI) 0);
		{
			while (1) {
				NIM_CHAR c;
				if (!(res_159053 <= HEX3Atmp_159050)) goto LA3;
				i_159000 = res_159053;
				c = x->data[i_159000];
				{
					if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA6;
					c = ((NIM_CHAR) (((NI) ((NI)(((NI) (((NU8)(c)))) + ((NI) 32))))));
				}
				LA6: ;
				h = HEX21HEX26_158013(h, ((NI) (((NU8)(c)))));
				res_159053 += ((NI) 1);
			} LA3: ;
		}
	}
	result = HEX21HEX24_158042(h);
	return result;
}

static N_INLINE(NIM_BOOL, ismagicidentseparatorrune_157020)(NCSTRING cs, NI i) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	NIM_BOOL LOC2;
	result = 0;
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = ((NU8)(cs[i]) == (NU8)(226));
	if (!(LOC2)) goto LA3;
	LOC2 = ((NU8)(cs[(NI)(i + ((NI) 1))]) == (NU8)(128));
	LA3: ;
	LOC1 = LOC2;
	if (!(LOC1)) goto LA4;
	LOC1 = ((NU8)(cs[(NI)(i + ((NI) 2))]) == (NU8)(147));
	LA4: ;
	result = LOC1;
	return result;
}

N_NIMCALL(NI, hashignorestyle_158890)(NimStringDesc* x) {
	NI result;
	NI h;
	NI i;
	NI xlen;
	result = 0;
	h = ((NI) 0);
	i = ((NI) 0);
	xlen = (x ? x->Sup.len : 0);
	{
		while (1) {
			NIM_CHAR c;
			if (!(i < xlen)) goto LA2;
			c = x->data[i];
			{
				if (!((NU8)(c) == (NU8)(95))) goto LA5;
				i += ((NI) 1);
			}
			goto LA3;
			LA5: ;
			{
				NIM_BOOL LOC8;
				LOC8 = 0;
				LOC8 = ismagicidentseparatorrune_157020(x->data, i);
				if (!LOC8) goto LA9;
				i += ((NI) 3);
			}
			goto LA3;
			LA9: ;
			{
				{
					if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA14;
					c = ((NIM_CHAR) (((NI) ((NI)(((NI) (((NU8)(c)))) + ((NI) 32))))));
				}
				LA14: ;
				h = HEX21HEX26_158013(h, ((NI) (((NU8)(c)))));
				i += ((NI) 1);
			}
			LA3: ;
		} LA2: ;
	}
	result = HEX21HEX24_158042(h);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_hashesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_hashesDatInit)(void) {
NTI158005.size = sizeof(NI);
NTI158005.kind = 31;
NTI158005.base = 0;
NTI158005.flags = 3;
}


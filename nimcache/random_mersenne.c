/* Generated by Nim Compiler v0.11.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -Os  -I/data4/NimCompiler/Nim/lib -o /data4/NimStuff/NimFinLib/nimcache/random_mersenne.o /data4/NimStuff/NimFinLib/nimcache/random_mersenne.c */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct Mersennetwister197035 Mersennetwister197035;
typedef struct TY199057 TY199057;
typedef struct TGenericSeq TGenericSeq;
typedef NU32 TY197036[624];
struct  Mersennetwister197035  {
TY197036 mt;
NI mti;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct TY199057 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(TY199057*, bytestowords_199052)(NU8* bytes, NI bytesLen0);
N_NIMCALL(Mersennetwister197035, initmersennetwister_199034)(NU32* seed, NI seedLen0);
N_NIMCALL(Mersennetwister197035, initmtstate_197043)(void);
N_NIMCALL(void, initbyarray_197116)(Mersennetwister197035* s, NU32* initkey, NI initkeyLen0);
N_NIMCALL(void, initgenrand_197053)(Mersennetwister197035* s, NU32 seed);

N_NIMCALL(Mersennetwister197035, initmersennetwister_199034)(NU32* seed, NI seedLen0) {
	Mersennetwister197035 result;
	memset((void*)(&result), 0, sizeof(result));
	result = initmtstate_197043();
	initbyarray_197116((&result), seed, seedLen0);
	return result;
}

N_NIMCALL(Mersennetwister197035, initmersennetwister_199046)(NU8* seed, NI seedLen0) {
	Mersennetwister197035 result;
	TY199057* words;
	memset((void*)(&result), 0, sizeof(result));
	words = bytestowords_199052(seed, seedLen0);
	result = initmersennetwister_199034(words->data, words->Sup.len);
	return result;
}

N_NIMCALL(Mersennetwister197035, initmersennetwister_199199)(NU32 seed) {
	Mersennetwister197035 result;
	memset((void*)(&result), 0, sizeof(result));
	result = initmtstate_197043();
	initgenrand_197053((&result), seed);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, random_mersenneInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, random_mersenneDatInit)(void) {
}


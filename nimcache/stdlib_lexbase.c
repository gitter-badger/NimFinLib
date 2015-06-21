/* Generated by Nim Compiler v0.11.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -Os  -I/data4/NimCompiler/Nim/lib -o /data4/NimStuff/NimFinLib/nimcache/stdlib_lexbase.o /data4/NimStuff/NimFinLib/nimcache/stdlib_lexbase.c */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Baselexer255024 Baselexer255024;
typedef struct TNimObject TNimObject;
typedef struct Streamobj186027 Streamobj186027;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Baselexer255024  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Streamobj186027* input;
NI linenumber;
NI sentinel;
NI linestart;
NIM_BOOL fileopened;
};
typedef N_NIMCALL_PTR(void, TY186028) (Streamobj186027* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY186032) (Streamobj186027* s);
typedef N_NIMCALL_PTR(void, TY186036) (Streamobj186027* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY186041) (Streamobj186027* s);
typedef N_NIMCALL_PTR(NI, TY186045) (Streamobj186027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(NI, TY186051) (Streamobj186027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY186057) (Streamobj186027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY186063) (Streamobj186027* s);
struct  Streamobj186027  {
  TNimObject Sup;
TY186028 closeimpl;
TY186032 atendimpl;
TY186036 setpositionimpl;
TY186041 getpositionimpl;
TY186045 readdataimpl;
TY186051 peekdataimpl;
TY186057 writedataimpl;
TY186063 flushimpl;
};
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NOCONV(void*, alloc_6001)(NI size);
N_NIMCALL(void, fillbuffer_255102)(Baselexer255024* L);
N_NIMCALL(NI, readdata_186180)(Streamobj186027* s, void* buffer, NI buflen);
N_NOCONV(void*, realloc_6033)(void* p, NI newsize);
N_NIMCALL(void, skiputf8bom_256416)(Baselexer255024* L);
N_NIMCALL(NI, fillbaselexer_255827)(Baselexer255024* L, NI pos);
N_NOCONV(void, dealloc_6048)(void* p);
N_NIMCALL(void, close_186091)(Streamobj186027* s);
extern TNimType NTI3411; /* RootObj */
TNimType NTI255024; /* BaseLexer */
extern TNimType NTI108; /* int */
extern TNimType NTI151; /* cstring */
extern TNimType NTI186025; /* Stream */
extern TNimType NTI138; /* bool */

N_NIMCALL(void, fillbuffer_255102)(Baselexer255024* L) {
	NI charsread;
	NI tocopy;
	NI s;
	NI oldbuflen;
	NI LOC5;
	charsread = 0;
	tocopy = 0;
	s = 0;
	oldbuflen = 0;
	tocopy = (NI)((NI)((*L).buflen - (*L).sentinel) - ((NI) 1));
	{
		if (!(((NI) 0) < tocopy)) goto LA3;
		memmove(((void*) ((*L).buf)), ((void*) ((&(*L).buf[(NI)((*L).sentinel + ((NI) 1))]))), ((NI) ((NI)(tocopy * ((NI) 1)))));
	}
	LA3: ;
	LOC5 = 0;
	LOC5 = readdata_186180((*L).input, ((void*) ((&(*L).buf[tocopy]))), (NI)((NI)((*L).sentinel + ((NI) 1)) * ((NI) 1)));
	charsread = (NI)(LOC5 / ((NI) 1));
	s = (NI)(tocopy + charsread);
	{
		if (!(charsread < (NI)((*L).sentinel + ((NI) 1)))) goto LA8;
		(*L).buf[s] = 0;
		(*L).sentinel = s;
	}
	goto LA6;
	LA8: ;
	{
		s -= ((NI) 1);
		{
			while (1) {
				{
					while (1) {
						NIM_BOOL LOC15;
						LOC15 = 0;
						LOC15 = (((NI) 0) <= s);
						if (!(LOC15)) goto LA16;
						LOC15 = !((((NU8)((*L).buf[s])) == ((NU8)(13)) || ((NU8)((*L).buf[s])) == ((NU8)(10))));
						LA16: ;
						if (!LOC15) goto LA14;
						s -= ((NI) 1);
					} LA14: ;
				}
				{
					if (!(((NI) 0) <= s)) goto LA19;
					(*L).sentinel = s;
					goto LA11;
				}
				goto LA17;
				LA19: ;
				{
					void* LOC22;
					NI LOC23;
					oldbuflen = (*L).buflen;
					(*L).buflen = (NI)((*L).buflen * ((NI) 2));
					LOC22 = 0;
					LOC22 = realloc_6033(((void*) ((*L).buf)), ((NI) ((NI)((*L).buflen * ((NI) 1)))));
					(*L).buf = ((NCSTRING) (LOC22));
					LOC23 = 0;
					LOC23 = readdata_186180((*L).input, ((void*) ((&(*L).buf[oldbuflen]))), (NI)(oldbuflen * ((NI) 1)));
					charsread = (NI)(LOC23 / ((NI) 1));
					{
						if (!(charsread < oldbuflen)) goto LA26;
						(*L).buf[(NI)(oldbuflen + charsread)] = 0;
						(*L).sentinel = (NI)(oldbuflen + charsread);
						goto LA11;
					}
					LA26: ;
					s = (NI)((*L).buflen - ((NI) 1));
				}
				LA17: ;
			}
		} LA11: ;
	}
	LA6: ;
}

N_NIMCALL(void, skiputf8bom_256416)(Baselexer255024* L) {
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = ((NU8)((*L).buf[((NI) 0)]) == (NU8)(239));
		if (!(LOC4)) goto LA5;
		LOC4 = ((NU8)((*L).buf[((NI) 1)]) == (NU8)(187));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		LOC3 = ((NU8)((*L).buf[((NI) 2)]) == (NU8)(191));
		LA6: ;
		if (!LOC3) goto LA7;
		(*L).bufpos += ((NI) 3);
		(*L).linestart += ((NI) 3);
	}
	LA7: ;
}

N_NIMCALL(void, open_255040)(Baselexer255024* L, Streamobj186027* input, NI buflen) {
	void* LOC1;
	unsureAsgnRef((void**) (&(*L).input), input);
	(*L).bufpos = ((NI) 0);
	(*L).buflen = buflen;
	LOC1 = 0;
	LOC1 = alloc_6001(((NI) ((NI)(buflen * ((NI) 1)))));
	(*L).buf = ((NCSTRING) (LOC1));
	(*L).sentinel = (NI)(buflen - ((NI) 1));
	(*L).linestart = ((NI) 0);
	(*L).linenumber = ((NI) 1);
	fillbuffer_255102(L);
	skiputf8bom_256416(L);
}

N_NIMCALL(NI, getcolnumber_255064)(Baselexer255024* L, NI pos) {
	NI result;
	result = 0;
	result = ((NI)(pos - (*L).linestart) > 0? ((NI)(pos - (*L).linestart)) : -((NI)(pos - (*L).linestart)));
	return result;
}

N_NIMCALL(NI, fillbaselexer_255827)(Baselexer255024* L, NI pos) {
	NI result;
	result = 0;
	{
		if (!(pos < (*L).sentinel)) goto LA3;
		result = (NI)(pos + ((NI) 1));
	}
	goto LA1;
	LA3: ;
	{
		fillbuffer_255102(L);
		(*L).bufpos = ((NI) 0);
		result = ((NI) 0);
	}
	LA1: ;
	(*L).linestart = result;
	return result;
}

N_NIMCALL(NI, handlecr_255071)(Baselexer255024* L, NI pos) {
	NI result;
	result = 0;
	(*L).linenumber += ((NI) 1);
	result = fillbaselexer_255827(L, pos);
	{
		if (!((NU8)((*L).buf[result]) == (NU8)(10))) goto LA3;
		result = fillbaselexer_255827(L, result);
	}
	LA3: ;
	return result;
}

N_NIMCALL(NI, handlelf_255079)(Baselexer255024* L, NI pos) {
	NI result;
	result = 0;
	(*L).linenumber += ((NI) 1);
	result = fillbaselexer_255827(L, pos);
	return result;
}

N_NIMCALL(void, close_255050)(Baselexer255024* L) {
	dealloc_6048(((void*) ((*L).buf)));
	close_186091((*L).input);
}
NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseDatInit)(void) {
static TNimNode* TMP380[8];
static TNimNode TMP137[9];
NTI255024.size = sizeof(Baselexer255024);
NTI255024.kind = 17;
NTI255024.base = (&NTI3411);
TMP380[0] = &TMP137[1];
TMP137[1].kind = 1;
TMP137[1].offset = offsetof(Baselexer255024, bufpos);
TMP137[1].typ = (&NTI108);
TMP137[1].name = "bufpos";
TMP380[1] = &TMP137[2];
TMP137[2].kind = 1;
TMP137[2].offset = offsetof(Baselexer255024, buf);
TMP137[2].typ = (&NTI151);
TMP137[2].name = "buf";
TMP380[2] = &TMP137[3];
TMP137[3].kind = 1;
TMP137[3].offset = offsetof(Baselexer255024, buflen);
TMP137[3].typ = (&NTI108);
TMP137[3].name = "bufLen";
TMP380[3] = &TMP137[4];
TMP137[4].kind = 1;
TMP137[4].offset = offsetof(Baselexer255024, input);
TMP137[4].typ = (&NTI186025);
TMP137[4].name = "input";
TMP380[4] = &TMP137[5];
TMP137[5].kind = 1;
TMP137[5].offset = offsetof(Baselexer255024, linenumber);
TMP137[5].typ = (&NTI108);
TMP137[5].name = "lineNumber";
TMP380[5] = &TMP137[6];
TMP137[6].kind = 1;
TMP137[6].offset = offsetof(Baselexer255024, sentinel);
TMP137[6].typ = (&NTI108);
TMP137[6].name = "sentinel";
TMP380[6] = &TMP137[7];
TMP137[7].kind = 1;
TMP137[7].offset = offsetof(Baselexer255024, linestart);
TMP137[7].typ = (&NTI108);
TMP137[7].name = "lineStart";
TMP380[7] = &TMP137[8];
TMP137[8].kind = 1;
TMP137[8].offset = offsetof(Baselexer255024, fileopened);
TMP137[8].typ = (&NTI138);
TMP137[8].name = "fileOpened";
TMP137[0].len = 8; TMP137[0].kind = 2; TMP137[0].sons = &TMP380[0];
NTI255024.node = &TMP137[0];
}


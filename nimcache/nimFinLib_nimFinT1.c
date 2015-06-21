/* Generated by Nim Compiler v0.11.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -Os  -I/data4/NimCompiler/Nim/lib -o nimcache/nimFinLib_nimFinT1.o nimcache/nimFinLib_nimFinT1.c */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <stdio.h>
typedef struct Df246013 Df246013;
typedef struct Nf246011 Nf246011;
typedef struct Pf246009 Pf246009;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY246018 TY246018;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY246021 TY246021;
typedef struct TY120008 TY120008;
typedef struct TY246026 TY246026;
typedef struct TY246038 TY246038;
typedef struct Ts246015 Ts246015;
typedef struct Runningstat159047 Runningstat159047;
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
struct  Pf246009  {
TNimType* m_type;
TY246018* pf;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Nf246011  {
  Pf246009 Sup;
NimStringDesc* nx;
TY246021* dx;
};
struct  Df246013  {
  Nf246011 Sup;
NimStringDesc* stock;
TY120008* date;
TY246026* open;
TY246026* high;
TY246026* low;
TY246026* close;
TY246026* vol;
TY246026* adjc;
TY246038* rc;
TY246038* rca;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Ts246015  {
TNimType* m_type;
TY120008* dd;
TY246026* tx;
};
struct  Runningstat159047  {
NI n;
NF sum;
NF min;
NF max;
NF mean;
NF oldm;
NF olds;
NF news;
};
struct TY246018 {
  TGenericSeq Sup;
  Nf246011 data[SEQ_DECL_SIZE];
};
struct TY246021 {
  TGenericSeq Sup;
  Df246013 data[SEQ_DECL_SIZE];
};
struct TY120008 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY246026 {
  TGenericSeq Sup;
  NF data[SEQ_DECL_SIZE];
};
struct TY246038 {
  TGenericSeq Sup;
  Runningstat159047 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, getsymbol2_276022)(NimStringDesc* symb, NimStringDesc* startdate, NimStringDesc* enddate, Df246013* Result);
N_NIMCALL(NimStringDesc*, ntgetDateStr)(void);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(void, genericReset)(void* dest, TNimType* mt);
N_NIMCALL(void, ema_306633)(Df246013* dx, NI N, Ts246015* Result);
N_NIMCALL(void, showema_306809)(Ts246015* emx, NI N);
N_NIMCALL(void, showdailyreturnscl_295141)(Df246013* self, NI N);
N_NIMCALL(void, setforegroundcolor_240057)(NU8 fg, NIM_BOOL bright);
N_NIMCALL(void, timeseries_315047)(Df246013* self, NimStringDesc* ty, Ts246015* Result);
N_NIMCALL(void, showtimeseries_246101)(Ts246015* ats, NimStringDesc* header, NimStringDesc* ty, NI N);
N_NIMCALL(void, showcurrentstocks_275823)(NimStringDesc* stcks);
static N_INLINE(void, initStackBottomWith)(void* locals);
N_NOINLINE(void, setStackBottom)(void* thestackbottom);
NIM_EXTERNC N_NOINLINE(void, systemInit)(void);
NIM_EXTERNC N_NOINLINE(void, systemDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_timesInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_timesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_posixInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_posixDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_sequtilsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_sequtilsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_unsignedInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_unsignedDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_rawsocketsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_rawsocketsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_opensslInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_opensslDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_netInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_netDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_uriInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_uriDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_etcprivInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_etcprivDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_hashesInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_hashesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strtabsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strtabsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_base64Init)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_base64DatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_mimetypesInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_mimetypesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_mathInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_mathDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_endiansInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_endiansDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_oidsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_oidsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_tablesInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_tablesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_macrosInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_macrosDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_epollInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_epollDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_selectorsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_selectorsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_asyncdispatchInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_asyncdispatchDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_asyncnetInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_asyncnetDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_httpclientInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_httpclientDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_unicodeInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_unicodeDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_fenvInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_fenvDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_pegsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_pegsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_streamsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_streamsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_strfmtInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_strfmtDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_termiosInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_termiosDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_terminalInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_terminalDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parsecsvInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parsecsvDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimfinlib_nimFinLibInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimfinlib_nimFinLibDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimFinT1Init)(void);
NIM_EXTERNC N_NOINLINE(void, nimFinT1DatInit)(void);
STRING_LITERAL(TMP286, "1766.HK", 7);
STRING_LITERAL(TMP287, "2014-01-01", 10);
STRING_LITERAL(TMP296, "^HSI", 4);
STRING_LITERAL(TMP330, "Close prices for ", 17);
STRING_LITERAL(TMP337, "c", 1);
STRING_LITERAL(TMP351, "Close-HEAD", 10);
STRING_LITERAL(TMP352, "head", 4);
STRING_LITERAL(TMP353, "Close-TAIL", 10);
STRING_LITERAL(TMP354, "tail", 4);
Df246013 z_315004;
extern TNimType NTI246013; /* Df */
Df246013 ix_315012;
NI ndays_315020;
Ts246015 ema22_315024;
extern TNimType NTI246015; /* Ts */
Ts246015 dada_315060;

static N_INLINE(void, initStackBottomWith)(void* locals) {
	setStackBottom(locals);
}
void PreMainInner() {
	systemInit();
	stdlib_parseutilsDatInit();
	stdlib_strutilsDatInit();
	stdlib_timesDatInit();
	stdlib_posixDatInit();
	stdlib_osDatInit();
	stdlib_sequtilsDatInit();
	stdlib_unsignedDatInit();
	stdlib_rawsocketsDatInit();
	stdlib_opensslDatInit();
	stdlib_netDatInit();
	stdlib_uriDatInit();
	stdlib_etcprivDatInit();
	stdlib_hashesDatInit();
	stdlib_strtabsDatInit();
	stdlib_base64DatInit();
	stdlib_mimetypesDatInit();
	stdlib_mathDatInit();
	stdlib_endiansDatInit();
	stdlib_oidsDatInit();
	stdlib_tablesDatInit();
	stdlib_macrosDatInit();
	stdlib_epollDatInit();
	stdlib_selectorsDatInit();
	stdlib_asyncdispatchDatInit();
	stdlib_asyncnetDatInit();
	stdlib_httpclientDatInit();
	stdlib_unicodeDatInit();
	stdlib_fenvDatInit();
	stdlib_pegsDatInit();
	stdlib_streamsDatInit();
	HEX00_strfmtDatInit();
	stdlib_termiosDatInit();
	stdlib_terminalDatInit();
	stdlib_lexbaseDatInit();
	stdlib_parsecsvDatInit();
	stdlib_algorithmDatInit();
	nimfinlib_nimFinLibDatInit();
	nimFinT1DatInit();
	stdlib_parseutilsInit();
	stdlib_strutilsInit();
	stdlib_timesInit();
	stdlib_posixInit();
	stdlib_osInit();
	stdlib_sequtilsInit();
	stdlib_unsignedInit();
	stdlib_rawsocketsInit();
	stdlib_opensslInit();
	stdlib_netInit();
	stdlib_uriInit();
	stdlib_etcprivInit();
	stdlib_hashesInit();
	stdlib_strtabsInit();
	stdlib_base64Init();
	stdlib_mimetypesInit();
	stdlib_mathInit();
	stdlib_endiansInit();
	stdlib_oidsInit();
	stdlib_tablesInit();
	stdlib_macrosInit();
	stdlib_epollInit();
	stdlib_selectorsInit();
	stdlib_asyncdispatchInit();
	stdlib_asyncnetInit();
	stdlib_httpclientInit();
	stdlib_unicodeInit();
	stdlib_fenvInit();
	stdlib_pegsInit();
	stdlib_streamsInit();
	HEX00_strfmtInit();
	stdlib_termiosInit();
	stdlib_terminalInit();
	stdlib_lexbaseInit();
	stdlib_parsecsvInit();
	stdlib_algorithmInit();
	nimfinlib_nimFinLibInit();
}

void PreMain() {
	void (*volatile inner)();
	systemDatInit();
	inner = PreMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int cmdCount;
char** cmdLine;
char** gEnv;
N_CDECL(void, NimMainInner)(void) {
	nimFinT1Init();
}

N_CDECL(void, NimMain)(void) {
	void (*volatile inner)();
	PreMain();
	inner = NimMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int main(int argc, char** args, char** env) {
	cmdLine = args;
	cmdCount = argc;
	gEnv = env;
	NimMain();
	return nim_program_result;
}

NIM_EXTERNC N_NOINLINE(void, nimFinT1Init)(void) {
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	z_315004.Sup.Sup.m_type = (&NTI246013);
	ix_315012.Sup.Sup.m_type = (&NTI246013);
	ema22_315024.m_type = (&NTI246015);
	dada_315060.m_type = (&NTI246015);
	LOC1 = 0;
	LOC1 = ntgetDateStr();
	chckNil((void*)(&z_315004));
	genericReset((void*)(&z_315004), (&NTI246013));
	z_315004.Sup.Sup.m_type = (&NTI246013);
	getsymbol2_276022(((NimStringDesc*) &TMP286), ((NimStringDesc*) &TMP287), LOC1, (&z_315004));
	LOC2 = 0;
	LOC2 = ntgetDateStr();
	chckNil((void*)(&ix_315012));
	genericReset((void*)(&ix_315012), (&NTI246013));
	ix_315012.Sup.Sup.m_type = (&NTI246013);
	getsymbol2_276022(((NimStringDesc*) &TMP296), ((NimStringDesc*) &TMP287), LOC2, (&ix_315012));
	ndays_315020 = ((NI) 22);
	chckNil((void*)(&ema22_315024));
	genericReset((void*)(&ema22_315024), (&NTI246015));
	ema22_315024.m_type = (&NTI246015);
	ema_306633((&z_315004), ndays_315020, (&ema22_315024));
	showema_306809((&ema22_315024), ((NI) 5));
	showdailyreturnscl_295141((&z_315004), ((NI) 5));
	printf("\012");
	setforegroundcolor_240057(((NU8) 33), NIM_FALSE);
	printf("%s%s\012", ((NimStringDesc*) &TMP330)? (((NimStringDesc*) &TMP330))->data:"nil", z_315004.stock? (z_315004.stock)->data:"nil");
	setforegroundcolor_240057(((NU8) 37), NIM_FALSE);
	chckNil((void*)(&dada_315060));
	genericReset((void*)(&dada_315060), (&NTI246015));
	dada_315060.m_type = (&NTI246015);
	timeseries_315047((&z_315004), ((NimStringDesc*) &TMP337), (&dada_315060));
	showtimeseries_246101((&dada_315060), ((NimStringDesc*) &TMP351), ((NimStringDesc*) &TMP352), ((NI) 5));
	showtimeseries_246101((&dada_315060), ((NimStringDesc*) &TMP353), ((NimStringDesc*) &TMP354), ((NI) 5));
	showcurrentstocks_275823(z_315004.stock);
}

NIM_EXTERNC N_NOINLINE(void, nimFinT1DatInit)(void) {
}


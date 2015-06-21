/* Generated by Nim Compiler v0.11.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -Os  -I/data4/NimCompiler/Nim/lib -o /data4/NimStuff/NimFinLib/nimcache/stdlib_asyncdispatch.o /data4/NimStuff/NimFinLib/nimcache/stdlib_asyncdispatch.c */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <sys/epoll.h>
typedef struct PdispatcherHEX3Aobjecttype234218 PdispatcherHEX3Aobjecttype234218;
typedef struct PdispatcherbaseHEX3Aobjecttype231593 PdispatcherbaseHEX3Aobjecttype231593;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY231594 TY231594;
typedef struct SelectorHEX3Aobjecttype232241 SelectorHEX3Aobjecttype232241;
typedef struct TY231595 TY231595;
typedef struct FutureHEX3Aobjecttype231094 FutureHEX3Aobjecttype231094;
typedef struct TGenericSeq TGenericSeq;
typedef struct Table232251 Table232251;
typedef struct Keyvaluepairseq232254 Keyvaluepairseq232254;
typedef struct FuturebaseHEX3Aobjecttype231017 FuturebaseHEX3Aobjecttype231017;
typedef struct Exception Exception;
typedef struct NimStringDesc NimStringDesc;
typedef struct Keyvaluepair232257 Keyvaluepair232257;
typedef struct SelectorkeyHEX3Aobjecttype232227 SelectorkeyHEX3Aobjecttype232227;
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
struct  PdispatcherbaseHEX3Aobjecttype231593  {
  TNimObject Sup;
TY231594* timers;
};
struct  PdispatcherHEX3Aobjecttype234218  {
  PdispatcherbaseHEX3Aobjecttype231593 Sup;
SelectorHEX3Aobjecttype232241* selector;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY231595 {
NF Field0;
FutureHEX3Aobjecttype231094* Field1;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
typedef struct epoll_event TY232243[64];
struct  Table232251  {
Keyvaluepairseq232254* data;
NI counter;
};
struct  SelectorHEX3Aobjecttype232241  {
int epollfd;
TY232243 events;
Table232251 fds;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (void* ClEnv);
void* ClEnv;
} TY231018;
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  FuturebaseHEX3Aobjecttype231017  {
  TNimObject Sup;
TY231018 cb;
NIM_BOOL finished;
Exception* error;
NimStringDesc* errorstacktrace;
};
struct  FutureHEX3Aobjecttype231094  {
  FuturebaseHEX3Aobjecttype231017 Sup;
};
struct Keyvaluepair232257 {
NI Field0;
int Field1;
SelectorkeyHEX3Aobjecttype232227* Field2;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  SelectorkeyHEX3Aobjecttype232227  {
int fd;
NU8 events;
TNimObject* data;
};
struct TY231594 {
  TGenericSeq Sup;
  TY231595 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq232254 {
  TGenericSeq Sup;
  Keyvaluepair232257 data[SEQ_DECL_SIZE];
};
NI currentid_231041;
PdispatcherHEX3Aobjecttype234218* gdisp_234259;
NIM_EXTERNC N_NOINLINE(void, stdlib_asyncdispatchInit)(void) {
	currentid_231041 = ((NI) 0);
}

NIM_EXTERNC N_NOINLINE(void, stdlib_asyncdispatchDatInit)(void) {
}

CC = gcc
LINKFORSHARED := -Xlinker -export-dynamic
LIBS := -ldl 
MODLIBS := -lm
HEADERS := -I ./Include -I ./
SOURCE := mysandbox.c
TARGET := mysandbox
OBJS := Modules/getbuildinfo.o Parser/token.o  Parser/pegen.o Parser/pegen_errors.o Parser/action_helpers.o Parser/parser.o Parser/string_parser.o Parser/peg_api.o Parser/myreadline.o Parser/tokenizer.o Objects/abstract.o Objects/boolobject.o Objects/bytes_methods.o Objects/bytearrayobject.o Objects/bytesobject.o Objects/call.o Objects/capsule.o Objects/cellobject.o Objects/classobject.o Objects/codeobject.o Objects/complexobject.o Objects/descrobject.o Objects/enumobject.o Objects/exceptions.o Objects/genericaliasobject.o Objects/genobject.o Objects/fileobject.o Objects/floatobject.o Objects/frameobject.o Objects/funcobject.o Objects/interpreteridobject.o Objects/iterobject.o Objects/listobject.o Objects/longobject.o Objects/dictobject.o Objects/odictobject.o Objects/memoryobject.o Objects/methodobject.o Objects/moduleobject.o Objects/namespaceobject.o Objects/object.o Objects/obmalloc.o Objects/picklebufobject.o Objects/rangeobject.o Objects/setobject.o Objects/sliceobject.o Objects/structseq.o Objects/tupleobject.o Objects/typeobject.o Objects/typevarobject.o Objects/unicodeobject.o Objects/unicodectype.o Objects/unionobject.o Objects/weakrefobject.o Python/asm_trampoline.o Python/_warnings.o Python/Python-ast.o Python/Python-tokenize.o Python/asdl.o Python/assemble.o Python/ast.o Python/ast_opt.o Python/ast_unparse.o Python/bltinmodule.o Python/ceval.o Python/codecs.o Python/compile.o Python/context.o Python/dynamic_annotations.o Python/errors.o Python/executor.o Python/flowgraph.o Python/frame.o Python/frozenmain.o Python/future.o Python/getargs.o Python/getcompiler.o Python/getcopyright.o Python/getplatform.o Python/getversion.o Python/ceval_gil.o Python/hamt.o Python/hashtable.o Python/import.o Python/importdl.o Python/initconfig.o Python/instrumentation.o Python/intrinsics.o Python/legacy_tracing.o Python/marshal.o Python/modsupport.o Python/mysnprintf.o Python/mystrtoul.o Python/optimizer.o Python/pathconfig.o Python/preconfig.o Python/pyarena.o Python/pyctype.o Python/pyfpe.o Python/pyhash.o Python/pylifecycle.o Python/pymath.o Python/pystate.o Python/pythonrun.o Python/pytime.o Python/bootstrap_hash.o Python/specialize.o Python/structmember.o Python/symtable.o Python/sysmodule.o Python/thread.o Python/traceback.o Python/tracemalloc.o Python/getopt.o Python/pystrcmp.o Python/pystrtod.o Python/pystrhex.o Python/dtoa.o Python/formatter_unicode.o Python/fileutils.o Python/suggestions.o Python/perf_trampoline.o Python/dynload_shlib.o     Modules/config.o Modules/main.o Modules/gcmodule.o Modules/atexitmodule.o  Modules/faulthandler.o  Modules/posixmodule.o  Modules/signalmodule.o  Modules/_tracemalloc.o  Modules/_codecsmodule.o  Modules/_collectionsmodule.o  Modules/errnomodule.o  Modules/_io/_iomodule.o Modules/_io/iobase.o Modules/_io/fileio.o Modules/_io/bytesio.o Modules/_io/bufferedio.o Modules/_io/textio.o Modules/_io/stringio.o  Modules/itertoolsmodule.o  Modules/_sre/sre.o  Modules/_threadmodule.o  Modules/timemodule.o  Modules/_typingmodule.o  Modules/_weakref.o  Modules/_abc.o  Modules/_functoolsmodule.o  Modules/_localemodule.o  Modules/_operator.o  Modules/_stat.o  Modules/symtablemodule.o  Modules/pwdmodule.o Python/deepfreeze/deepfreeze.o Modules/getpath.o Python/frozen.o 
CFLAGS :=
CFLAGS += -Wall -O -ggdb -Wstrict-prototypes -Wno-pointer-sign -finstrument-functions -fdump-rtl-expand
CFLAGS += -DDEBUG -D_REENTRANT

.PHONY: all
all: build run

.PHONY: build
build: $(TARGET)

$(TARGET): 
	@$(CC) $(SOURCE) $(HEADERS) $(LINKFORSHARED) -o $@ $(OBJS) $(LIBS) $(MODLIBS)

.PHONY: run
run:
	@./$(TARGET)
CC = gcc
LINKFORSHARED := -Xlinker -export-dynamic
LIBS := -ldl 
MODLIBS := -lm
HEADERS := -I ../Include -I ../
SOURCE := mysandbox.c
TARGET := mysandbox
OBJ_MODPATH := ../Modules/
OBJ_OBJSPATH := ../Objects/
OBJ_PARSERPATH := ../Parser/
OBJ_PYTHONPATH := ../Python/
OBJS := $(OBJ_MODPATH)getbuildinfo.o $(OBJ_PARSERPATH)token.o  $(OBJ_PARSERPATH)pegen.o $(OBJ_PARSERPATH)pegen_errors.o $(OBJ_PARSERPATH)action_helpers.o $(OBJ_PARSERPATH)parser.o $(OBJ_PARSERPATH)string_parser.o $(OBJ_PARSERPATH)peg_api.o $(OBJ_PARSERPATH)myreadline.o $(OBJ_PARSERPATH)tokenizer.o $(OBJ_OBJSPATH)abstract.o $(OBJ_OBJSPATH)boolobject.o $(OBJ_OBJSPATH)bytes_methods.o $(OBJ_OBJSPATH)bytearrayobject.o $(OBJ_OBJSPATH)bytesobject.o $(OBJ_OBJSPATH)call.o $(OBJ_OBJSPATH)capsule.o $(OBJ_OBJSPATH)cellobject.o $(OBJ_OBJSPATH)classobject.o $(OBJ_OBJSPATH)codeobject.o $(OBJ_OBJSPATH)complexobject.o $(OBJ_OBJSPATH)descrobject.o $(OBJ_OBJSPATH)enumobject.o $(OBJ_OBJSPATH)exceptions.o $(OBJ_OBJSPATH)genericaliasobject.o $(OBJ_OBJSPATH)genobject.o $(OBJ_OBJSPATH)fileobject.o $(OBJ_OBJSPATH)floatobject.o $(OBJ_OBJSPATH)frameobject.o $(OBJ_OBJSPATH)funcobject.o $(OBJ_OBJSPATH)interpreteridobject.o $(OBJ_OBJSPATH)iterobject.o $(OBJ_OBJSPATH)listobject.o $(OBJ_OBJSPATH)longobject.o $(OBJ_OBJSPATH)dictobject.o $(OBJ_OBJSPATH)odictobject.o $(OBJ_OBJSPATH)memoryobject.o $(OBJ_OBJSPATH)methodobject.o $(OBJ_OBJSPATH)moduleobject.o $(OBJ_OBJSPATH)namespaceobject.o $(OBJ_OBJSPATH)object.o $(OBJ_OBJSPATH)obmalloc.o $(OBJ_OBJSPATH)picklebufobject.o $(OBJ_OBJSPATH)rangeobject.o $(OBJ_OBJSPATH)setobject.o $(OBJ_OBJSPATH)sliceobject.o $(OBJ_OBJSPATH)structseq.o $(OBJ_OBJSPATH)tupleobject.o $(OBJ_OBJSPATH)typeobject.o $(OBJ_OBJSPATH)typevarobject.o $(OBJ_OBJSPATH)unicodeobject.o $(OBJ_OBJSPATH)unicodectype.o $(OBJ_OBJSPATH)unionobject.o $(OBJ_OBJSPATH)weakrefobject.o $(OBJ_PYTHONPATH)asm_trampoline.o $(OBJ_PYTHONPATH)_warnings.o $(OBJ_PYTHONPATH)Python-ast.o $(OBJ_PYTHONPATH)Python-tokenize.o $(OBJ_PYTHONPATH)asdl.o $(OBJ_PYTHONPATH)assemble.o $(OBJ_PYTHONPATH)ast.o $(OBJ_PYTHONPATH)ast_opt.o $(OBJ_PYTHONPATH)ast_unparse.o $(OBJ_PYTHONPATH)bltinmodule.o $(OBJ_PYTHONPATH)ceval.o $(OBJ_PYTHONPATH)codecs.o $(OBJ_PYTHONPATH)compile.o $(OBJ_PYTHONPATH)context.o $(OBJ_PYTHONPATH)dynamic_annotations.o $(OBJ_PYTHONPATH)errors.o $(OBJ_PYTHONPATH)executor.o $(OBJ_PYTHONPATH)flowgraph.o $(OBJ_PYTHONPATH)frame.o $(OBJ_PYTHONPATH)frozenmain.o $(OBJ_PYTHONPATH)future.o $(OBJ_PYTHONPATH)getargs.o $(OBJ_PYTHONPATH)getcompiler.o $(OBJ_PYTHONPATH)getcopyright.o $(OBJ_PYTHONPATH)getplatform.o $(OBJ_PYTHONPATH)getversion.o $(OBJ_PYTHONPATH)ceval_gil.o $(OBJ_PYTHONPATH)hamt.o $(OBJ_PYTHONPATH)hashtable.o $(OBJ_PYTHONPATH)import.o $(OBJ_PYTHONPATH)importdl.o $(OBJ_PYTHONPATH)initconfig.o $(OBJ_PYTHONPATH)instrumentation.o $(OBJ_PYTHONPATH)intrinsics.o $(OBJ_PYTHONPATH)legacy_tracing.o $(OBJ_PYTHONPATH)marshal.o $(OBJ_PYTHONPATH)modsupport.o $(OBJ_PYTHONPATH)mysnprintf.o $(OBJ_PYTHONPATH)mystrtoul.o $(OBJ_PYTHONPATH)optimizer.o $(OBJ_PYTHONPATH)pathconfig.o $(OBJ_PYTHONPATH)preconfig.o $(OBJ_PYTHONPATH)pyarena.o $(OBJ_PYTHONPATH)pyctype.o $(OBJ_PYTHONPATH)pyfpe.o $(OBJ_PYTHONPATH)pyhash.o $(OBJ_PYTHONPATH)pylifecycle.o $(OBJ_PYTHONPATH)pymath.o $(OBJ_PYTHONPATH)pystate.o $(OBJ_PYTHONPATH)pythonrun.o $(OBJ_PYTHONPATH)pytime.o $(OBJ_PYTHONPATH)bootstrap_hash.o $(OBJ_PYTHONPATH)specialize.o $(OBJ_PYTHONPATH)structmember.o $(OBJ_PYTHONPATH)symtable.o $(OBJ_PYTHONPATH)sysmodule.o $(OBJ_PYTHONPATH)thread.o $(OBJ_PYTHONPATH)traceback.o $(OBJ_PYTHONPATH)tracemalloc.o $(OBJ_PYTHONPATH)getopt.o $(OBJ_PYTHONPATH)pystrcmp.o $(OBJ_PYTHONPATH)pystrtod.o $(OBJ_PYTHONPATH)pystrhex.o $(OBJ_PYTHONPATH)dtoa.o $(OBJ_PYTHONPATH)formatter_unicode.o $(OBJ_PYTHONPATH)fileutils.o $(OBJ_PYTHONPATH)suggestions.o $(OBJ_PYTHONPATH)perf_trampoline.o $(OBJ_PYTHONPATH)dynload_shlib.o     $(OBJ_MODPATH)config.o $(OBJ_MODPATH)main.o $(OBJ_MODPATH)gcmodule.o $(OBJ_MODPATH)atexitmodule.o  $(OBJ_MODPATH)faulthandler.o  $(OBJ_MODPATH)posixmodule.o  $(OBJ_MODPATH)signalmodule.o  $(OBJ_MODPATH)_tracemalloc.o  $(OBJ_MODPATH)_codecsmodule.o  $(OBJ_MODPATH)_collectionsmodule.o  $(OBJ_MODPATH)errnomodule.o  $(OBJ_MODPATH)_io/_iomodule.o $(OBJ_MODPATH)_io/iobase.o $(OBJ_MODPATH)_io/fileio.o $(OBJ_MODPATH)_io/bytesio.o $(OBJ_MODPATH)_io/bufferedio.o $(OBJ_MODPATH)_io/textio.o $(OBJ_MODPATH)_io/stringio.o  $(OBJ_MODPATH)itertoolsmodule.o  $(OBJ_MODPATH)_sre/sre.o  $(OBJ_MODPATH)_threadmodule.o  $(OBJ_MODPATH)timemodule.o  $(OBJ_MODPATH)_typingmodule.o  $(OBJ_MODPATH)_weakref.o  $(OBJ_MODPATH)_abc.o  $(OBJ_MODPATH)_functoolsmodule.o  $(OBJ_MODPATH)_localemodule.o  $(OBJ_MODPATH)_operator.o  $(OBJ_MODPATH)_stat.o  $(OBJ_MODPATH)symtablemodule.o  $(OBJ_MODPATH)pwdmodule.o $(OBJ_PYTHONPATH)deepfreeze/deepfreeze.o $(OBJ_MODPATH)getpath.o $(OBJ_PYTHONPATH)frozen.o 
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

.PHONY: clean
clean:
	@rm $(TARGET)